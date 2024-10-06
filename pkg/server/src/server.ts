import {
  createConnection,
  TextDocuments,
  Diagnostic,
  DiagnosticSeverity,
  ProposedFeatures,
  InitializeParams,
  DidChangeConfigurationNotification,
  CompletionItem,
  TextDocumentSyncKind,
  InitializeResult,
  CompletionParams,
} from "vscode-languageserver/node";

import { Position, TextDocument } from "vscode-languageserver-textdocument";

import {
  getEnvironmentVariablesCompletionItems,
  requestLineVersionCompletionItems,
  requestLineMethodCompletionItems,
  requestLineSchemaCompletionItems,
  headerNameCompletionItems,
  headerValueCompletionItems,
} from "./completions";

import TreeSitter from "tree-sitter";
import Kulala from "@mistweaverco/tree-sitter-kulala";

const TreeSitterParser = new TreeSitter();
TreeSitterParser.setLanguage(Kulala);

// Create a connection for the server, using stdio as a transport.
// Also include all preview / proposed LSP features.
const connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager.
const documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize((params: InitializeParams) => {
  const capabilities = params.capabilities;

  // Does the client support the `workspace/configuration` request?
  // If not, we fall back using global settings.
  hasConfigurationCapability = !!(
    capabilities.workspace && !!capabilities.workspace.configuration
  );
  hasWorkspaceFolderCapability = !!(
    capabilities.workspace && !!capabilities.workspace.workspaceFolders
  );
  hasDiagnosticRelatedInformationCapability = !!(
    capabilities.textDocument &&
    capabilities.textDocument.publishDiagnostics &&
    capabilities.textDocument.publishDiagnostics.relatedInformation
  );

  const result: InitializeResult = {
    capabilities: {
      textDocumentSync: TextDocumentSyncKind.Incremental,
      // Tell the client that this server supports code completion.
      completionProvider: {
        resolveProvider: true,
      },
    },
  };
  if (hasWorkspaceFolderCapability) {
    result.capabilities.workspace = {
      workspaceFolders: {
        supported: true,
      },
    };
  }
  return result;
});

connection.onInitialized(() => {
  if (hasConfigurationCapability) {
    // Register for all configuration changes.
    connection.client.register(
      DidChangeConfigurationNotification.type,
      undefined,
    );
  }
  if (hasWorkspaceFolderCapability) {
    connection.workspace.onDidChangeWorkspaceFolders((event) => {
      connection.console.log(
        "Workspace folder change event received., " + JSON.stringify(event),
      );
    });
  }
});

// The default settings
interface DefaultSettings {
  maxNumberOfProblems: number;
  selectedEnv: string;
}

// The global settings, can be updated via `workspace/configuration` request.
const defaultSettings: DefaultSettings = {
  maxNumberOfProblems: 1000,
  selectedEnv: "dev",
};
let globalSettings: DefaultSettings = defaultSettings;

// Cache the settings of all open documents
const documentSettings: Map<string, Thenable<DefaultSettings>> = new Map();

connection.onDidChangeConfiguration((change) => {
  if (hasConfigurationCapability) {
    // Reset all cached document settings
    documentSettings.clear();
  } else {
    globalSettings = <DefaultSettings>(
      (change.settings.languageServerExample || defaultSettings)
    );
  }

  // Revalidate all open text documents
  documents.all().forEach(validateTextDocument);
});

function getDocumentSettings(resource: string): Thenable<DefaultSettings> {
  if (!hasConfigurationCapability) {
    return Promise.resolve(globalSettings);
  }
  let result = documentSettings.get(resource);
  if (!result) {
    result = connection.workspace.getConfiguration({
      scopeUri: resource,
      section: "kulala_ls",
    });
    if (result) {
      result = { ...defaultSettings, ...result };
    } else {
      return Promise.resolve(defaultSettings);
    }
    documentSettings.set(resource, result);
  }
  return result;
}

// Only keep settings for open documents
documents.onDidClose((e) => {
  documentSettings.delete(e.document.uri);
});

// The content of a text document has changed. This event is emitted
// when the text document first opened or when its content has changed.
documents.onDidChangeContent((change) => {
  connection.console.log("onDidChangeContent: " + JSON.stringify(change));
  validateTextDocument(change.document);
});

async function validateTextDocument(textDocument: TextDocument): Promise<void> {
  const settings = await getDocumentSettings(textDocument.uri);

  // The validator creates diagnostics for all uppercase words length 84 and more

  // TODO: think about a real use case for this
  const text = textDocument.getText();
  const pattern = /\b[A-Z]{84,}\b/g;
  let m: RegExpExecArray | null;

  let problems = 0;
  const diagnostics: Diagnostic[] = [];
  while ((m = pattern.exec(text)) && problems < settings.maxNumberOfProblems) {
    problems++;
    const diagnostic: Diagnostic = {
      severity: DiagnosticSeverity.Warning,
      range: {
        start: textDocument.positionAt(m.index),
        end: textDocument.positionAt(m.index + m[0].length),
      },
      message: `${m[0]} is all uppercase.`,
      source: "ex",
    };
    if (hasDiagnosticRelatedInformationCapability) {
      diagnostic.relatedInformation = [
        {
          location: {
            uri: textDocument.uri,
            range: Object.assign({}, diagnostic.range),
          },
          message: "Spelling matters",
        },
        {
          location: {
            uri: textDocument.uri,
            range: Object.assign({}, diagnostic.range),
          },
          message: "Particularly for names",
        },
      ];
    }
    diagnostics.push(diagnostic);
  }

  connection.sendDiagnostics({ uri: textDocument.uri, diagnostics });
}

connection.onDidChangeWatchedFiles((change) => {
  connection.console.log(
    "We received a file change event: " + JSON.stringify(change),
  );
});

const getCurrentTreeSitterNode = (
  uri: string,
  position: Position,
): TreeSitter.SyntaxNode | null => {
  const textDocument = documents.get(uri) as TextDocument;
  const tree = TreeSitterParser.parse(textDocument.getText());
  const rootNode = tree.rootNode;

  const findNodeAtPosition = (
    node: TreeSitter.SyntaxNode,
  ): TreeSitter.SyntaxNode | null => {
    const nodeStart = node.startPosition;
    const nodeEnd = node.endPosition;

    // Check if the position is within the node's range
    if (
      position.line > nodeStart.row ||
      (position.line === nodeStart.row &&
        position.character >= nodeStart.column)
    ) {
      if (
        position.line < nodeEnd.row ||
        (position.line === nodeEnd.row && position.character <= nodeEnd.column)
      ) {
        // Recursively check child nodes, returning the most specific one
        for (let i = 0; i < node.childCount; i++) {
          const child = node.child(i) as TreeSitter.SyntaxNode;
          const foundNode = findNodeAtPosition(child);
          if (foundNode) {
            return foundNode;
          }
        }
        // If no more specific child node is found, return this node
        return node;
      }
    }
    return null;
  };

  return findNodeAtPosition(rootNode);
};

const getTreeSitterDocumentVariables = (
  textDocument: TextDocument,
): Record<string, string> => {
  const tree = TreeSitterParser.parse(textDocument.getText());
  const rootNode = tree.rootNode;

  const variables: Record<string, string> = {};

  const findVariableDeclarations = (node: TreeSitter.SyntaxNode) => {
    if (node.type === "variable_declaration") {
      // Extract variable name and value from the node
      const variableNameNode = node.namedChild(0);
      const variableValueNode = node.namedChild(1);

      const variableName = variableNameNode ? variableNameNode.text : "";
      const variableValue = variableValueNode ? variableValueNode.text : "";

      if (variableName) {
        variables[variableName] = variableValue;
      }
    }

    // Recursively visit child nodes
    for (let i = 0; i < node.childCount; i++) {
      findVariableDeclarations(node.child(i) as TreeSitter.SyntaxNode);
    }
  };

  // Start the traversal from the root node
  findVariableDeclarations(rootNode);

  return variables;
};

const getCompletionsBasedOnPosition = (
  completionParams: CompletionParams,
): CompletionItem[] => {
  let completions = [] as CompletionItem[];
  const node = getCurrentTreeSitterNode(
    completionParams.textDocument.uri,
    completionParams.position,
  );
  if (!node) {
    return completions;
  }
  const parentType = node.parent?.type;
  if (
    (parentType === "ERROR" && node.type === "{{") ||
    (parentType === "variable" && node.type === "identifier")
  ) {
    completions = getEnvironmentVariablesCompletionItems({
      documentPath: completionParams.textDocument.uri,
      documentVariables: getTreeSitterDocumentVariables(
        documents.get(completionParams.textDocument.uri) as TextDocument,
      ),
      selectedEnv: globalSettings.selectedEnv,
    });
  }
  if (parentType === "request" && node.type === "target_url") {
    completions = [
      ...requestLineMethodCompletionItems,
      ...requestLineSchemaCompletionItems,
    ];
  }
  if (parentType === "request" && node.type === "http_version") {
    completions = requestLineVersionCompletionItems;
  }
  if (parentType === "header" && node.type === "header_entity") {
    completions = headerNameCompletionItems;
  }
  if (parentType === "header" && node.type === "value") {
    completions = headerValueCompletionItems[
      node.parent?.firstChild?.text as string
    ] as CompletionItem[];
  }
  return completions;
};

connection.onCompletion(
  (completionParams: CompletionParams): CompletionItem[] => {
    connection.console.log("onCompletion: " + JSON.stringify(completionParams));
    return getCompletionsBasedOnPosition(completionParams);
  },
);

// This handler resolves additional information for the item selected in
// the completion list.
connection.onCompletionResolve((item: CompletionItem): CompletionItem => {
  return {
    ...item,
    detail: item.data.detail,
    documentation: item.data.documentation,
  };
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

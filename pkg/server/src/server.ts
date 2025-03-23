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
  MarkupKind,
  ExecuteCommandParams,
} from "vscode-languageserver/node";

import { Position, TextDocument } from "vscode-languageserver-textdocument";
import { LoggerBuilder } from "./Logger";

import {
  getEnvironmentVariablesCompletionItems,
  requestLineVersionCompletionItems,
  requestLineMethodCompletionItems,
  requestLineSchemaCompletionItems,
  headerNameCompletionItems,
  headerValueCompletionItems,
  getGraphQLCompletionItems,
} from "./completions";

import TreeSitter from "tree-sitter";
import Kulala from "@mistweaverco/tree-sitter-kulala";

const Logger = new LoggerBuilder();

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
      executeCommandProvider: {
        commands: ["addRequestVariables"],
      },
      // Enable completion with documentation support
      completionProvider: {
        resolveProvider: true, // Enable resolving additional information
        triggerCharacters: [".", ":", "$", "(", ","],
      },
      // Enable hover with documentation support
      hoverProvider: true,
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
    connection.workspace.onDidChangeWorkspaceFolders(() => {
      // handle workspace folder changes
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

type RequestVariables = {
  [key: string]: {
    [key: string]: {
      body: unknown;
      headers: Record<string, string>;
    };
  };
};

const REQUEST_VARIABLES: RequestVariables = {};

connection.onExecuteCommand((params: ExecuteCommandParams) => {
  if (params.command === "addRequestVariables") {
    try {
      if (params.arguments && params.arguments.length > 0) {
        const args = params.arguments[0];
        REQUEST_VARIABLES[args.doc] = REQUEST_VARIABLES[args.doc] || {};
        REQUEST_VARIABLES[args.doc][args.name] = {
          body: args.body,
          headers: args.headers,
        };

        Logger.log("Request variables received and stored.");
        Logger.log(JSON.stringify(REQUEST_VARIABLES, null, 2));

        return "Variables received";
      } else {
        Logger.log("No arguments provided for setRequestVariables");
        return "No arguments provided";
      }
    } catch (error) {
      if (error instanceof Error) {
        Logger.log(`Error processing JSON: ${error.message}`);
        return `Error processing JSON: ${error.message}`;
      } else {
        Logger.log(`Unknown error processing JSON.`);
        return `Unknown error processing JSON.`;
      }
    }
  } else {
    Logger.log(`Unknown command: ${params.command}`);
    return `Unknown command: ${params.command}`;
  }
});

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
  Logger.log("We received a file change event: " + JSON.stringify(change));
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

const getNodeThatBelongsToParentType = (
  parentType: string,
  node: TreeSitter.SyntaxNode,
): TreeSitter.SyntaxNode | null => {
  let currentNode = node;
  while (currentNode.type !== parentType && currentNode.type !== "document") {
    currentNode = currentNode.parent as TreeSitter.SyntaxNode;
  }
  if (currentNode.type === parentType) {
    return currentNode;
  }
  return null;
};

// we're in a section and have no children, this means we're starting a request,
// or we're in a section with only one or more comment children and/or
// one or more request_separator children
const isAtRequestStart = (node: TreeSitter.SyntaxNode): boolean => {
  const allowedChildTypes = ["comment", "request_separator"];
  if (node.type === "section" && node.childCount === 0) {
    return true;
  }
  if (node.type === "section") {
    for (let i = 0; i < node.childCount; i++) {
      const child = node.child(i);
      if (!child) {
        return false;
      }
      if (!allowedChildTypes.includes(child.type)) {
        return false;
      }
    }
    return true;
  }

  return false;
};

// we're in an ERROR and have one child that is method, this means we're in a request
// and we're at the request scheme like before https, http, ws, wss
const isAtRequestScheme = (node: TreeSitter.SyntaxNode): boolean => {
  const atStart =
    node.type === "ERROR" &&
    node.childCount === 1 &&
    node.firstChild?.type === "method";
  return atStart;
};

// we're in a request node and have two children, method and url, this means we're at the http version
const isAtHttpVersion = (node: TreeSitter.SyntaxNode): boolean => {
  return (
    node.type === "target_url" &&
    node.parent?.childCount === 2 &&
    node.parent?.firstChild?.type === "method" &&
    node.parent?.lastChild?.type === "target_url"
  );
};

const isAtHeaderStart = (node: TreeSitter.SyntaxNode): boolean => {
  const firstHeader =
    node.type === "request" &&
    node.childCount === 2 &&
    node.firstChild?.type === "method" &&
    node.lastChild?.type === "target_url";
  const consecutiveHeaders = node.type === "header" && node.childCount === 3;
  const inTheMiddle =
    (node.type === "target_url" && node.childCount === 0) ||
    (node.type === "header_entity" && node.parent?.childCount === 1);
  return firstHeader || consecutiveHeaders || inTheMiddle;
};

const isAtHeaderEntity = (node: TreeSitter.SyntaxNode): boolean => {
  const atEntityStart =
    node.type === "header" && node.firstChild?.type === "header_entity";
  const atEntityValue = node.type === "value" && node.parent?.type === "header";
  return atEntityStart || atEntityValue;
};

const isAtEnvironmentVariable = (
  node: TreeSitter.SyntaxNode,
  position: Position,
): boolean => {
  const parentType = node.parent?.type;
  const isBody = node.type.endsWith("_body");

  // If we're in body,
  // we only have the node.text available, because we don't want to add parsers for
  // every grammar you can think of.
  // we're checking if the cursor is at the start of a variable then, we show the completions
  if (isBody) {
    // The cursor must be at least at position 2 for '{{' to exist before it.
    if (position.character < 2) {
      return false;
    }

    // Get the position.line but relative to the body node start
    // because the position.line is relative to the whole document
    // and we need to get the line relative to the body node
    // so we can get the correct line from the body text
    const bodyStartLine = node.startPosition.row;
    const positionLine = position.line - bodyStartLine;

    // We need to get the current line, because we can't get the whole text
    // from the node, because it's a body node
    // we're getting the line from the start of the line to the cursor position
    // then we're checking if the last occurrence of '{{' is before the cursor
    const bodySplit = node.text.trim().split("\n");
    const bodyText = bodySplit[positionLine];
    if (!bodyText) {
      return false;
    }

    // Find the last occurrence of '{{'
    const lastDoubleBraceIndex = bodyText.lastIndexOf("{{");
    if (lastDoubleBraceIndex === -1) {
      return false;
    }

    // The variable text starts immediately after '{{'
    const variableStartIndex = lastDoubleBraceIndex + 2;

    // If the cursor is before the variable even starts, it's not at an environment variable.
    if (position.character < variableStartIndex) {
      return false;
    }

    // Check if there's a closing '}}' between the start of the variable and the cursor.
    // If there is, that means the variable is already closed.
    const textBetween = bodyText.substring(
      variableStartIndex,
      position.character,
    );
    if (textBetween.includes("}}")) {
      return false;
    }
    return true;
  }

  return (
    (parentType === "ERROR" && node.type === "{{") ||
    (parentType === "variable" && node.type === "identifier")
  );
};

const getCompletionsBasedOnPosition = (
  completionParams: CompletionParams,
): CompletionItem[] => {
  const completions = [] as CompletionItem[];
  const node = getCurrentTreeSitterNode(
    completionParams.textDocument.uri,
    completionParams.position,
  );
  if (!node) {
    return completions;
  }
  if (isAtEnvironmentVariable(node, completionParams.position)) {
    return getEnvironmentVariablesCompletionItems({
      documentPath: completionParams.textDocument.uri,
      documentVariables: getTreeSitterDocumentVariables(
        documents.get(completionParams.textDocument.uri) as TextDocument,
      ),
      selectedEnv: globalSettings.selectedEnv,
    });
  }
  if (isAtRequestStart(node)) {
    return requestLineMethodCompletionItems;
  }
  if (isAtRequestScheme(node)) {
    return requestLineSchemaCompletionItems;
  }
  if (isAtHttpVersion(node)) {
    return requestLineVersionCompletionItems;
  }
  if (isAtHeaderStart(node)) {
    return headerNameCompletionItems;
  }
  if (isAtHeaderEntity(node)) {
    const headerName = (node.firstChild?.text ||
      node.parent?.firstChild?.text) as string;
    return headerValueCompletionItems[headerName] || [];
  }
  const graphqlDataNode = getNodeThatBelongsToParentType("graphql_data", node);
  if (graphqlDataNode) {
    return getGraphQLCompletionItems({
      documentPath: completionParams.textDocument.uri,
      documentText: documents
        .get(completionParams.textDocument.uri)
        ?.getText() as string,
      graphQLDataNode: graphqlDataNode,
      position: completionParams.position,
    });
  }
  return completions;
};

connection.onCompletion(
  (completionParams: CompletionParams): CompletionItem[] => {
    return getCompletionsBasedOnPosition(completionParams);
  },
);

// Add completion resolve handler for documentation
connection.onCompletionResolve((item: CompletionItem): CompletionItem => {
  if (item.documentation === undefined) {
    // If documentation exists but wasn't initially sent
    return {
      ...item,
      documentation: {
        kind: MarkupKind.Markdown,
        value: item.documentation || "",
      },
    };
  }
  return item;
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

import TreeSitter, { SyntaxNode } from "tree-sitter";
import GraphQL from "@mistweaverco/tree-sitter-graphql";
import {
  GraphQLField,
  GraphQLIntrospectionResult,
  GraphQLType,
  GraphQLTypeRef,
} from "./GraphQL.types";
import { CompletionItemKind } from "vscode-languageserver";
import * as fs from "fs";
import * as path from "path";
import { Position } from "vscode-languageserver-textdocument";
import { FileLogger } from "./../lib/FileLogger";

const SCHEMA_FILE_SUFFIX = "graphql-schema.json";

const getSchemaFilePath = (documentPath: string) => {
  let currentPath = path.dirname(documentPath);
  while (currentPath) {
    const schemaPath = path.join(currentPath, SCHEMA_FILE_SUFFIX);
    if (fs.existsSync(schemaPath)) {
      return schemaPath;
    }
    const parentPath = path.dirname(currentPath);
    if (parentPath === currentPath) break;
    currentPath = parentPath;
  }
  return null;
};

const getSchemaData = (
  schemaPath: string,
): GraphQLIntrospectionResult | null => {
  try {
    const fileContent = fs.readFileSync(schemaPath, "utf8");
    const json = JSON.parse(fileContent);
    return json?.data?.__schema || null;
  } catch (error) {
    console.error("Error reading schema file:", error);
    return null;
  }
};

const resolveGraphQLType = (type: GraphQLTypeRef): string | undefined => {
  while (type?.kind === "NON_NULL" || type?.kind === "LIST") {
    type = type.ofType as GraphQLTypeRef;
  }
  return type?.name;
};

const extractGraphQLFieldPath = (
  documentText: string,
  graphqlNode: TreeSitter.SyntaxNode,
  position: Position,
) => {
  const TreeSitterParser = new TreeSitter();
  TreeSitterParser.setLanguage(GraphQL);

  const queryText = documentText.substring(
    graphqlNode.startIndex,
    graphqlNode.endIndex,
  );
  const tree = TreeSitterParser.parse(queryText);
  FileLogger.write(`Tree\n\n`);
  FileLogger.write(tree.rootNode.toString());
  FileLogger.write(`\n\n`);

  const relativeRow = position.line - graphqlNode.startPosition.row;
  const relativeColumn = position.character - graphqlNode.startPosition.column;

  let node: SyntaxNode | null = tree.rootNode.namedDescendantForPosition({
    row: relativeRow,
    column: relativeColumn,
  });

  FileLogger.write(`Initial node type: ${node?.type || "null"}\n`);

  const result = {
    fieldPath: [] as string[],
    isArgument: false,
    isVariableDefinition: false,
    isOperationArgument: false,
    operationType: "query" as "query" | "mutation" | undefined,
  };

  // Check if we're in a variable definition
  if (
    node?.type === "VariableDefinition" ||
    node?.parent?.type === "VariableDefinition" ||
    (node?.type === "OperationDefinition" && node.text.includes("$"))
  ) {
    result.isVariableDefinition = true;
    return result;
  }

  // Check if we're in operation arguments
  if (node?.type === "OperationDefinition" && node.text.includes("(")) {
    const cursorOffset = position.character - graphqlNode.startPosition.column;
    const openParenIndex = node.text.indexOf("(");
    const closeParenIndex = node.text.indexOf(")");

    if (cursorOffset > openParenIndex && cursorOffset < closeParenIndex) {
      result.isOperationArgument = true;
      return result;
    }
  }

  // Handle operation type suggestions
  if (
    node?.type === "Document" ||
    (node?.type === "OperationDefinition" &&
      !node.namedChildren.find((n) => n.type === "OperationType"))
  ) {
    result.operationType = undefined;
    return result;
  }

  // Get operation type
  const operationNode =
    node?.type === "OperationDefinition" ? node : node?.parent;
  if (operationNode?.type === "OperationDefinition") {
    const operationTypeNode = operationNode.namedChildren.find(
      (n) => n.type === "OperationType",
    );
    result.operationType =
      (operationTypeNode?.text as "query" | "mutation") || "query";
  }

  // Handle argument completion contexts
  if (node?.type === "Arguments" || node?.parent?.type === "Arguments") {
    result.isArgument = true;
    const fieldNode =
      node.parent?.type === "Arguments" ? node.parent.parent : node.parent;
    if (fieldNode?.type === "Field") {
      const nameNode = fieldNode.namedChildren.find((n) => n.type === "Name");
      if (nameNode) {
        result.fieldPath = [nameNode.text];
      }
    }
    return result;
  }

  if (node?.type === "SelectionSet" && node.parent?.type === "Field") {
    node = node.parent;
  }

  while (node) {
    if (node.type === "Field") {
      const nameNode = node.namedChildren.find((n) => n.type === "Name");
      if (nameNode) {
        result.fieldPath.unshift(nameNode.text);
      }
    }
    node = node.parent;
  }

  return result;
};

const getOperationCompletions = () => {
  return [
    {
      label: "query",
      kind: CompletionItemKind.Keyword,
      detail: "Query operation",
      documentation: "Fetch data from the GraphQL server",
    },
    {
      label: "mutation",
      kind: CompletionItemKind.Keyword,
      detail: "Mutation operation",
      documentation: "Modify data on the GraphQL server",
    },
  ];
};

const getFieldCompletions = (
  schema: GraphQLIntrospectionResult,
  fieldPath: string[],
  operationType: "query" | "mutation" | undefined,
): GraphQLField[] => {
  if (!schema) return [];

  // For empty field path, return top-level operation fields
  if (fieldPath.length === 0) {
    const rootType =
      operationType === "mutation"
        ? schema.types.find(
            (t: GraphQLType) => t.name === schema.mutationType?.name,
          )
        : schema.types.find(
            (t: GraphQLType) => t.name === schema.queryType.name,
          );
    return rootType?.fields || [];
  }

  // Get the appropriate root type based on operation
  const rootType =
    operationType === "mutation"
      ? schema.types.find(
          (t: GraphQLType) => t.name === schema.mutationType?.name,
        )
      : schema.types.find((t: GraphQLType) => t.name === schema.queryType.name);

  if (!rootType) return [];

  let resolvedType: GraphQLType | undefined = rootType;

  for (const key of fieldPath) {
    const field = resolvedType.fields?.find((f) => f.name === key);
    if (!field) return [];

    const typeName = resolveGraphQLType(field.type);
    resolvedType = schema.types.find((t) => t.name === typeName);
    if (!resolvedType) return [];
  }

  return resolvedType?.fields || [];
};

const getArgumentCompletions = (
  schema: GraphQLIntrospectionResult,
  fieldPath: string[],
  operationType: "query" | "mutation" | undefined,
): { name: string; type: GraphQLTypeRef; description?: string }[] => {
  if (!schema || fieldPath.length === 0) return [];

  // Get the appropriate root type based on operation
  const rootType =
    operationType === "mutation"
      ? schema.types.find(
          (t: GraphQLType) => t.name === schema.mutationType?.name,
        )
      : schema.types.find((t: GraphQLType) => t.name === schema.queryType.name);

  if (!rootType) return [];

  let resolvedType: GraphQLType | undefined = rootType;
  const lastField = fieldPath[fieldPath.length - 1];

  // Navigate through the field path except the last field
  for (let i = 0; i < fieldPath.length - 1; i++) {
    const field = resolvedType.fields?.find((f) => f.name === fieldPath[i]);
    if (!field) return [];

    const typeName = resolveGraphQLType(field.type);
    resolvedType = schema.types.find((t) => t.name === typeName);
    if (!resolvedType) return [];
  }

  // Get arguments for the last field
  const field = resolvedType.fields?.find((f) => f.name === lastField);
  return field?.args || [];
};

const getScalarTypeCompletions = (schema: GraphQLIntrospectionResult) => {
  if (!schema) return [];

  // Find all scalar and input types
  const types = schema.types.filter(
    (t) =>
      t.kind === "SCALAR" || t.kind === "INPUT_OBJECT" || t.kind === "ENUM",
  );

  return types.map((type) => ({
    label: type.name,
    kind: CompletionItemKind.TypeParameter,
    detail: type.kind.toLowerCase(),
    documentation: type.description || "",
  }));
};

const getOperationArgumentCompletions = (
  schema: GraphQLIntrospectionResult,
) => {
  return [
    {
      label: "skip",
      kind: CompletionItemKind.Variable,
      detail: "Int",
      documentation: "Number of items to skip",
    },
    {
      label: "first",
      kind: CompletionItemKind.Variable,
      detail: "Int",
      documentation: "Number of items to return",
    },
    {
      label: "after",
      kind: CompletionItemKind.Variable,
      detail: "String",
      documentation: "Cursor for pagination",
    },
    {
      label: "last",
      kind: CompletionItemKind.Variable,
      detail: "Int",
      documentation: "Number of items to return from the end",
    },
    {
      label: "before",
      kind: CompletionItemKind.Variable,
      detail: "String",
      documentation: "Cursor for pagination",
    },
  ];
};

const getVariableNameSuggestions = (
  schema: GraphQLIntrospectionResult,
  operationType: "query" | "mutation" | undefined,
  documentText: string,
): {
  label: string;
  kind: CompletionItemKind;
  detail: string;
  documentation: string;
}[] => {
  if (!schema || !operationType) return [];

  // Get the root type based on operation
  const rootType =
    operationType === "mutation"
      ? schema.types.find(
          (t: GraphQLType) => t.name === schema.mutationType?.name,
        )
      : schema.types.find((t: GraphQLType) => t.name === schema.queryType.name);

  if (!rootType?.fields) return [];

  // Extract the operation name from the document text
  const operationMatch = documentText.match(/(?:query|mutation)\s+(\w+)/);
  const operationName = operationMatch?.[1];

  // If we have an operation name, find the specific field being queried
  let relevantFields = rootType.fields;
  if (operationName) {
    const operationField = rootType.fields.find(
      (f) => documentText.includes(f.name) && f.name !== operationName,
    );
    if (operationField) {
      relevantFields = [operationField];
    }
  }

  // Get existing variables to filter them out
  const existingVars = new Set(
    Array.from(documentText.matchAll(/\$(\w+):/g)).map((m) => `$${m[1]}`),
  );

  // Get all arguments from relevant fields
  const suggestions = relevantFields.flatMap((field) => {
    if (!field.args?.length) return [];

    return field.args.map((arg) => {
      const typeInfo = resolveGraphQLType(arg.type);
      const suggestion = {
        label: `$${arg.name}`,
        kind: CompletionItemKind.Variable,
        detail: `${typeInfo}${arg.type.kind === "NON_NULL" ? "!" : ""}`,
        documentation:
          arg.description || `Variable for ${field.name}.${arg.name}`,
      };
      return suggestion;
    });
  });

  // Filter out existing variables
  return suggestions.filter(
    (suggestion) => !existingVars.has(suggestion.label),
  );
};

type GetGraphQLCompletionItemsArgs = {
  documentPath: string;
  documentText: string;
  graphQLDataNode: SyntaxNode;
  position: Position;
};

export const getGraphQLCompletionItems = ({
  documentPath,
  documentText,
  graphQLDataNode,
  position,
}: GetGraphQLCompletionItemsArgs) => {
  const schemaPath = getSchemaFilePath(documentPath);
  if (!schemaPath) return [];

  const schema = getSchemaData(schemaPath);
  if (!schema) return [];

  const {
    fieldPath,
    isArgument,
    isVariableDefinition,
    isOperationArgument,
    operationType,
  } = extractGraphQLFieldPath(documentText, graphQLDataNode, position);

  // Return operation type suggestions if no operation type is selected
  if (operationType === undefined) {
    return getOperationCompletions();
  }

  // Return variable name suggestions when in variable definition section
  if (isVariableDefinition) {
    // If cursor is at the start of a variable, suggest variable names
    if (documentText[position.character - 1] !== ":") {
      return getVariableNameSuggestions(schema, operationType, documentText);
    }
    // Otherwise suggest types
    return getScalarTypeCompletions(schema);
  }

  // Return operation argument suggestions
  if (isOperationArgument) {
    return getOperationArgumentCompletions(schema);
  }

  if (isArgument) {
    const args = getArgumentCompletions(schema, fieldPath, operationType);
    return args.map((arg) => ({
      label: arg.name,
      kind: CompletionItemKind.Variable,
      detail: `${arg.type.name}${arg.type.kind === "NON_NULL" ? "!" : ""}`,
      documentation: arg.description || "",
    }));
  }

  const fields = getFieldCompletions(schema, fieldPath, operationType);
  return fields.map((field) => ({
    label: field.name,
    kind: CompletionItemKind.Field,
    detail: field.type?.name || "",
    documentation: field.description || "",
  }));
};

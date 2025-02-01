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

  const relativeRow = position.line - graphqlNode.startPosition.row;
  const relativeColumn = position.character - graphqlNode.startPosition.column;

  let node: SyntaxNode | null = tree.rootNode.namedDescendantForPosition({
    row: relativeRow,
    column: relativeColumn,
  });

  const result = {
    fieldPath: [] as string[],
    isArgument: false,
    isVariableDefinition: false,
    isOperationArgument: false,
    operationType: "query" as "query" | "mutation" | undefined,
  };

  // Check if we're in a variable definition section
  if (
    node?.type === "VariableDefinitions" ||
    node?.parent?.type === "VariableDefinitions" ||
    node?.type === "VariableDefinition" ||
    node?.parent?.type === "VariableDefinition"
  ) {
    result.isVariableDefinition = true;

    // Get operation type
    const operationNode =
      node.parent?.type === "OperationDefinition"
        ? node.parent
        : node.parent?.parent?.type === "OperationDefinition"
          ? node.parent.parent
          : null;

    if (operationNode) {
      const operationTypeNode = operationNode.namedChildren.find(
        (n) => n.type === "OperationType",
      );
      result.operationType =
        (operationTypeNode?.text as "query" | "mutation") || "query";
    }

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

const getExpectedVariableType = (
  schema: GraphQLIntrospectionResult,
  documentText: string,
  variableName: string,
): GraphQLTypeRef | null => {
  if (!schema) return null;

  // Get the root type
  const rootType = schema.types.find(
    (t: GraphQLType) => t.name === schema.queryType.name,
  );
  if (!rootType?.fields) return null;

  // Extract the field name and its arguments from the query
  const fieldMatch = documentText.match(/{\s*(\w+)\s*\((.*?)\)/s);
  if (!fieldMatch) return null;

  const fieldName = fieldMatch[1];
  const argsText = fieldMatch[2];

  // Find the field in the schema
  const field = rootType.fields.find((f) => f.name === fieldName);
  if (!field?.args) return null;

  // Find where this variable is used in the arguments
  const variableUsageMatch = argsText.match(
    new RegExp(`(\\w+):\\s*\\$${variableName.replace("$", "")}`),
  );
  if (!variableUsageMatch) return null;

  const argName = variableUsageMatch[1];

  // Find the argument's type in the field definition
  const arg = field.args.find((a) => a.name === argName);
  return arg?.type || null;
};

const getScalarTypeCompletions = (schema: GraphQLIntrospectionResult) => {
  if (!schema) return [];

  // Find all scalar, input object, and enum types
  const types = schema.types.filter(
    (t) =>
      t.kind === "SCALAR" || t.kind === "INPUT_OBJECT" || t.kind === "ENUM",
  );

  return types.map((type) => ({
    label: type.name,
    kind: CompletionItemKind.TypeParameter,
    detail: type.kind.toLowerCase(),
    documentation: type.description || `${type.kind.toLowerCase()} type`,
  }));
};

const getOperationArgumentCompletions = (
  schema: GraphQLIntrospectionResult,
) => {
  if (!schema) return [];

  // Get the root type based on operation
  const queryType = schema.types.find(
    (t: GraphQLType) => t.name === schema.queryType.name,
  );
  if (!queryType?.fields) return [];

  // Get all unique arguments from the root fields
  const uniqueArgs = new Map();
  queryType.fields.forEach((field) => {
    field.args?.forEach((arg) => {
      if (!uniqueArgs.has(arg.name)) {
        uniqueArgs.set(arg.name, {
          label: arg.name,
          kind: CompletionItemKind.Variable,
          detail: `${resolveGraphQLType(arg.type)}${arg.type.kind === "NON_NULL" ? "!" : ""}`,
          documentation: arg.description || `Argument for ${field.name}`,
        });
      }
    });
  });

  return Array.from(uniqueArgs.values());
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

  if (!rootType?.fields) {
    return [];
  }

  // Extract the operation name and field from the document text
  const queryMatch = documentText.match(
    /(?:query|mutation)\s+(\w+)[\s\S]*?{\s*(\w+)/,
  );
  const fieldName = queryMatch?.[2];

  // Find the specific field being queried
  const relevantField = fieldName
    ? rootType.fields.find((f) => f.name === fieldName)
    : null;
  const relevantFields = relevantField ? [relevantField] : rootType.fields;

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
  const filteredSuggestions = suggestions.filter(
    (suggestion) => !existingVars.has(suggestion.label),
  );

  return filteredSuggestions;
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
    return getVariableNameSuggestions(schema, operationType, documentText);
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

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

const getFieldCompletions = (
  schema: GraphQLIntrospectionResult,
  fieldPath: string[],
): GraphQLField[] => {
  if (!schema) return [];

  const type = schema.types.find(
    (t: GraphQLType) => t.name === schema.queryType.name,
  );
  if (!type) return [];

  let resolvedType;

  for (const key of fieldPath) {
    const field: GraphQLField | undefined = type.fields?.find(
      (f) => f.name === key,
    );
    if (!field) return [];
    resolvedType = schema.types.find(
      (t) => t.name === resolveGraphQLType(field.type),
    );
    if (!resolvedType) return [];
  }

  return resolvedType?.fields || [];
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

  // Compute relative cursor position
  const relativeRow = position.line - graphqlNode.startPosition.row;
  const relativeColumn = position.character - graphqlNode.startPosition.column;

  let node: SyntaxNode | null = tree.rootNode.namedDescendantForPosition({
    row: relativeRow,
    column: relativeColumn,
  });

  // Debugging output
  FileLogger.write(`Parsed Tree:\n${tree.rootNode.toString()}\n`);
  FileLogger.write(
    `Relative cursor position: { line: ${relativeRow}, column: ${relativeColumn} }\n`,
  );
  FileLogger.write(`Cursor node type: ${node?.type || "null"}\n\n`);

  const fieldPath = [];

  if (node.type === "SelectionSet" && node.parent?.type === "Field") {
    node = node.parent;
  }

  while (node) {
    FileLogger.write(`While node: ${node?.type || "null"}\n\n`);
    if (node.type === "Field") {
      const nameNode = node.namedChildren.find((n) => n.type === "Name");
      if (nameNode) {
        fieldPath.unshift(nameNode.text);
      }
    }
    node = node.parent;
  }

  FileLogger.write(`Extracted fieldPath: ${JSON.stringify(fieldPath)}\n`);

  return fieldPath;
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

  const fieldPath = extractGraphQLFieldPath(
    documentText,
    graphQLDataNode,
    position,
  );
  const fields = getFieldCompletions(schema, fieldPath);

  return fields.map((field) => ({
    label: field.name,
    kind: CompletionItemKind.Field,
    detail: field.type?.name || "",
    documentation: field.description || "",
  }));
};

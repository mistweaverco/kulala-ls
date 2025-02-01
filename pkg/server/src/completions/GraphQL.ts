import TreeSitter from "tree-sitter";
import GraphQL from "@mistweaverco/tree-sitter-graphql";
import { CompletionItem, CompletionItemKind } from "vscode-languageserver";
import * as fs from "fs";
import * as path from "path";
import { Position } from "vscode-languageserver-textdocument";

const SCHEMA_FILE_SUFFIX = "graphql-schema.json";

const getSchemaFilePath = (documentPath) => {
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

const getSchemaData = (schemaPath) => {
  try {
    const fileContent = fs.readFileSync(schemaPath, "utf8");
    const json = JSON.parse(fileContent);
    return json?.data?.__schema || null;
  } catch (error) {
    console.error("Error reading schema file:", error);
    return null;
  }
};

const resolveGraphQLType = (type) => {
  while (type?.kind === "NON_NULL" || type?.kind === "LIST") {
    type = type.ofType;
  }
  return type?.name;
};

const getFieldCompletions = (schema, fieldPath) => {
  if (!schema) return [];

  let type = schema.types.find((t) => t.name === schema.queryType.name);
  if (!type) return [];

  for (const key of fieldPath) {
    const field = type.fields?.find((f) => f.name === key);
    if (!field) return [];
    type = schema.types.find((t) => t.name === resolveGraphQLType(field.type));
    if (!type) return [];
  }

  return type.fields || [];
};

const extractGraphQLFieldPath = (documentText, graphqlNode, position) => {
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

  let node = tree.rootNode.namedDescendantForPosition({
    row: relativeRow,
    column: relativeColumn,
  });

  // Debugging output
  fs.appendFileSync(
    "/tmp/kulala-ls.log",
    `Parsed Tree:\n${tree.rootNode.toString()}\n`,
  );
  fs.appendFileSync(
    "/tmp/kulala-ls.log",
    `Relative cursor position: { line: ${relativeRow}, column: ${relativeColumn} }\n`,
  );
  fs.appendFileSync(
    "/tmp/kulala-ls.log",
    `Cursor node type: ${node?.type || "null"}\n\n`,
  );

  const fieldPath = [];

  if (node.type === "SelectionSet" && node.parent?.type === "Field") {
    node = node.parent;
  }

  while (node) {
    fs.appendFileSync(
      "/tmp/kulala-ls.log",
      `While node: ${node?.type || "null"}\n\n`,
    );
    if (node.type === "Field") {
      const nameNode = node.namedChildren.find((n) => n.type === "Name");
      if (nameNode) {
        fieldPath.unshift(nameNode.text);
      }
    }
    node = node.parent;
  }

  fs.appendFileSync(
    "/tmp/kulala-ls.log",
    `Extracted fieldPath: ${JSON.stringify(fieldPath)}\n`,
  );

  return fieldPath;
};

export const getGraphQLCompletionItems = ({
  documentPath,
  documentText,
  graphQLDataNode,
  position,
}) => {
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

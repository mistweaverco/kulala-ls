import Parser from "tree-sitter";
import { CompletionItem, CompletionItemKind } from "vscode-languageserver";
import * as fs from "fs";
import * as path from "path";
import { Position } from "vscode-languageserver-textdocument";

const SCHEMA_FILE_SUFFIX = "graphql-schema.json";

// Utility to find the GraphQL schema file in the project directory
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

const getSchemaData = (schemaPath: string) => {
  try {
    const fileContent = fs.readFileSync(schemaPath, "utf8");
    const json = JSON.parse(fileContent);
    return json?.data?.__schema || null;
  } catch (error) {
    console.error("Error reading schema file:", error);
    return null;
  }
};

type Field = {
  name: string;
  type: {
    name?: string;
    kind?: string;
    ofType?: any;
  };
  description?: string;
};

// Extract possible completion fields from schema
const getFieldCompletions = (schema: unknown, fieldPath: string[]): Field[] => {
  if (!schema) return [];

  let type = schema.types.find((t) => t.name === schema.queryType.name); // Start at root query type
  if (!type) return [];

  for (const key of fieldPath) {
    const field = type.fields?.find((f) => f.name === key);
    if (!field) return [];

    // Resolve the actual type
    type = schema.types.find((t) => t.name === resolveGraphQLType(field.type));
    if (!type) return [];
  }

  return type.fields || [];
};

// Resolve the actual GraphQL type from the introspection schema
const resolveGraphQLType = (type) => {
  while (type?.kind === "NON_NULL" || type?.kind === "LIST") {
    type = type.ofType;
  }
  return type?.name;
};

type GraphQLCompletionItemsOpts = {
  documentPath: string;
  documentText: string;
  graphQLDataNode: Parser.SyntaxNode;
  position: Position;
};

export const getGraphQLCompletionItems = ({
  documentPath,
  documentText,
  graphQLDataNode,
  position,
}: GraphQLCompletionItemsOpts) => {
  const schemaPath = getSchemaFilePath(documentPath);
  if (!schemaPath) return [];

  const schema = getSchemaData(schemaPath);
  if (!schema) {
    fs.appendFileSync("/tmp/kulala-ls.log", "No schema found\n");
    return [];
  }

  let fieldPath: string[] = [];
  try {
    // Log position
    fs.appendFileSync(
      "/tmp/kulala-ls.log",
      `line: ${position.line}, column: ${position.character}\n`,
    );

    // Extract field paths
    fieldPath = extractGraphQLFieldPath(documentText, graphQLDataNode, {
      line: position.line,
      column: position.character,
    });
  } catch (error) {
    fs.appendFileSync("/tmp/kulala-ls.log", "Error parsing GraphQL document\n");
    console.error("Error parsing GraphQL document:", error);
  }

  // Log field path
  fs.appendFileSync(
    "/tmp/kulala-ls.log",
    `fieldPath: ${JSON.stringify(fieldPath)}\n`,
  );

  const fields = getFieldCompletions(schema, fieldPath);
  return fields.map((field) => ({
    label: field.name,
    kind: CompletionItemKind.Field,
    detail: field.type?.name || "",
    documentation: field.description || "",
  })) as CompletionItem[];
};

const extractGraphQLFieldPath = (
  documentText: string,
  graphqlNode: Parser.SyntaxNode,
  cursorPosition: { line: number; column: number },
): string[] => {
  const fieldPath: string[] = [];

  // Extract GraphQL query text from document
  const queryText = documentText.substring(
    graphqlNode.startIndex,
    graphqlNode.endIndex,
  );
  const queryLines = queryText.split("\n");

  // Calculate cursor's relative position inside the GraphQL query
  const relativeLine = cursorPosition.line - graphqlNode.startPosition.row;
  const relativeColumn = cursorPosition.column;

  if (relativeLine < 0 || relativeLine >= queryLines.length) {
    return []; // Cursor is outside the GraphQL block
  }

  // Get the line where the cursor is located
  const currentLine = queryLines[relativeLine];

  // Find cursor's character index within the current line
  let cursorIndex = 0;
  for (let i = 0; i < currentLine.length; i++) {
    if (i === relativeColumn) break;
    cursorIndex++;
  }

  // Manually parse GraphQL query fields
  const tokens = currentLine.trim().split(/\s+/);
  let insideField = false;
  let nestedLevel = 0;

  for (const token of tokens) {
    if (token === "{") {
      nestedLevel++;
      insideField = true;
      continue;
    }
    if (token === "}") {
      nestedLevel--;
      if (nestedLevel < 0) nestedLevel = 0;
      fieldPath.pop(); // Move up the hierarchy
      continue;
    }

    // If we're inside a selection set, track field names
    if (insideField && nestedLevel > 0) {
      fieldPath.push(token);
    }

    // Stop parsing if cursor is inside this token
    if (cursorIndex <= token.length) {
      break;
    }
    cursorIndex -= token.length + 1; // Adjust for spaces
  }

  return fieldPath;
};

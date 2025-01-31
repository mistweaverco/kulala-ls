import { CompletionItem, CompletionItemKind } from "vscode-languageserver";
import * as fs from "fs";

const SCHEMA_FILE_SUFFIX = "graphql-schema.json";

type getGraphQLCompletionItemsOpts = {
  documentPath: string;
};

type FilepathInfo = {
  path: string;
  filename: string;
};

const PS = process.platform.startsWith("win") ? "\\" : "/";

const getFileContentsSchemaFile = (path: string): string | null => {
  let lastPath = "";
  let currentPath = path;
  const filename = path.split(PS).pop();
  const pattern = new RegExp(`${filename}.${SCHEMA_FILE_SUFFIX}$`);

  while (currentPath !== lastPath) {
    if (!fs.existsSync(currentPath)) {
      return null;
    }
    const filesInDirectory = fs.readdirSync(currentPath);
    const f = filesInDirectory.find((file) => {
      return pattern.test(file);
    });
    if (f) {
      const filePath = `${currentPath}${PS}${f}`;
      return fs.readFileSync(filePath, "utf8");
    }
    lastPath = currentPath;
    currentPath = currentPath.split(PS).slice(0, -1).join(PS);
  }
  return null;
};

export const getGraphQLCompletionItems = (
  opts: getGraphQLCompletionItemsOpts,
): CompletionItem[] => {
  const completionData = {
    foo: "bar",
  } as Record<string, string>;
  const data = Object.keys(completionData);
  return data.map((key) => {
    return {
      label: key,
      kind: CompletionItemKind.Variable,
      detail: completionData[key],
    };
  });
};

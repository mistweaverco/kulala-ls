import { CompletionItem, CompletionItemKind } from "vscode-languageserver";

type RawRequestVariables = {
  // documentPath
  [key: string]: {
    // requestName
    [key: string]: {
      response: {
        body: {
          // this can be a nested object, with nested objects, arrays, etc.
          $: unknown;
        };
        headers: {
          [key: string]: string;
        };
      };
    };
  };
};

type GetRequestVariablesOpts = {
  documentPath: string;
  rawRequestVariables: RawRequestVariables;
};

const getPathSeparator = () => {
  return process.platform.startsWith("win") ? "\\" : "/";
};

const getFilepathByDocumentPath = (documentPath: string): string => {
  documentPath = documentPath.replace("file://", "");
  const ps = getPathSeparator();
  const parts = documentPath.split(ps);
  parts.pop();
  const path = parts.join(ps);
  return path;
};

type GetRequestVariables = {
  [key: string]: string;
};

const getRequestVariables = ({
  documentPath,
  rawRequestVariables,
}: GetRequestVariablesOpts): GetRequestVariables => {
  const flatMap: GetRequestVariables = {};
  const recursiveFlattenJSONBody = (
    obj: unknown,
    reqName: string,
    prefix: string,
  ) => {
    if (typeof obj === "object") {
      if (Array.isArray(obj)) {
        const betterKnownObj = obj as unknown[];
        for (let i = 0; i < betterKnownObj.length; i++) {
          const deepObj = obj[i] as Record<string, unknown>;
          const newPrefix = `${prefix}${i}.`;
          recursiveFlattenJSONBody(deepObj, reqName, newPrefix);
        }
      } else {
        const betterKnownObj = obj as Record<string, unknown>;
        for (const key in betterKnownObj) {
          const deepObj = betterKnownObj[key] as Record<string, unknown>;
          const newPrefix = `${prefix}${key}.`;
          recursiveFlattenJSONBody(deepObj, reqName, newPrefix);
        }
      }
    } else {
      const betterKnownObj = obj as string;
      flatMap[`${reqName}.response.body.$.${prefix}`.slice(0, -1)] =
        betterKnownObj;
    }
  };
  for (const docPath in rawRequestVariables) {
    if (documentPath.includes(docPath)) {
      for (const reqName in rawRequestVariables[docPath]) {
        const req = rawRequestVariables[docPath][reqName];
        recursiveFlattenJSONBody(req.response.body.$, reqName, "");
        for (const headerName in req.response.headers) {
          flatMap[`${reqName}.response.headers.${headerName}`] =
            req.response.headers[headerName];
        }
      }
    }
  }
  return flatMap;
};

export const getRequestVariablesCompletionItems = (
  opts: GetRequestVariablesOpts,
): CompletionItem[] => {
  const reqVars = getRequestVariables(opts);
  const reqVarKeys = Object.keys(reqVars);
  return reqVarKeys.map((key) => {
    return {
      label: key,
      kind: CompletionItemKind.Variable,
      detail: reqVars[key],
    };
  });
};

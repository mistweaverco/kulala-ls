import { CompletionItem, CompletionItemKind } from "vscode-languageserver";
import * as dotenv from "dotenv";
import * as fs from "fs";

dotenv.config();

const HTTP_CLIENT_ENV_FILE = "http-client.env.json";
const HTTP_CLIENT_PRIVATE_ENV_FILE = "http-client.private.env.json";
const VSCODE_SETTINGS_FILE = ".vscode/settings.json";
const VSCODE_WORKSPACE_SETTINGS_FILE_REGEX = ".*\\.code-workspace";
const VSCODE_REST_CLIENT_SETTINGS_KEY = "rest-client.environmentVariables";

type DocumentVariables = {
  [key: string]: string;
};

type HttpClientEnvFile = {
  [key: string]: DocumentVariables;
};

type GetEnvironmentVariablesOpts = {
  documentPath: string;
  documentVariables: DocumentVariables;
  selectedEnv: string;
};

const getFileContentsCodeWorkspaceUpwards = (path: string): string | null => {
  let lastPath = "";
  const ps = getPathSeparator();
  let currentPath = path;
  const codeWorkspacePattern = new RegExp(VSCODE_WORKSPACE_SETTINGS_FILE_REGEX);

  while (currentPath !== lastPath) {
    if (!fs.existsSync(currentPath)) {
      return null;
    }
    const filesInDirectory = fs.readdirSync(currentPath);
    const codeWorkspaceFile = filesInDirectory.find((file) => {
      return codeWorkspacePattern.test(file);
    });
    if (codeWorkspaceFile) {
      const filePath = `${currentPath}${ps}${codeWorkspaceFile}`;
      return fs.readFileSync(filePath, "utf8");
    }
    lastPath = currentPath;
    currentPath = currentPath.split(ps).slice(0, -1).join(ps);
  }
  return null;
};

const getFileContentsUpwards = (filepath: FilepathInfo): string | null => {
  let lastPath = "";
  const ps = getPathSeparator();
  let currentPath = filepath.path;
  while (currentPath !== lastPath) {
    const file = `${currentPath}${ps}${filepath.filename}`;
    if (fs.existsSync(file)) {
      return fs.readFileSync(file, "utf8");
    }
    lastPath = currentPath;
    currentPath = currentPath.split(ps).slice(0, -1).join(ps);
  }
  return null;
};

type FilepathInfo = {
  path: string;
  filename: string;
};
const getFilepathInfoByDocumentPath = (
  documentPath: string,
  filename: string,
): FilepathInfo => {
  documentPath = documentPath.replace("file://", "");
  const ps = getPathSeparator();
  const parts = documentPath.split(ps);
  parts.pop();
  const path = parts.join(ps);
  return {
    path,
    filename,
  };
};

const getFilepathByDocumentPath = (documentPath: string): string => {
  documentPath = documentPath.replace("file://", "");
  const ps = getPathSeparator();
  const parts = documentPath.split(ps);
  parts.pop();
  const path = parts.join(ps);
  return path;
};

const getVsCodeWorkspaceEnvJson = (documentPath: string): HttpClientEnvFile => {
  const f = getFileContentsCodeWorkspaceUpwards(
    getFilepathByDocumentPath(documentPath),
  );
  if (!f) {
    return {};
  }
  return JSON.parse(f) as HttpClientEnvFile;
};

const getHttpClientEnvJson = (
  documentPath: string,
  envFile: string,
): HttpClientEnvFile => {
  const f = getFileContentsUpwards(
    getFilepathInfoByDocumentPath(documentPath, envFile),
  );
  if (!f) {
    return {};
  }
  return JSON.parse(f) as HttpClientEnvFile;
};

type GetHttpClientEnvVariablesOpts = {
  documentPath: string;
  selectedEnv: string;
};

const getHttpClientEnvVariables = ({
  documentPath,
  selectedEnv,
}: GetHttpClientEnvVariablesOpts) => {
  const vsCodeSettingsJson = getHttpClientEnvJson(
    documentPath,
    VSCODE_SETTINGS_FILE,
  );
  const vsCodeWorkspaceJson = getVsCodeWorkspaceEnvJson(documentPath);

  const vsCodeSettingsEnv =
    vsCodeSettingsJson[VSCODE_REST_CLIENT_SETTINGS_KEY] || {};
  const vsCodeSettingsSharedEnv = vsCodeSettingsEnv["$shared"]
    ? structuredClone(vsCodeSettingsEnv["$shared"])
    : {};
  const vsCodeWorkspaceEnv =
    vsCodeWorkspaceJson[VSCODE_REST_CLIENT_SETTINGS_KEY] || {};
  const vsCodeWorkspaceSharedEnv = vsCodeWorkspaceEnv["$shared"]
    ? structuredClone(vsCodeWorkspaceEnv["$shared"])
    : {};

  if ("$shared" in vsCodeSettingsEnv) {
    delete vsCodeSettingsEnv["$shared"];
  }
  if ("$shared" in vsCodeWorkspaceEnv) {
    delete vsCodeWorkspaceEnv["$shared"];
  }

  const envFileRaw = getHttpClientEnvJson(documentPath, HTTP_CLIENT_ENV_FILE);
  const privateEnvFileRaw = getHttpClientEnvJson(
    documentPath,
    HTTP_CLIENT_PRIVATE_ENV_FILE,
  );

  const env = envFileRaw[selectedEnv] || {};
  const sharedEnv = envFileRaw["$shared"]
    ? structuredClone(envFileRaw["$shared"])
    : {};
  const privateEnv = privateEnvFileRaw[selectedEnv] || {};
  const privateSharedEnv = privateEnvFileRaw["$shared"]
    ? structuredClone(privateEnvFileRaw["$shared"])
    : {};

  if ("$shared" in env) {
    delete env["$shared"];
  }
  if ("$shared" in privateEnv) {
    delete privateEnv["$shared"];
  }
  if ("$default_headers" in sharedEnv) {
    delete sharedEnv["$default_headers"];
  }
  if ("$default_headers" in privateSharedEnv) {
    delete privateSharedEnv["$default_headers"];
  }

  return {
    ...vsCodeSettingsSharedEnv,
    ...vsCodeSettingsEnv,
    ...vsCodeWorkspaceSharedEnv,
    ...vsCodeWorkspaceEnv,
    ...sharedEnv,
    ...env,
    ...privateSharedEnv,
    ...privateEnv,
  };
};

const getPathSeparator = () => {
  return process.platform.startsWith("win") ? "\\" : "/";
};

const getEnvironmentVariables = ({
  documentPath,
  documentVariables,
  selectedEnv,
}: GetEnvironmentVariablesOpts): DocumentVariables => {
  const processEnv = process.env as DocumentVariables;
  const httpClientEnv = getHttpClientEnvVariables({
    documentPath,
    selectedEnv,
  });
  return { ...processEnv, ...httpClientEnv, ...documentVariables };
};

export const getEnvironmentVariablesCompletionItems = (
  opts: GetEnvironmentVariablesOpts,
): CompletionItem[] => {
  const processEnv = getEnvironmentVariables(opts);
  const envKeys = Object.keys(processEnv);
  return envKeys.map((key) => {
    return {
      label: key,
      kind: CompletionItemKind.Variable,
      detail: processEnv[key],
    };
  });
};

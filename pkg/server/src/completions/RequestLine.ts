import { CompletionItem, CompletionItemKind } from "vscode-languageserver";

export const requestLineMethodCompletionItems: CompletionItem[] = [
  {
    label: "POST",
    kind: CompletionItemKind.Value,
    data: 1,
  },
  {
    label: "GET",
    kind: CompletionItemKind.Value,
    data: 2,
  },
];

export const requestLineSchemaCompletionItems: CompletionItem[] = [
  {
    label: "https",
    kind: CompletionItemKind.Value,
    data: 1,
  },
  {
    label: "http",
    kind: CompletionItemKind.Value,
    data: 2,
  },
];

export const requestLineVersionCompletionItems: CompletionItem[] = [
  {
    label: "HTTP/1.1",
    kind: CompletionItemKind.Value,
    data: 1,
  },
  {
    label: "HTTP/2",
    kind: CompletionItemKind.Value,
    data: 2,
  },
  {
    label: "HTTP/3",
    kind: CompletionItemKind.Value,
    data: 3,
  },
];

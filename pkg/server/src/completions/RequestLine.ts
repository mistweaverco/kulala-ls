import { CompletionItem, CompletionItemKind } from "vscode-languageserver";

// lists all allowed http request methods
export const requestLineMethodCompletionItems: CompletionItem[] = [
  {
    label: "POST",
    kind: CompletionItemKind.Keyword,
    data: 1,
  },
  {
    label: "GET",
    kind: CompletionItemKind.Keyword,
    data: 2,
  },
  {
    label: "PUT",
    kind: CompletionItemKind.Keyword,
    data: 3,
  },
  {
    label: "DELETE",
    kind: CompletionItemKind.Keyword,
    data: 4,
  },
  {
    label: "PATCH",
    kind: CompletionItemKind.Keyword,
    data: 5,
  },
  {
    label: "OPTIONS",
    kind: CompletionItemKind.Keyword,
    data: 6,
  },
  {
    label: "HEAD",
    kind: CompletionItemKind.Keyword,
    data: 7,
  },
];

export const requestLineSchemaCompletionItems: CompletionItem[] = [
  {
    label: "https",
    kind: CompletionItemKind.Keyword,
    data: 1,
  },
  {
    label: "http",
    kind: CompletionItemKind.Keyword,
    data: 2,
  },
];

export const requestLineVersionCompletionItems: CompletionItem[] = [
  {
    label: "HTTP/1.1",
    kind: CompletionItemKind.Keyword,
    data: 1,
  },
  {
    label: "HTTP/2",
    kind: CompletionItemKind.Keyword,
    data: 2,
  },
  {
    label: "HTTP/3",
    kind: CompletionItemKind.Keyword,
    data: 3,
  },
];

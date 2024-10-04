import { CompletionItem, CompletionItemKind } from "vscode-languageserver";

export const headerNameCompletionItems: CompletionItem[] = [
  {
    label: "Accept",
    kind: CompletionItemKind.Value,
    data: 1,
  },
  {
    label: "Accept-Charset",
    kind: CompletionItemKind.Value,
    data: 2,
  },
  {
    label: "Accept-Encoding",
    kind: CompletionItemKind.Value,
    data: 3,
  },
  {
    label: "Accept-Language",
    kind: CompletionItemKind.Value,
    data: 4,
  },
  {
    label: "Accept-Datetime",
    kind: CompletionItemKind.Value,
    data: 5,
  },
  {
    label: "Authorization",
    kind: CompletionItemKind.Value,
    data: 6,
  },
  {
    label: "Cache-Control",
    kind: CompletionItemKind.Value,
    data: 7,
  },
  {
    label: "Connection",
    kind: CompletionItemKind.Value,
    data: 8,
  },
  {
    label: "Cookie",
    kind: CompletionItemKind.Value,
    data: 9,
  },
  {
    label: "Content-Length",
    kind: CompletionItemKind.Value,
    data: 10,
  },
  {
    label: "Content-Type",
    kind: CompletionItemKind.Value,
    data: 11,
  },
  {
    label: "Date",
    kind: CompletionItemKind.Value,
    data: 12,
  },
  {
    label: "Expect",
    kind: CompletionItemKind.Value,
    data: 13,
  },
  {
    label: "Forwarded",
    kind: CompletionItemKind.Value,
    data: 14,
  },
  {
    label: "From",
    kind: CompletionItemKind.Value,
    data: 15,
  },
  {
    label: "Host",
    kind: CompletionItemKind.Value,
    data: 16,
  },
  {
    label: "If-Match",
    kind: CompletionItemKind.Value,
    data: 17,
  },
  {
    label: "If-Modified-Since",
    kind: CompletionItemKind.Value,
    data: 18,
  },
  {
    label: "If-None-Match",
    kind: CompletionItemKind.Value,
    data: 19,
  },
  {
    label: "If-Range",
    kind: CompletionItemKind.Value,
    data: 20,
  },
];

type HeaderValueCompletionItems = {
  [key: string]: CompletionItem[];
};

export const headerValueCompletionItems: HeaderValueCompletionItems[] = [
  {
    Accept: [
      {
        label: "text/html",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "text/plain",
        kind: CompletionItemKind.Value,
        data: 2,
      },
      {
        label: "application/json",
        kind: CompletionItemKind.Value,
        data: 3,
      },
      {
        label: "application/xml",
        kind: CompletionItemKind.Value,
        data: 4,
      },
    ],
    "Accept-Charset": [
      {
        label: "utf-8",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "iso-8859-1",
        kind: CompletionItemKind.Value,
        data: 2,
      },
    ],
    "Accept-Encoding": [
      {
        label: "gzip",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "deflate",
        kind: CompletionItemKind.Value,
        data: 2,
      },
    ],
    "Accept-Language": [
      {
        label: "en-US",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "en-GB",
        kind: CompletionItemKind.Value,
        data: 2,
      },
      {
        label: "en",
        kind: CompletionItemKind.Value,
        data: 3,
      },
      {
        label: "de",
        kind: CompletionItemKind.Value,
        data: 4,
      },
      {
        label: "fr",
        kind: CompletionItemKind.Value,
        data: 5,
      },
    ],
    "Accept-Datetime": [
      {
        label: "Thu, 31 May 2007 20:35:00 GMT",
        kind: CompletionItemKind.Value,
        data: 1,
      },
    ],
    Authorization: [
      {
        label: "Basic ",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "Bearer ",
        kind: CompletionItemKind.Value,
        data: 2,
      },
    ],
    "Cache-Control": [
      {
        label: "no-cache",
        kind: CompletionItemKind.Value,
        data: 1,
      },
      {
        label: "max-age=3600",
        kind: CompletionItemKind.Value,
        data: 2,
      },
    ],
    Connection: [
      {
        label: "keep-alive",
        kind: CompletionItemKind.Value,
        data: 1,
      },
    ],
  },
];

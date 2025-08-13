; Highlight HTTP method
(method) @function.method

; Highlight URL
(request url: (_) @string.special.url)

; Highlight HTTP version
(http_version) @constant

; Highlight status code and text in response
(status_code) @number
(status_text) @string

; Highlight headers
(header name: (_) @constant)

; Highlight external JSON body path
(external_body path: (_) @string.special.path)

; Highlight request separators and comments
[
  (request_separator)
  (comment)
] @comment @spell

; --- GraphQL Highlighting ---

; Highlight 'mutation' and 'query' keywords, and the operation name
(operation_definition
  name: (name) @function.method
  _ @keyword)

; Highlight variable definitions in the operation's parameters
(variable_definition
  name: (variable) @variable
  type: (named_type) @type)

; Highlight the fields being selected within the operation's body
(field
  name: (name) @property)

; Highlight the arguments passed to the fields
(argument
  name: (name) @variable)

; --- Operators and Punctuation ---

; Operators
[
  "="
  "!"
] @operator

; Punctuation
[
  ":"
  "$"
] @punctuation.delimiter

; Brackets for both HTTP and GraphQL
[
  "("
  ")"
  "{"
  "}"
  "..."
] @punctuation.bracket

import globals from "globals";

export default [
  {
    rules: {
      "no-undef": "error",
    },
    languageOptions: {
      parserOptions: {
        ecmaVersion: 2018,
      },
      globals: {
        ...globals.node,
        // globals provided by tree sitter
        field: false,
        grammar: false,
        seq: false,
        choice: false,
        repeat: false,
        repeat1: false,
        optional: false,
        prec: false,
        token: false,
        alias: false,
      },
    },
  },
];

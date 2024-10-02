const eslintPluginPrettierRecommended = require("eslint-plugin-prettier/recommended");
module.exports = [
  {
    ...eslintPluginPrettierRecommended,
    files: ["src/**/*.ts"],
  },
];

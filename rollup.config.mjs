import typescript from "@rollup/plugin-typescript";
import commonjs from "@rollup/plugin-commonjs";
import { nodeResolve } from "@rollup/plugin-node-resolve";
import pluginJson from "@rollup/plugin-json";

export default [
  {
    input: "./pkg/server/src/index.ts",
    output: {
      format: "cjs",
      file: "./pkg/server/dist/cli.js",
    },
    external: ["tree-sitter", "@mistweaverco/tree-sitter-kulala"],
    plugins: [
      nodeResolve(),
      typescript({
        tsconfig: "./pkg/server/tsconfig.json",
      }),
      pluginJson(),
      commonjs(),
    ],
  },
];

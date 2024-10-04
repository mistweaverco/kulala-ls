import typescript from "@rollup/plugin-typescript";
import { nodeResolve } from "@rollup/plugin-node-resolve";

export default [
  {
    input: "./pkg/server/src/cli.ts",
    output: {
      format: "cjs",
      file: "./pkg/server/dist/cli.js",
    },
    plugins: [
      typescript({
        tsconfig: "./pkg/server/tsconfig.json",
      }),
      nodeResolve(),
    ],
  },
];

import typescript from "@rollup/plugin-typescript";
import { nodeResolve } from "@rollup/plugin-node-resolve";

export default [
  {
    input: "./src/server/index.ts",
    output: {
      format: "cjs",
      file: "dist/kulala-ls.js",
    },
    plugins: [typescript(), nodeResolve()],
  },
];

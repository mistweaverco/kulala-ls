import * as fs from "fs";
export const FileLogger = fs.createWriteStream("/tmp/kulala-ls.log", {
  flags: "a",
});

import * as fs from "fs";

const getTempDir = (): string => {
  switch (process.platform) {
    case "win32":
      return process.env.TEMP as string;
    case "linux":
      return "/tmp";
    case "darwin":
      return "/tmp";
    default:
      throw new Error("Unsupported platform");
  }
};

class LoggerBuilder {
  private logFilePath: string;

  constructor() {
    this.logFilePath = `${getTempDir()}/kulala-ls.log`;
  }

  log(...args: unknown[]): void {
    const timestamp = new Date().toISOString();
    const message = args.join(" ");
    const logMessage = `[${timestamp}]: ${message}\n`;

    // Append the log message to the log file
    fs.appendFileSync(this.logFilePath, logMessage, { encoding: "utf8" });
  }
}

export { LoggerBuilder };

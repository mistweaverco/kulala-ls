import * as fs from "fs";

class Logger {
  private logFilePath: string;

  constructor(logPath: string = "/tmp/kulala-ls.log") {
    this.logFilePath = logPath;
  }

  log(...args: unknown[]): void {
    const timestamp = new Date().toISOString();
    const message = args.join(" ");
    const logMessage = `[${timestamp}]: ${message}\n`;

    // Append the log message to the log file
    fs.appendFileSync(this.logFilePath, logMessage, { encoding: "utf8" });
  }
}

export { Logger };

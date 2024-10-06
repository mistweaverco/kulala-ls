<div align="center">

![Kulala Logo](logo.svg)

# kulala-ls

[![NPM](https://img.shields.io/npm/v/@mistweaverco/kulala-ls?style=for-the-badge)](https://www.npmjs.com/package/@mistweaverco/kulala-ls)
[![TypeScript](https://img.shields.io/badge/TypeScript-3178C6.svg?style=for-the-badge&logo=typescript&logoColor=FFF)](https://www.typescriptlang.org/)
[![Rollup](https://img.shields.io/badge/Rollup-bd0f0f.svg?style=for-the-badge&logo=rollup.js&logoColor=FFF)](https://rollupjs.org/)
[![GitHub release (latest by date)](https://img.shields.io/github/v/release/mistweaverco/kulala-ls?style=for-the-badge)](https://github.com/mistweaverco/kulala-ls/releases/latest)
[![Discord](https://img.shields.io/badge/discord-join-7289da?style=for-the-badge&logo=discord)](https://discord.gg/QyVQmfY4Rt)

[Supports](#supports) • [Usage](https://kulala.mwco.app/docs/usage/) • [HTTP File Spec](https://kulala.mwco.app/docs/usage/http-file-spec)

<p></p>

A minimal 🤏 language 🔊 server 📡 for HTTP 🐼 syntax 🌈.

Kulala is swahili for "rest" or "relax".

<p></p>

</div>

## Supports

- Variable completion *(with support for multiple sources)*
  - [x] `OS environment` (Kulala)
  - [x] `http-client.env.json` (Kulala and Intellij)
  - [x] `http-client.private.env.json` (Kulala and Intellij)
  - [x] `.env` (Kulala and rest-nvim)
  - [x] `.vscode/settings.json` *`rest-client.environmentVariables`* (Kulala and VSCode rest-client)
  - [x] `*.code-workspace` *`rest-client.environmentVariables`* (Kulala and VSCode rest-client)
- [x] Header name completion
- [x] Header value completion
- [x] Method completion
- [x] Scheme completion
- [x] HTTP Version completion

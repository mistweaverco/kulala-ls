<div align="center">

![Kulala Logo](logo.svg)

# kulala-ls

[![NPM](https://img.shields.io/npm/v/@mistweaverco/kulala-ls?style=for-the-badge)](https://www.npmjs.com/package/@mistweaverco/kulala-ls)
[![TypeScript](https://img.shields.io/badge/TypeScript-3178C6.svg?style=for-the-badge&logo=typescript&logoColor=FFF)](https://www.typescriptlang.org/)
[![Rollup](https://img.shields.io/badge/Rollup-bd0f0f.svg?style=for-the-badge&logo=rollup.js&logoColor=FFF)](https://rollupjs.org/)
[![GitHub release (latest by date)](https://img.shields.io/github/v/release/mistweaverco/kulala-ls?style=for-the-badge)](https://github.com/mistweaverco/kulala-ls/releases/latest)
[![Discord](https://img.shields.io/badge/discord-join-7289da?style=for-the-badge&logo=discord)](https://discord.gg/QyVQmfY4Rt)

[Install](#install) •[Supports](#supports) • [Usage](https://kulala.mwco.app/docs/usage/) • [HTTP File Spec](https://kulala.mwco.app/docs/usage/http-file-spec)

<p></p>

A minimal 🤏 language 🔊 server 📡 for HTTP 🐼 syntax 🌈.

Kulala is swahili for "rest" or "relax".

<p></p>

</div>

## Install

### Neovim

> [!WARNING]
> Requires Neovim 0.10.0+.

Install language server:

```sh
npm install -g @mistweaverco/kulala-ls
```

Recommended plugins:

- [lazy.nvim](https://github.com/folke/lazy.nvim)
- [nvim-cmp](https://github.com/hrsh7th/nvim-cmp)
- [cmp-nvim-lsp](https://github.com/hrsh7th/cmp-nvim-lsp)
- [lsp-config](https://github.com/neovim/nvim-lspconfig)

### Configuration

```lua
{
  "neovim/nvim-lspconfig",
  dependencies = {
    "hrsh7th/nvim-cmp",
    "hrsh7th/cmp-nvim-lsp",
  },
  config = function()
    local nvim_lsp = require("lspconfig")
    local capabilities = require("cmp_nvim_lsp").default_capabilities(vim.lsp.protocol.make_client_capabilities())
    local servers = {
      "kulala-ls",
    }
    for _, lsp in ipairs(servers) do
      if nvim_lsp[lsp] ~= nil then
        if nvim_lsp[lsp].setup ~= nil then
          nvim_lsp[lsp].setup({
            capabilities = capabilities,
          })
        else
          vim.notify("LSP server " .. lsp .. " does not have a setup function", vim.log.levels.ERROR)
        end
      end
    end
  end,
}
```

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


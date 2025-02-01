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
- [lsp-config](https://github.com/neovim/nvim-lspconfig)
- [blink.cmp](https://github.com/saghen/blink.cmp)

### Configuration

Via Lazy:

```lua
{
  "neovim/nvim-lspconfig",
  config = function()
    local nvim_lsp = require("lspconfig")
    local capabilities = vim.lsp.protocol.make_client_capabilities()
    local servers = {
      "kulala_ls",
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
},
{
  "saghen/blink.cmp",

  build = "cargo build --release",
  version = "*",

  ---@module 'blink.cmp'
  ---@type blink.cmp.Config
  opts = {
    -- 'default' for mappings similar to built-in completion
    -- 'super-tab' for mappings similar to vscode (tab to accept, arrow keys to navigate)
    -- 'enter' for mappings similar to 'super-tab' but with 'enter' to accept
    -- See the full "keymap" documentation for information on defining your own keymap.
    keymap = {
      preset = "default",
      ["<CR>"] = { "select_and_accept", "fallback" },
      cmdline = {
        preset = "default",
      },
    },
    completion = {
      -- Show documentation when selecting a completion item
      documentation = { auto_show = true, auto_show_delay_ms = 500 },
    },

    appearance = {
      -- Set to 'mono' for 'Nerd Font Mono' or 'normal' for 'Nerd Font'
      -- Adjusts spacing to ensure icons are aligned
      nerd_font_variant = "mono",
    },

    -- Default list of enabled providers defined so that you can extend it
    -- elsewhere in your config, without redefining it, due to `opts_extend`
    sources = {
      default = {
        "lsp",
        "path",
        "buffer",
      },
    },
  },
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
- [x] GraphQL completion via GraphQL schema introspection

### GraphQL

You need to have a GraphQL schema file somewhere in your project.

The language server will look for it in the following order:

1. `[filename].graphql-schema.json`
2. `graphql-schema.json` (Keeps looking up the directory tree until it finds a schema file)

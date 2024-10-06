#!/usr/bin/env bash

set -euo pipefail

update_pkg_versions() {
  local files=(
    "package.json"
    "pkg/server/package.json"
    "pkg/tree-sitter/package.json"
  )
  for file in "${files[@]}"; do
    local tmp_file
    tmp_file=$(mktemp)
    jq ".version = \"$VERSION\"" "$file" > "$tmp_file" && mv "$tmp_file" "$file"
  done
}

update_pkg_versions

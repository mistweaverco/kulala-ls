#!/usr/bin/env bash

# Creates a tag based on the version found in lua/kulala/globals.lua
# and pushes it to the remote repository.

set -euo pipefail

check_all_pkg_same_version() {
  local files=(
    "package.json"
    "pkg/server/package.json"
    "pkg/tree-sitter/package.json"
  )
  local version
  version=$(jq -r '.version' "${files[0]}")
  for file in "${files[@]:1}"; do
    local file_version
    file_version=$(jq -r '.version' "$file")
    if [ "$version" != "$file_version" ]; then
      echo "All package versions must be the same."
      exit 1
    fi
  done
}

get_tag() {
  local version
  version=$(jq -r '.version' "package.json")
  echo "v$version"
}

check_on_main_branch() {
  local branch
  branch=$(git branch --show-current)
  if [ "$branch" != "main" ]; then
    echo "You must be on the main branch to create a tag."
    exit 1
  fi
}

check_if_clean() {
  if ! git diff --quiet; then
    echo "You have uncommitted changes. Please commit or stash them before creating a tag."
    exit 1
  fi
}

check_all_pkg_same_version
check_on_main_branch
check_if_clean

tag=$(get_tag)

git tag "$tag" && git push origin "$tag"

package tree_sitter_kulala_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kulala "github.com/tree-sitter/tree-sitter-kulala/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kulala.Language())
	if language == nil {
		t.Errorf("Error loading Kulala grammar")
	}
}

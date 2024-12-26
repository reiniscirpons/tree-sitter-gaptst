package tree_sitter_gaptst_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gaptst "github.com/gap-system/tree-sitter-gaptst/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gaptst.Language())

	if language == nil {
		t.Errorf("Error loading gaptst grammar")
	}
}

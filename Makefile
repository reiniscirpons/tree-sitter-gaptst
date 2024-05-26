CORPUS_VERSION=v4.13.0
EXAMPLES_DIR=./examples

.PHONY: compile format corpus test_quick test_gap test_pkg test_all clean distclean

compile: grammar.js src/scanner.c
	tree-sitter generate --no-bindings

format:
	npm run format

corpus:
	./etc/extract_corpus.sh -v $(CORPUS_VERSION) temp_extract_corpus
	mv ./temp_extract_corpus/corpus_gap_tst.tar.gz $(EXAMPLES_DIR)/corpus_gap_tst_$(CORPUS_VERSION).tar.gz
	mv ./temp_extract_corpus/corpus_pkg_tst.tar.gz $(EXAMPLES_DIR)/corpus_pkg_tst_$(CORPUS_VERSION).tar.gz

# TODO: Eventually change this to download the tarball from a github release
$(EXAMPLES_DIR)/corpus_gap_tst_$(CORPUS_VERSION).tar.gz: corpus
$(EXAMPLES_DIR)/corpus_pkg_tst_$(CORPUS_VERSION).tar.gz: corpus

$(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION):
	mkdir -p $(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION)
	tar -xzf $(EXAMPLES_DIR)/corpus_gap_tst_$(CORPUS_VERSION).tar.gz -C $(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION)

$(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION):
	mkdir -p $(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION)
	tar -xzf $(EXAMPLES_DIR)/corpus_pkg_tst_$(CORPUS_VERSION).tar.gz -C $(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION)

test_quick: compile
	tree-sitter test

test_gap: $(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION) compile
	tree-sitter parse '$(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION)/*.tst' --quiet --stat

test_pkg: $(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION) compile
	tree-sitter parse '$(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION)/*.tst' --quiet --statA

test_all: test_quick $(EXAMPLES_DIR)/temp_corpus_gap_tst_$(CORPUS_VERSION) $(EXAMPLES_DIR)/temp_corpus_pkg_tst_$(CORPUS_VERSION)
	tree-sitter parse '$(EXAMPLES_DIR)/temp_corpus_*/*.tst' --quiet --stat

image-example-parse.svg: grammar.js src/scanner.c ./etc/visualize_parse_tree.py ./examples/alternating_group.tst
	./etc/visualize_parse_tree.py -i ./examples/alternating_group.tst -o ./image-example-parse.svg


clean:
	rm -rf $(EXAMPLES_DIR)/temp_*

distclean: clean
	rm $(EXAMPLES_DIR)/corpus_gap_tst_*.tar.gz
	rm $(EXAMPLES_DIR)/corpus_pkg_tst_*.tar.gz
	rm -rf ./temp_*

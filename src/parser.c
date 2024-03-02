#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_POUND_ATif = 1,
  anon_sym_POUND_ATfi = 2,
  anon_sym_LF = 3,
  anon_sym_POUND_ATelse = 4,
  anon_sym_POUND_ATlocal = 5,
  anon_sym_POUND_ATexec = 6,
  anon_sym_gap_GT = 7,
  anon_sym_GT = 8,
  aux_sym_comment_token1 = 9,
  aux_sym_comment_token2 = 10,
  anon_sym_ = 11,
  aux_sym_gap_expression_token1 = 12,
  aux_sym_gap_expression_token2 = 13,
  sym_test_case_input_line = 14,
  sym_test_case_output = 15,
  sym_test_file = 16,
  sym_if_statement = 17,
  sym_else_clause = 18,
  sym_local_statement = 19,
  sym_exec_statement = 20,
  sym_test_case = 21,
  sym_test_case_input = 22,
  sym_comment = 23,
  sym_gap_expression = 24,
  aux_sym_test_file_repeat1 = 25,
  aux_sym_test_file_repeat2 = 26,
  aux_sym_if_statement_repeat1 = 27,
  aux_sym_test_case_input_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_ATif] = "#@if",
  [anon_sym_POUND_ATfi] = "#@fi",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND_ATelse] = "#@else",
  [anon_sym_POUND_ATlocal] = "#@local",
  [anon_sym_POUND_ATexec] = "#@exec",
  [anon_sym_gap_GT] = "gap> ",
  [anon_sym_GT] = "> ",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_] = " ",
  [aux_sym_gap_expression_token1] = "gap_expression_token1",
  [aux_sym_gap_expression_token2] = "gap_expression_token2",
  [sym_test_case_input_line] = "test_case_input_line",
  [sym_test_case_output] = "test_case_output",
  [sym_test_file] = "test_file",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_local_statement] = "local_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_test_case] = "test_case",
  [sym_test_case_input] = "test_case_input",
  [sym_comment] = "comment",
  [sym_gap_expression] = "gap_expression",
  [aux_sym_test_file_repeat1] = "test_file_repeat1",
  [aux_sym_test_file_repeat2] = "test_file_repeat2",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_test_case_input_repeat1] = "test_case_input_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_ATif] = anon_sym_POUND_ATif,
  [anon_sym_POUND_ATfi] = anon_sym_POUND_ATfi,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND_ATelse] = anon_sym_POUND_ATelse,
  [anon_sym_POUND_ATlocal] = anon_sym_POUND_ATlocal,
  [anon_sym_POUND_ATexec] = anon_sym_POUND_ATexec,
  [anon_sym_gap_GT] = anon_sym_gap_GT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_] = anon_sym_,
  [aux_sym_gap_expression_token1] = aux_sym_gap_expression_token1,
  [aux_sym_gap_expression_token2] = aux_sym_gap_expression_token2,
  [sym_test_case_input_line] = sym_test_case_input_line,
  [sym_test_case_output] = sym_test_case_output,
  [sym_test_file] = sym_test_file,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_local_statement] = sym_local_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_test_case] = sym_test_case,
  [sym_test_case_input] = sym_test_case_input,
  [sym_comment] = sym_comment,
  [sym_gap_expression] = sym_gap_expression,
  [aux_sym_test_file_repeat1] = aux_sym_test_file_repeat1,
  [aux_sym_test_file_repeat2] = aux_sym_test_file_repeat2,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_test_case_input_repeat1] = aux_sym_test_case_input_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATfi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gap_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gap_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gap_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_test_case_input_line] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_output] = {
    .visible = true,
    .named = true,
  },
  [sym_test_file] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_local_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_input] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_gap_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_input_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '>') ADVANCE(2);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND_ATif);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_ATfi);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND_ATelse);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND_ATlocal);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_ATexec);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_gap_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_gap_expression_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_gap_expression_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_gap_expression_token2);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_gap_expression_token2);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
};

enum {
  ts_external_token_test_case_input_line = 0,
  ts_external_token_test_case_output = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_test_case_input_line] = sym_test_case_input_line,
  [ts_external_token_test_case_output] = sym_test_case_output,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_test_case_input_line] = true,
    [ts_external_token_test_case_output] = true,
  },
  [2] = {
    [ts_external_token_test_case_output] = true,
  },
  [3] = {
    [ts_external_token_test_case_input_line] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_ATif] = ACTIONS(1),
    [anon_sym_POUND_ATfi] = ACTIONS(1),
    [anon_sym_POUND_ATelse] = ACTIONS(1),
    [anon_sym_POUND_ATlocal] = ACTIONS(1),
    [anon_sym_POUND_ATexec] = ACTIONS(1),
    [anon_sym_gap_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_test_case_input_line] = ACTIONS(1),
    [sym_test_case_output] = ACTIONS(1),
  },
  [1] = {
    [sym_test_file] = STATE(40),
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_exec_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [sym_test_case_input] = STATE(50),
    [sym_comment] = STATE(4),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [anon_sym_gap_GT] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(15),
  },
  [2] = {
    [sym_if_statement] = STATE(2),
    [sym_local_statement] = STATE(2),
    [sym_exec_statement] = STATE(2),
    [sym_test_case] = STATE(2),
    [sym_test_case_input] = STATE(50),
    [sym_comment] = STATE(6),
    [aux_sym_test_file_repeat1] = STATE(2),
    [aux_sym_test_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND_ATif] = ACTIONS(19),
    [anon_sym_POUND_ATlocal] = ACTIONS(22),
    [anon_sym_POUND_ATexec] = ACTIONS(25),
    [anon_sym_gap_GT] = ACTIONS(28),
    [aux_sym_comment_token1] = ACTIONS(31),
    [aux_sym_comment_token2] = ACTIONS(34),
  },
  [3] = {
    [sym_if_statement] = STATE(2),
    [sym_local_statement] = STATE(2),
    [sym_exec_statement] = STATE(2),
    [sym_test_case] = STATE(2),
    [sym_test_case_input] = STATE(50),
    [sym_comment] = STATE(5),
    [aux_sym_test_file_repeat1] = STATE(2),
    [aux_sym_test_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [anon_sym_gap_GT] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(26), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [34] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(26), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [68] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(26), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [99] = 9,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(41), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(43), 1,
      anon_sym_POUND_ATelse,
    STATE(41), 1,
      sym_else_clause,
    STATE(50), 1,
      sym_test_case_input,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(11), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [129] = 4,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      aux_sym_comment_token2,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [149] = 9,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(53), 1,
      anon_sym_POUND_ATfi,
    STATE(39), 1,
      sym_else_clause,
    STATE(50), 1,
      sym_test_case_input,
    STATE(7), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(19), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [179] = 7,
    ACTIONS(57), 1,
      anon_sym_gap_GT,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      aux_sym_comment_token2,
    STATE(50), 1,
      sym_test_case_input,
    ACTIONS(55), 2,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(30), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [204] = 8,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(66), 1,
      anon_sym_POUND_ATfi,
    STATE(47), 1,
      sym_else_clause,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [230] = 2,
    ACTIONS(70), 1,
      aux_sym_comment_token2,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [244] = 2,
    ACTIONS(74), 1,
      aux_sym_comment_token2,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [258] = 2,
    ACTIONS(78), 1,
      aux_sym_comment_token2,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [272] = 2,
    ACTIONS(82), 1,
      aux_sym_comment_token2,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [286] = 7,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(84), 1,
      anon_sym_POUND_ATfi,
    STATE(50), 1,
      sym_test_case_input,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(25), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [310] = 2,
    ACTIONS(88), 1,
      aux_sym_comment_token2,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [324] = 7,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(90), 1,
      anon_sym_POUND_ATfi,
    STATE(50), 1,
      sym_test_case_input,
    STATE(16), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(28), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [348] = 8,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(41), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(43), 1,
      anon_sym_POUND_ATelse,
    STATE(41), 1,
      sym_else_clause,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [374] = 2,
    ACTIONS(94), 1,
      aux_sym_comment_token2,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [388] = 2,
    ACTIONS(98), 1,
      aux_sym_comment_token2,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [400] = 2,
    ACTIONS(102), 1,
      aux_sym_comment_token2,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [412] = 2,
    ACTIONS(106), 1,
      aux_sym_comment_token2,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [424] = 2,
    ACTIONS(110), 1,
      aux_sym_comment_token2,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [436] = 6,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(112), 1,
      anon_sym_POUND_ATfi,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [456] = 2,
    ACTIONS(114), 1,
      aux_sym_comment_token2,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [468] = 2,
    ACTIONS(118), 1,
      aux_sym_comment_token2,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [480] = 6,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(84), 1,
      anon_sym_POUND_ATfi,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [500] = 2,
    ACTIONS(122), 1,
      aux_sym_comment_token2,
    ACTIONS(120), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      aux_sym_comment_token1,
  [512] = 5,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_test_case_input,
    STATE(8), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [529] = 3,
    ACTIONS(124), 1,
      anon_sym_GT,
    ACTIONS(126), 1,
      sym_test_case_output,
    STATE(34), 1,
      aux_sym_test_case_input_repeat1,
  [539] = 3,
    ACTIONS(124), 1,
      anon_sym_GT,
    ACTIONS(128), 1,
      sym_test_case_output,
    STATE(31), 1,
      aux_sym_test_case_input_repeat1,
  [549] = 3,
    ACTIONS(130), 1,
      aux_sym_gap_expression_token1,
    ACTIONS(132), 1,
      aux_sym_gap_expression_token2,
    STATE(9), 1,
      sym_gap_expression,
  [559] = 3,
    ACTIONS(134), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      sym_test_case_output,
    STATE(34), 1,
      aux_sym_test_case_input_repeat1,
  [569] = 3,
    ACTIONS(130), 1,
      aux_sym_gap_expression_token1,
    ACTIONS(132), 1,
      aux_sym_gap_expression_token2,
    STATE(24), 1,
      sym_gap_expression,
  [579] = 3,
    ACTIONS(130), 1,
      aux_sym_gap_expression_token1,
    ACTIONS(132), 1,
      aux_sym_gap_expression_token2,
    STATE(23), 1,
      sym_gap_expression,
  [589] = 1,
    ACTIONS(137), 2,
      sym_test_case_output,
      anon_sym_GT,
  [594] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [598] = 1,
    ACTIONS(41), 1,
      anon_sym_POUND_ATfi,
  [602] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [606] = 1,
    ACTIONS(66), 1,
      anon_sym_POUND_ATfi,
  [610] = 1,
    ACTIONS(143), 1,
      sym_test_case_input_line,
  [614] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [618] = 1,
    ACTIONS(147), 1,
      anon_sym_LF,
  [622] = 1,
    ACTIONS(149), 1,
      anon_sym_,
  [626] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [630] = 1,
    ACTIONS(153), 1,
      anon_sym_POUND_ATfi,
  [634] = 1,
    ACTIONS(155), 1,
      sym_test_case_output,
  [638] = 1,
    ACTIONS(157), 1,
      sym_test_case_input_line,
  [642] = 1,
    ACTIONS(159), 1,
      sym_test_case_output,
  [646] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [650] = 1,
    ACTIONS(163), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 374,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 400,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 468,
  [SMALL_STATE(28)] = 480,
  [SMALL_STATE(29)] = 500,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 529,
  [SMALL_STATE(32)] = 539,
  [SMALL_STATE(33)] = 549,
  [SMALL_STATE(34)] = 559,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 579,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 598,
  [SMALL_STATE(40)] = 602,
  [SMALL_STATE(41)] = 606,
  [SMALL_STATE(42)] = 610,
  [SMALL_STATE(43)] = 614,
  [SMALL_STATE(44)] = 618,
  [SMALL_STATE(45)] = 622,
  [SMALL_STATE(46)] = 626,
  [SMALL_STATE(47)] = 630,
  [SMALL_STATE(48)] = 634,
  [SMALL_STATE(49)] = 638,
  [SMALL_STATE(50)] = 642,
  [SMALL_STATE(51)] = 646,
  [SMALL_STATE(52)] = 650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(33),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(36),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(20),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(45),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gap_expression, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gap_expression, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gap_expression, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gap_expression, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_statement, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_statement, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_statement, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_input, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_input, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_input_repeat1, 2), SHIFT_REPEAT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_input_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_GAPtst_external_scanner_create(void);
void tree_sitter_GAPtst_external_scanner_destroy(void *);
bool tree_sitter_GAPtst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_GAPtst_external_scanner_serialize(void *, char *);
void tree_sitter_GAPtst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_GAPtst(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_GAPtst_external_scanner_create,
      tree_sitter_GAPtst_external_scanner_destroy,
      tree_sitter_GAPtst_external_scanner_scan,
      tree_sitter_GAPtst_external_scanner_serialize,
      tree_sitter_GAPtst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

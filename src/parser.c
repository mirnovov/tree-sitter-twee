#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__prose_part_token1 = 1,
  anon_sym_COLON_COLON = 2,
  anon_sym_LF = 3,
  anon_sym_LBRACK_LBRACK = 4,
  anon_sym_RBRACK_RBRACK = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  aux_sym__json_part_token1 = 10,
  aux_sym__inline_json_part_token1 = 11,
  sym_separator = 12,
  sym_label = 13,
  sym_name = 14,
  sym_dest = 15,
  sym_tag = 16,
  sym_story = 17,
  sym_passage = 18,
  sym__body = 19,
  sym_prose = 20,
  sym__prose_part = 21,
  sym_heading = 22,
  sym_link = 23,
  sym_tags = 24,
  sym_json = 25,
  aux_sym__json_part = 26,
  sym_inline_json = 27,
  aux_sym__inline_json_part = 28,
  aux_sym_story_repeat1 = 29,
  aux_sym_prose_repeat1 = 30,
  aux_sym_tags_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__prose_part_token1] = "_prose_part_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__json_part_token1] = "_json_part_token1",
  [aux_sym__inline_json_part_token1] = "_inline_json_part_token1",
  [sym_separator] = "separator",
  [sym_label] = "label",
  [sym_name] = "name",
  [sym_dest] = "dest",
  [sym_tag] = "tag",
  [sym_story] = "story",
  [sym_passage] = "passage",
  [sym__body] = "_body",
  [sym_prose] = "prose",
  [sym__prose_part] = "_prose_part",
  [sym_heading] = "heading",
  [sym_link] = "link",
  [sym_tags] = "tags",
  [sym_json] = "json",
  [aux_sym__json_part] = "_json_part",
  [sym_inline_json] = "inline_json",
  [aux_sym__inline_json_part] = "_inline_json_part",
  [aux_sym_story_repeat1] = "story_repeat1",
  [aux_sym_prose_repeat1] = "prose_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__prose_part_token1] = aux_sym__prose_part_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__json_part_token1] = aux_sym__json_part_token1,
  [aux_sym__inline_json_part_token1] = aux_sym__inline_json_part_token1,
  [sym_separator] = sym_separator,
  [sym_label] = sym_label,
  [sym_name] = sym_name,
  [sym_dest] = sym_dest,
  [sym_tag] = sym_tag,
  [sym_story] = sym_story,
  [sym_passage] = sym_passage,
  [sym__body] = sym__body,
  [sym_prose] = sym_prose,
  [sym__prose_part] = sym__prose_part,
  [sym_heading] = sym_heading,
  [sym_link] = sym_link,
  [sym_tags] = sym_tags,
  [sym_json] = sym_json,
  [aux_sym__json_part] = aux_sym__json_part,
  [sym_inline_json] = sym_inline_json,
  [aux_sym__inline_json_part] = aux_sym__inline_json_part,
  [aux_sym_story_repeat1] = aux_sym_story_repeat1,
  [aux_sym_prose_repeat1] = aux_sym_prose_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__prose_part_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_part_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_json_part_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dest] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_story] = {
    .visible = true,
    .named = true,
  },
  [sym_passage] = {
    .visible = true,
    .named = true,
  },
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym_prose] = {
    .visible = true,
    .named = true,
  },
  [sym__prose_part] = {
    .visible = false,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__json_part] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_json] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inline_json_part] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_story_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < ' ' || ',' < lookahead) &&
          (lookahead < '/' || '>' < lookahead)) ADVANCE(44);
      if ((' ' <= lookahead && lookahead <= ',') ||
          ('/' <= lookahead && lookahead <= '>')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(9);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__prose_part_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__prose_part_token1);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__prose_part_token1);
      if (lookahead == '[') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__prose_part_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__prose_part_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__json_part_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__json_part_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__inline_json_part_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__inline_json_part_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '>') ADVANCE(44);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < ' ' || ',' < lookahead) &&
          (lookahead < '/' || '>' < lookahead)) ADVANCE(44);
      if ((' ' <= lookahead && lookahead <= ',') ||
          ('/' <= lookahead && lookahead <= '>')) ADVANCE(9);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(9);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_dest);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_dest);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
  },
  [1] = {
    [sym_story] = STATE(32),
    [sym_passage] = STATE(5),
    [sym_heading] = STATE(2),
    [aux_sym_story_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym__prose_part_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(4), 3,
      sym__prose_part,
      sym_link,
      aux_sym_prose_repeat1,
    STATE(29), 3,
      sym__body,
      sym_prose,
      sym_json,
  [20] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym__prose_part_token1,
    ACTIONS(18), 1,
      anon_sym_COLON_COLON,
    ACTIONS(20), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(3), 3,
      sym__prose_part,
      sym_link,
      aux_sym_prose_repeat1,
  [38] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__prose_part_token1,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    STATE(3), 3,
      sym__prose_part,
      sym_link,
      aux_sym_prose_repeat1,
  [56] = 4,
    ACTIONS(5), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_heading,
    STATE(7), 2,
      sym_passage,
      aux_sym_story_repeat1,
  [70] = 5,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_tags,
    STATE(33), 1,
      sym_inline_json,
  [86] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    STATE(2), 1,
      sym_heading,
    STATE(7), 2,
      sym_passage,
      aux_sym_story_repeat1,
  [100] = 4,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      aux_sym__json_part_token1,
    STATE(14), 1,
      aux_sym__json_part,
  [113] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 3,
      aux_sym__prose_part_token1,
      anon_sym_COLON_COLON,
      anon_sym_LBRACK_LBRACK,
  [122] = 4,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      aux_sym__inline_json_part_token1,
    STATE(10), 1,
      aux_sym__inline_json_part,
  [135] = 4,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      aux_sym__json_part_token1,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym__json_part,
  [148] = 4,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      aux_sym__json_part_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym__json_part,
  [161] = 4,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym__inline_json_part_token1,
    STATE(10), 1,
      aux_sym__inline_json_part,
  [174] = 4,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      aux_sym__json_part_token1,
    STATE(14), 1,
      aux_sym__json_part,
  [187] = 3,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      aux_sym__json_part_token1,
    STATE(11), 1,
      aux_sym__json_part,
  [197] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    ACTIONS(82), 1,
      sym_tag,
    STATE(16), 1,
      aux_sym_tags_repeat1,
  [207] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_inline_json,
  [217] = 3,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      aux_sym__json_part_token1,
    STATE(8), 1,
      aux_sym__json_part,
  [227] = 3,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      aux_sym__json_part_token1,
    STATE(12), 1,
      aux_sym__json_part,
  [237] = 2,
    ACTIONS(93), 1,
      aux_sym__json_part_token1,
    ACTIONS(91), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [245] = 2,
    ACTIONS(97), 1,
      aux_sym__inline_json_part_token1,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [253] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      sym_tag,
    STATE(27), 1,
      aux_sym_tags_repeat1,
  [263] = 1,
    ACTIONS(103), 3,
      aux_sym__prose_part_token1,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACE,
  [269] = 1,
    ACTIONS(105), 3,
      aux_sym__prose_part_token1,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACE,
  [275] = 1,
    ACTIONS(107), 3,
      aux_sym__prose_part_token1,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACE,
  [281] = 3,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      aux_sym__inline_json_part_token1,
    STATE(13), 1,
      aux_sym__inline_json_part,
  [291] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      sym_tag,
    STATE(16), 1,
      aux_sym_tags_repeat1,
  [301] = 2,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
  [308] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
  [313] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
  [318] = 2,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
  [325] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [329] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [333] = 1,
    ACTIONS(129), 1,
      anon_sym_LF,
  [337] = 1,
    ACTIONS(131), 1,
      sym_dest,
  [341] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [345] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACK_RBRACK,
  [349] = 1,
    ACTIONS(137), 1,
      sym_label,
  [353] = 1,
    ACTIONS(139), 1,
      sym_name,
  [357] = 1,
    ACTIONS(141), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 197,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 263,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 275,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 291,
  [SMALL_STATE(28)] = 301,
  [SMALL_STATE(29)] = 308,
  [SMALL_STATE(30)] = 313,
  [SMALL_STATE(31)] = 318,
  [SMALL_STATE(32)] = 325,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 333,
  [SMALL_STATE(35)] = 337,
  [SMALL_STATE(36)] = 341,
  [SMALL_STATE(37)] = 345,
  [SMALL_STATE(38)] = 349,
  [SMALL_STATE(39)] = 353,
  [SMALL_STATE(40)] = 357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prose_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prose_repeat1, 2), SHIFT_REPEAT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prose, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prose, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_story, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_story_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_story_repeat1, 2), SHIFT_REPEAT(39),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_json_part, 2), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_json_part, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_json_part, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_part, 2), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_part, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_part, 2), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_part, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_part, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_json_part, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_json_part, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passage, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 3),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_json, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twee(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

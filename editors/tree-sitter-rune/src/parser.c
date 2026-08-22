#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_AT = 3,
  anon_sym_gather = 4,
  anon_sym_as = 5,
  anon_sym_schema = 6,
  anon_sym_COLON = 7,
  anon_sym_end = 8,
  anon_sym_string = 9,
  anon_sym_str = 10,
  anon_sym_int = 11,
  anon_sym_integer = 12,
  anon_sym_float = 13,
  anon_sym_number = 14,
  anon_sym_bool = 15,
  anon_sym_boolean = 16,
  anon_sym_regex = 17,
  anon_sym_null = 18,
  anon_sym_any = 19,
  anon_sym_object = 20,
  anon_sym_enum = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_required = 24,
  anon_sym_default = 25,
  anon_sym_range = 26,
  anon_sym_if = 27,
  anon_sym_else = 28,
  anon_sym_elseif = 29,
  anon_sym_else_DASHif = 30,
  anon_sym_endif = 31,
  anon_sym_EQ = 32,
  anon_sym_with = 33,
  sym_conditional_value = 34,
  anon_sym_COMMA = 35,
  sym_condition = 36,
  sym_reference = 37,
  sym_string = 38,
  sym_regex = 39,
  sym_number = 40,
  sym_range = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  anon_sym_None = 44,
  sym__terminator = 45,
  sym_source_file = 46,
  sym__item = 47,
  sym_metadata = 48,
  sym_gather_statement = 49,
  sym_schema_block = 50,
  sym__schema_item = 51,
  sym_schema_object = 52,
  sym_schema_field = 53,
  sym__schema_type = 54,
  sym_schema_primitive = 55,
  sym_schema_enum = 56,
  sym_schema_array_type = 57,
  sym_schema_modifier = 58,
  sym_object_block = 59,
  sym__object_item = 60,
  sym_if_block = 61,
  sym_assignment = 62,
  sym_inline_attributes = 63,
  sym_inline_attribute = 64,
  sym__value = 65,
  sym_array = 66,
  sym_boolean = 67,
  sym_null = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_schema_block_repeat1 = 70,
  aux_sym_schema_field_repeat1 = 71,
  aux_sym_object_block_repeat1 = 72,
  aux_sym_inline_attributes_repeat1 = 73,
  aux_sym_array_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [anon_sym_gather] = "gather",
  [anon_sym_as] = "as",
  [anon_sym_schema] = "schema",
  [anon_sym_COLON] = ":",
  [anon_sym_end] = "end",
  [anon_sym_string] = "string",
  [anon_sym_str] = "str",
  [anon_sym_int] = "int",
  [anon_sym_integer] = "integer",
  [anon_sym_float] = "float",
  [anon_sym_number] = "number",
  [anon_sym_bool] = "bool",
  [anon_sym_boolean] = "boolean",
  [anon_sym_regex] = "regex",
  [anon_sym_null] = "null",
  [anon_sym_any] = "any",
  [anon_sym_object] = "object",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_required] = "required",
  [anon_sym_default] = "default",
  [anon_sym_range] = "range",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else_DASHif] = "else-if",
  [anon_sym_endif] = "endif",
  [anon_sym_EQ] = "=",
  [anon_sym_with] = "with",
  [sym_conditional_value] = "conditional_value",
  [anon_sym_COMMA] = ",",
  [sym_condition] = "condition",
  [sym_reference] = "reference",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym_number] = "number",
  [sym_range] = "range",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_None] = "None",
  [sym__terminator] = "_terminator",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_metadata] = "metadata",
  [sym_gather_statement] = "gather_statement",
  [sym_schema_block] = "schema_block",
  [sym__schema_item] = "_schema_item",
  [sym_schema_object] = "schema_object",
  [sym_schema_field] = "schema_field",
  [sym__schema_type] = "_schema_type",
  [sym_schema_primitive] = "schema_primitive",
  [sym_schema_enum] = "schema_enum",
  [sym_schema_array_type] = "schema_array_type",
  [sym_schema_modifier] = "schema_modifier",
  [sym_object_block] = "object_block",
  [sym__object_item] = "_object_item",
  [sym_if_block] = "if_block",
  [sym_assignment] = "assignment",
  [sym_inline_attributes] = "inline_attributes",
  [sym_inline_attribute] = "inline_attribute",
  [sym__value] = "_value",
  [sym_array] = "array",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_block_repeat1] = "schema_block_repeat1",
  [aux_sym_schema_field_repeat1] = "schema_field_repeat1",
  [aux_sym_object_block_repeat1] = "object_block_repeat1",
  [aux_sym_inline_attributes_repeat1] = "inline_attributes_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_gather] = anon_sym_gather,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else_DASHif] = anon_sym_else_DASHif,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_with] = anon_sym_with,
  [sym_conditional_value] = sym_conditional_value,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_condition] = sym_condition,
  [sym_reference] = sym_reference,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym_number] = sym_number,
  [sym_range] = sym_range,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_None] = anon_sym_None,
  [sym__terminator] = sym__terminator,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_metadata] = sym_metadata,
  [sym_gather_statement] = sym_gather_statement,
  [sym_schema_block] = sym_schema_block,
  [sym__schema_item] = sym__schema_item,
  [sym_schema_object] = sym_schema_object,
  [sym_schema_field] = sym_schema_field,
  [sym__schema_type] = sym__schema_type,
  [sym_schema_primitive] = sym_schema_primitive,
  [sym_schema_enum] = sym_schema_enum,
  [sym_schema_array_type] = sym_schema_array_type,
  [sym_schema_modifier] = sym_schema_modifier,
  [sym_object_block] = sym_object_block,
  [sym__object_item] = sym__object_item,
  [sym_if_block] = sym_if_block,
  [sym_assignment] = sym_assignment,
  [sym_inline_attributes] = sym_inline_attributes,
  [sym_inline_attribute] = sym_inline_attribute,
  [sym__value] = sym__value,
  [sym_array] = sym_array,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_block_repeat1] = aux_sym_schema_block_repeat1,
  [aux_sym_schema_field_repeat1] = aux_sym_schema_field_repeat1,
  [aux_sym_object_block_repeat1] = aux_sym_object_block_repeat1,
  [aux_sym_inline_attributes_repeat1] = aux_sym_inline_attributes_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gather] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_conditional_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_gather_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_block] = {
    .visible = true,
    .named = true,
  },
  [sym__schema_item] = {
    .visible = false,
    .named = true,
  },
  [sym_schema_object] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_field] = {
    .visible = true,
    .named = true,
  },
  [sym__schema_type] = {
    .visible = false,
    .named = true,
  },
  [sym_schema_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_object_block] = {
    .visible = true,
    .named = true,
  },
  [sym__object_item] = {
    .visible = false,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_attributes = 2,
  field_condition = 3,
  field_key = 4,
  field_name = 5,
  field_path = 6,
  field_type = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_attributes] = "attributes",
  [field_condition] = "condition",
  [field_key] = "key",
  [field_name] = "name",
  [field_path] = "path",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_path, 1},
  [2] =
    {field_key, 0},
    {field_value, 1},
  [4] =
    {field_name, 1},
    {field_value, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_key, 0},
    {field_value, 2},
  [9] =
    {field_attributes, 2},
    {field_key, 0},
    {field_value, 1},
  [12] =
    {field_alias, 3},
    {field_path, 1},
  [14] =
    {field_condition, 1},
  [15] =
    {field_attributes, 3},
    {field_key, 0},
    {field_value, 2},
  [18] =
    {field_name, 0},
    {field_value, 1},
  [20] =
    {field_name, 0},
    {field_type, 1},
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
  [7] = 5,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 32,
  [40] = 29,
  [41] = 33,
  [42] = 34,
  [43] = 35,
  [44] = 36,
  [45] = 37,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 24,
  [62] = 62,
  [63] = 46,
  [64] = 57,
  [65] = 65,
  [66] = 47,
  [67] = 55,
  [68] = 50,
  [69] = 52,
  [70] = 56,
  [71] = 48,
  [72] = 49,
  [73] = 51,
  [74] = 53,
  [75] = 54,
  [76] = 23,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 27,
  [83] = 83,
  [84] = 22,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 107,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 119,
  [131] = 131,
  [132] = 114,
  [133] = 133,
  [134] = 117,
  [135] = 133,
  [136] = 124,
  [137] = 127,
  [138] = 131,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 111,
  [143] = 143,
  [144] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 100,
        '"', 2,
        '#', 31,
        '\'', 6,
        ',', 46,
        ':', 33,
        '=', 38,
        '@', 32,
        'N', 80,
        '[', 36,
        ']', 37,
        'f', 72,
        'n', 83,
        'r', 71,
        't', 81,
        '+', 19,
        '-', 19,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 100,
        '"', 2,
        '#', 31,
        '$', 25,
        '\'', 6,
        ',', 46,
        ':', 33,
        '=', 38,
        'N', 59,
        '[', 36,
        ']', 37,
        'f', 50,
        'i', 54,
        'n', 62,
        'r', 49,
        't', 60,
        '+', 24,
        '-', 24,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '\n', 100,
        '"', 2,
        '#', 31,
        '\'', 6,
        '@', 32,
        ']', 37,
        '+', 23,
        '-', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == 'e') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_conditional_value);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(15);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_reference);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_range);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_range);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_None);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_None);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'd', 3,
        'e', 4,
        'f', 5,
        'g', 6,
        'i', 7,
        'n', 8,
        'o', 9,
        'r', 10,
        's', 11,
        'w', 12,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'j') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'q') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_gather);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_else_DASHif);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_gather] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else_DASHif] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_range] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym__item] = STATE(11),
    [sym_metadata] = STATE(11),
    [sym_gather_statement] = STATE(11),
    [sym_schema_block] = STATE(11),
    [sym_object_block] = STATE(11),
    [sym_if_block] = STATE(11),
    [sym_assignment] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_gather] = ACTIONS(11),
    [anon_sym_schema] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym__terminator] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 3,
      anon_sym_str,
      anon_sym_int,
      anon_sym_bool,
    STATE(86), 4,
      sym__schema_type,
      sym_schema_primitive,
      sym_schema_enum,
      sym_schema_array_type,
    ACTIONS(23), 9,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_regex,
      anon_sym_null,
      anon_sym_any,
      anon_sym_object,
  [35] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      sym_reference,
    ACTIONS(31), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 5,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
      aux_sym_array_repeat1,
    ACTIONS(39), 6,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [71] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    ACTIONS(56), 1,
      sym_reference,
    ACTIONS(48), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
      aux_sym_array_repeat1,
    ACTIONS(54), 6,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(64), 1,
      sym_reference,
    ACTIONS(48), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 5,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
      aux_sym_array_repeat1,
    ACTIONS(62), 6,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 3,
      anon_sym_str,
      anon_sym_int,
      anon_sym_bool,
    STATE(115), 4,
      sym__schema_type,
      sym_schema_primitive,
      sym_schema_enum,
      sym_schema_array_type,
    ACTIONS(23), 9,
      anon_sym_string,
      anon_sym_integer,
      anon_sym_float,
      anon_sym_number,
      anon_sym_boolean,
      anon_sym_regex,
      anon_sym_null,
      anon_sym_any,
      anon_sym_object,
  [175] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      sym_reference,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    ACTIONS(48), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 5,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
      aux_sym_array_repeat1,
    ACTIONS(62), 6,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [211] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(72), 1,
      sym_reference,
    ACTIONS(48), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 5,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
      aux_sym_array_repeat1,
    ACTIONS(70), 6,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [247] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(84), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(102), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      anon_sym_gather,
    ACTIONS(99), 1,
      anon_sym_schema,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      sym_string,
    ACTIONS(108), 1,
      sym__terminator,
    STATE(10), 8,
      sym__item,
      sym_metadata,
      sym_gather_statement,
      sym_schema_block,
      sym_object_block,
      sym_if_block,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_gather,
    ACTIONS(13), 1,
      anon_sym_schema,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__terminator,
    STATE(10), 8,
      sym__item,
      sym_metadata,
      sym_gather_statement,
      sym_schema_block,
      sym_object_block,
      sym_if_block,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_COLON,
    ACTIONS(117), 1,
      anon_sym_EQ,
    ACTIONS(121), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(100), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [395] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(84), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(102), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_reference,
    ACTIONS(127), 1,
      sym__terminator,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(112), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [461] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_EQ,
    ACTIONS(121), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(100), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(103), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [524] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(98), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [554] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(137), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(95), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      sym_reference,
    ACTIONS(76), 2,
      anon_sym_null,
      anon_sym_None,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(141), 4,
      sym_conditional_value,
      sym_string,
      sym_regex,
      sym_number,
    STATE(101), 4,
      sym__value,
      sym_array,
      sym_boolean,
      sym_null,
  [614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_endif,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(155), 1,
      sym__terminator,
    ACTIONS(149), 3,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
    STATE(21), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [645] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(159), 1,
      anon_sym_endif,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(157), 3,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      anon_sym_null,
      sym_reference,
      anon_sym_true,
      anon_sym_false,
      anon_sym_None,
    ACTIONS(165), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      anon_sym_null,
      sym_reference,
      anon_sym_true,
      anon_sym_false,
      anon_sym_None,
    ACTIONS(169), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_null,
      sym_reference,
      anon_sym_true,
      anon_sym_false,
      anon_sym_None,
    ACTIONS(173), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [739] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(177), 1,
      anon_sym_endif,
    ACTIONS(179), 1,
      sym__terminator,
    ACTIONS(175), 3,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
    STATE(28), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(192), 1,
      sym__terminator,
    ACTIONS(187), 4,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_null,
      sym_reference,
      anon_sym_true,
      anon_sym_false,
      anon_sym_None,
    ACTIONS(197), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_conditional_value,
      anon_sym_COMMA,
      sym_string,
      sym_regex,
      sym_number,
      sym__terminator,
  [820] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(201), 1,
      anon_sym_endif,
    ACTIONS(199), 3,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [851] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(203), 1,
      anon_sym_end,
    ACTIONS(205), 1,
      sym__terminator,
    STATE(31), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(207), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [903] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_end,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_string,
    ACTIONS(218), 1,
      sym__terminator,
    STATE(31), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(221), 1,
      anon_sym_end,
    ACTIONS(223), 1,
      sym__terminator,
    STATE(40), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(225), 1,
      anon_sym_endif,
    ACTIONS(227), 1,
      sym__terminator,
    STATE(34), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(229), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(229), 1,
      anon_sym_endif,
    ACTIONS(231), 1,
      sym__terminator,
    STATE(36), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1033] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(233), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(233), 1,
      anon_sym_endif,
    ACTIONS(235), 1,
      sym__terminator,
    STATE(38), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1085] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(237), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(239), 1,
      anon_sym_end,
    ACTIONS(241), 1,
      sym__terminator,
    STATE(29), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1137] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      sym_string,
    ACTIONS(205), 1,
      sym__terminator,
    ACTIONS(243), 1,
      anon_sym_end,
    STATE(31), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1163] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(245), 1,
      anon_sym_endif,
    ACTIONS(247), 1,
      sym__terminator,
    STATE(42), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1189] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(249), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(249), 1,
      anon_sym_endif,
    ACTIONS(251), 1,
      sym__terminator,
    STATE(44), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(161), 1,
      sym__terminator,
    ACTIONS(253), 1,
      anon_sym_endif,
    STATE(26), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      sym_string,
    ACTIONS(253), 1,
      anon_sym_endif,
    ACTIONS(255), 1,
      sym__terminator,
    STATE(30), 5,
      sym_object_block,
      sym__object_item,
      sym_if_block,
      sym_assignment,
      aux_sym_object_block_repeat1,
  [1293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(259), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(263), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(267), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(271), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(275), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(279), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(283), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(287), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(291), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(295), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(299), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(303), 5,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_end,
      anon_sym_if,
      sym_identifier,
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(307), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(311), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(315), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_RBRACK,
      sym_string,
      sym__terminator,
    ACTIONS(171), 5,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      anon_sym_with,
      sym_identifier,
  [1561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(319), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym_string,
      sym__terminator,
    ACTIONS(259), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym_string,
      sym__terminator,
    ACTIONS(303), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(323), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_string,
      sym__terminator,
    ACTIONS(263), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_string,
      sym__terminator,
    ACTIONS(295), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      sym_string,
      sym__terminator,
    ACTIONS(275), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym_string,
      sym__terminator,
    ACTIONS(283), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      sym_string,
      sym__terminator,
    ACTIONS(299), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_string,
      sym__terminator,
    ACTIONS(267), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym_string,
      sym__terminator,
    ACTIONS(271), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      sym_string,
      sym__terminator,
    ACTIONS(279), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym_string,
      sym__terminator,
    ACTIONS(287), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym_string,
      sym__terminator,
    ACTIONS(291), 6,
      anon_sym_if,
      anon_sym_else,
      anon_sym_elseif,
      anon_sym_else_DASHif,
      anon_sym_endif,
      sym_identifier,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_RBRACK,
      sym_string,
      sym__terminator,
    ACTIONS(167), 5,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      anon_sym_with,
      sym_identifier,
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_string,
      sym__terminator,
    ACTIONS(327), 4,
      anon_sym_gather,
      anon_sym_schema,
      anon_sym_if,
      sym_identifier,
  [1817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_end,
    ACTIONS(334), 1,
      sym__terminator,
    STATE(78), 4,
      sym__schema_item,
      sym_schema_object,
      sym_schema_field,
      aux_sym_schema_block_repeat1,
  [1836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_end,
    ACTIONS(341), 1,
      sym__terminator,
    STATE(78), 4,
      sym__schema_item,
      sym_schema_object,
      sym_schema_field,
      aux_sym_schema_block_repeat1,
  [1855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_end,
    ACTIONS(345), 1,
      sym__terminator,
    STATE(83), 4,
      sym__schema_item,
      sym_schema_object,
      sym_schema_field,
      aux_sym_schema_block_repeat1,
  [1874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_end,
    ACTIONS(349), 1,
      sym__terminator,
    STATE(79), 4,
      sym__schema_item,
      sym_schema_object,
      sym_schema_field,
      aux_sym_schema_block_repeat1,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym_string,
      sym__terminator,
    ACTIONS(195), 5,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      anon_sym_with,
      sym_identifier,
  [1908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(341), 1,
      sym__terminator,
    ACTIONS(351), 1,
      anon_sym_end,
    STATE(78), 4,
      sym__schema_item,
      sym_schema_object,
      sym_schema_field,
      aux_sym_schema_block_repeat1,
  [1927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      sym_string,
      sym__terminator,
    ACTIONS(163), 5,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      anon_sym_with,
      sym_identifier,
  [1942] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_required,
    ACTIONS(356), 1,
      anon_sym_default,
    ACTIONS(359), 1,
      anon_sym_range,
    ACTIONS(362), 1,
      sym__terminator,
    STATE(85), 2,
      sym_schema_modifier,
      aux_sym_schema_field_repeat1,
  [1962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_required,
    ACTIONS(366), 1,
      anon_sym_default,
    ACTIONS(368), 1,
      anon_sym_range,
    ACTIONS(370), 1,
      sym__terminator,
    STATE(87), 2,
      sym_schema_modifier,
      aux_sym_schema_field_repeat1,
  [1982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_required,
    ACTIONS(366), 1,
      anon_sym_default,
    ACTIONS(368), 1,
      anon_sym_range,
    ACTIONS(372), 1,
      sym__terminator,
    STATE(85), 2,
      sym_schema_modifier,
      aux_sym_schema_field_repeat1,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_RBRACK,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      sym__terminator,
  [2013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_RBRACK,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      sym__terminator,
  [2024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_RBRACK,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      sym__terminator,
  [2035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__terminator,
    ACTIONS(380), 2,
      sym_identifier,
      sym_string,
    STATE(91), 2,
      sym_inline_attribute,
      aux_sym_inline_attributes_repeat1,
  [2050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__terminator,
    ACTIONS(385), 2,
      sym_identifier,
      sym_string,
    STATE(91), 2,
      sym_inline_attribute,
      aux_sym_inline_attributes_repeat1,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      sym__terminator,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      sym_identifier,
      sym_string,
    STATE(92), 2,
      sym_inline_attribute,
      aux_sym_inline_attributes_repeat1,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      anon_sym_required,
      anon_sym_default,
      anon_sym_range,
      sym__terminator,
  [2097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym__terminator,
    ACTIONS(393), 2,
      anon_sym_end,
      sym_identifier,
  [2108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym__terminator,
    ACTIONS(397), 2,
      anon_sym_end,
      sym_identifier,
  [2119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_with,
    ACTIONS(403), 1,
      sym__terminator,
    STATE(123), 1,
      sym_inline_attributes,
  [2132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__terminator,
    ACTIONS(405), 2,
      anon_sym_end,
      sym_identifier,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      sym__terminator,
    STATE(119), 1,
      sym_inline_attributes,
  [2156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_with,
    ACTIONS(411), 1,
      sym__terminator,
    STATE(122), 1,
      sym_inline_attributes,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_with,
    ACTIONS(413), 1,
      sym__terminator,
    STATE(130), 1,
      sym_inline_attributes,
  [2182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 3,
      sym_identifier,
      sym_string,
      sym__terminator,
  [2191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__terminator,
    ACTIONS(417), 2,
      anon_sym_end,
      sym_identifier,
  [2202] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_condition,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_array,
  [2222] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      sym_condition,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_as,
    ACTIONS(433), 1,
      sym__terminator,
  [2242] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      sym_condition,
  [2252] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_condition,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__terminator,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_identifier,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__terminator,
  [2290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__terminator,
  [2304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__terminator,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_range,
  [2318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__terminator,
  [2325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_string,
  [2332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [2339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__terminator,
  [2346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__terminator,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym__terminator,
  [2360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__terminator,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [2374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__terminator,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__terminator,
  [2402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [2409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__terminator,
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__terminator,
  [2423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__terminator,
  [2430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym__terminator,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__terminator,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__terminator,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COLON,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COLON,
  [2465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON,
  [2472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__terminator,
  [2479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COLON,
  [2486] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_condition,
  [2493] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_condition,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 428,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 494,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 554,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 645,
  [SMALL_STATE(22)] = 676,
  [SMALL_STATE(23)] = 697,
  [SMALL_STATE(24)] = 718,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 770,
  [SMALL_STATE(27)] = 799,
  [SMALL_STATE(28)] = 820,
  [SMALL_STATE(29)] = 851,
  [SMALL_STATE(30)] = 877,
  [SMALL_STATE(31)] = 903,
  [SMALL_STATE(32)] = 929,
  [SMALL_STATE(33)] = 955,
  [SMALL_STATE(34)] = 981,
  [SMALL_STATE(35)] = 1007,
  [SMALL_STATE(36)] = 1033,
  [SMALL_STATE(37)] = 1059,
  [SMALL_STATE(38)] = 1085,
  [SMALL_STATE(39)] = 1111,
  [SMALL_STATE(40)] = 1137,
  [SMALL_STATE(41)] = 1163,
  [SMALL_STATE(42)] = 1189,
  [SMALL_STATE(43)] = 1215,
  [SMALL_STATE(44)] = 1241,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1293,
  [SMALL_STATE(47)] = 1310,
  [SMALL_STATE(48)] = 1327,
  [SMALL_STATE(49)] = 1344,
  [SMALL_STATE(50)] = 1361,
  [SMALL_STATE(51)] = 1378,
  [SMALL_STATE(52)] = 1395,
  [SMALL_STATE(53)] = 1412,
  [SMALL_STATE(54)] = 1429,
  [SMALL_STATE(55)] = 1446,
  [SMALL_STATE(56)] = 1463,
  [SMALL_STATE(57)] = 1480,
  [SMALL_STATE(58)] = 1497,
  [SMALL_STATE(59)] = 1513,
  [SMALL_STATE(60)] = 1529,
  [SMALL_STATE(61)] = 1545,
  [SMALL_STATE(62)] = 1561,
  [SMALL_STATE(63)] = 1577,
  [SMALL_STATE(64)] = 1593,
  [SMALL_STATE(65)] = 1609,
  [SMALL_STATE(66)] = 1625,
  [SMALL_STATE(67)] = 1641,
  [SMALL_STATE(68)] = 1657,
  [SMALL_STATE(69)] = 1673,
  [SMALL_STATE(70)] = 1689,
  [SMALL_STATE(71)] = 1705,
  [SMALL_STATE(72)] = 1721,
  [SMALL_STATE(73)] = 1737,
  [SMALL_STATE(74)] = 1753,
  [SMALL_STATE(75)] = 1769,
  [SMALL_STATE(76)] = 1785,
  [SMALL_STATE(77)] = 1801,
  [SMALL_STATE(78)] = 1817,
  [SMALL_STATE(79)] = 1836,
  [SMALL_STATE(80)] = 1855,
  [SMALL_STATE(81)] = 1874,
  [SMALL_STATE(82)] = 1893,
  [SMALL_STATE(83)] = 1908,
  [SMALL_STATE(84)] = 1927,
  [SMALL_STATE(85)] = 1942,
  [SMALL_STATE(86)] = 1962,
  [SMALL_STATE(87)] = 1982,
  [SMALL_STATE(88)] = 2002,
  [SMALL_STATE(89)] = 2013,
  [SMALL_STATE(90)] = 2024,
  [SMALL_STATE(91)] = 2035,
  [SMALL_STATE(92)] = 2050,
  [SMALL_STATE(93)] = 2065,
  [SMALL_STATE(94)] = 2075,
  [SMALL_STATE(95)] = 2087,
  [SMALL_STATE(96)] = 2097,
  [SMALL_STATE(97)] = 2108,
  [SMALL_STATE(98)] = 2119,
  [SMALL_STATE(99)] = 2132,
  [SMALL_STATE(100)] = 2143,
  [SMALL_STATE(101)] = 2156,
  [SMALL_STATE(102)] = 2169,
  [SMALL_STATE(103)] = 2182,
  [SMALL_STATE(104)] = 2191,
  [SMALL_STATE(105)] = 2202,
  [SMALL_STATE(106)] = 2212,
  [SMALL_STATE(107)] = 2222,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2242,
  [SMALL_STATE(110)] = 2252,
  [SMALL_STATE(111)] = 2262,
  [SMALL_STATE(112)] = 2269,
  [SMALL_STATE(113)] = 2276,
  [SMALL_STATE(114)] = 2283,
  [SMALL_STATE(115)] = 2290,
  [SMALL_STATE(116)] = 2297,
  [SMALL_STATE(117)] = 2304,
  [SMALL_STATE(118)] = 2311,
  [SMALL_STATE(119)] = 2318,
  [SMALL_STATE(120)] = 2325,
  [SMALL_STATE(121)] = 2332,
  [SMALL_STATE(122)] = 2339,
  [SMALL_STATE(123)] = 2346,
  [SMALL_STATE(124)] = 2353,
  [SMALL_STATE(125)] = 2360,
  [SMALL_STATE(126)] = 2367,
  [SMALL_STATE(127)] = 2374,
  [SMALL_STATE(128)] = 2381,
  [SMALL_STATE(129)] = 2388,
  [SMALL_STATE(130)] = 2395,
  [SMALL_STATE(131)] = 2402,
  [SMALL_STATE(132)] = 2409,
  [SMALL_STATE(133)] = 2416,
  [SMALL_STATE(134)] = 2423,
  [SMALL_STATE(135)] = 2430,
  [SMALL_STATE(136)] = 2437,
  [SMALL_STATE(137)] = 2444,
  [SMALL_STATE(138)] = 2451,
  [SMALL_STATE(139)] = 2458,
  [SMALL_STATE(140)] = 2465,
  [SMALL_STATE(141)] = 2472,
  [SMALL_STATE(142)] = 2479,
  [SMALL_STATE(143)] = 2486,
  [SMALL_STATE(144)] = 2493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 6, 0, 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 6, 0, 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 8, 0, 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 8, 0, 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5, 0, 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 5, 0, 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 9, 0, 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 9, 0, 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 5, 0, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_block, 5, 0, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 10, 0, 9),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 10, 0, 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 11, 0, 9),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 11, 0, 9),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 7),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, 0, 10),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, 0, 10),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 4, 0, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_block, 4, 0, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 5, 0, 8),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 5, 0, 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_block, 6, 0, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_block, 6, 0, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_statement, 3, 0, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_statement, 3, 0, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_block, 5, 0, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_block, 5, 0, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 4, 0, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 3, 0, 1),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_schema_block_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_field_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_field_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_field_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_field_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_enum, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_array_type, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_primitive, 1, 0, 0),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_attributes_repeat1, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_attributes, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_modifier, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_modifier, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_field, 3, 0, 12),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_field, 3, 0, 12),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_field, 4, 0, 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_field, 4, 0, 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_object, 5, 0, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_object, 5, 0, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_attribute, 2, 0, 11),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_object, 4, 0, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_object, 4, 0, 5),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_runecfg(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

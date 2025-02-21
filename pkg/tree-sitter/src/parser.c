#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 49

enum ts_symbol_identifiers {
  aux_sym__plain_comment_token1 = 1,
  aux_sym__plain_comment_token2 = 2,
  anon_sym_AT = 3,
  aux_sym__var_comment_token1 = 4,
  anon_sym_EQ = 5,
  aux_sym__var_comment_token2 = 6,
  aux_sym__var_comment_token3 = 7,
  aux_sym_request_separator_token1 = 8,
  sym_method = 9,
  aux_sym_http_version_token1 = 10,
  aux_sym__target_url_line_token1 = 11,
  aux_sym__target_url_line_token2 = 12,
  sym_status_code = 13,
  sym_status_text = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE_LBRACE = 16,
  anon_sym_RBRACE_RBRACE = 17,
  anon_sym_LT = 18,
  aux_sym_pre_request_script_token1 = 19,
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  aux_sym_res_redirect_token1 = 23,
  anon_sym_AT2 = 24,
  aux_sym_xml_body_token1 = 25,
  aux_sym_json_body_token1 = 26,
  aux_sym_graphql_data_token1 = 27,
  aux_sym_graphql_json_body_token1 = 28,
  anon_sym_LT2 = 29,
  anon_sym_DASH_DASH = 30,
  aux_sym_multipart_form_data_token1 = 31,
  aux_sym_multipart_form_data_token2 = 32,
  aux_sym_raw_body_token1 = 33,
  aux_sym__raw_body_token1 = 34,
  sym__not_comment = 35,
  sym_header_entity = 36,
  sym_identifier = 37,
  aux_sym_path_token1 = 38,
  aux_sym__blank_line_token1 = 39,
  sym_document = 40,
  sym_comment = 41,
  sym__plain_comment = 42,
  sym__var_comment = 43,
  sym_request_separator = 44,
  sym_section = 45,
  sym__section_content = 46,
  sym_http_version = 47,
  aux_sym__target_url_line = 48,
  sym_target_url = 49,
  sym_response = 50,
  sym_request = 51,
  sym_header = 52,
  sym_variable = 53,
  sym_pre_request_script = 54,
  sym_res_handler_script = 55,
  sym_script = 56,
  sym_res_redirect = 57,
  sym_variable_declaration = 58,
  sym_xml_body = 59,
  sym_json_body = 60,
  sym_graphql_body = 61,
  sym_graphql_data = 62,
  sym_graphql_json_body = 63,
  sym__external_body = 64,
  sym_external_body = 65,
  sym_multipart_form_data = 66,
  sym_raw_body = 67,
  sym__raw_body = 68,
  sym_path = 69,
  sym_value = 70,
  sym__blank_line = 71,
  aux_sym_document_repeat1 = 72,
  aux_sym_target_url_repeat1 = 73,
  aux_sym___body_repeat1 = 74,
  aux_sym___body_repeat2 = 75,
  aux_sym_response_repeat1 = 76,
  aux_sym_request_repeat1 = 77,
  aux_sym_script_repeat1 = 78,
  aux_sym_multipart_form_data_repeat1 = 79,
  aux_sym_path_repeat1 = 80,
  aux_sym_value_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__plain_comment_token1] = "_plain_comment_token1",
  [aux_sym__plain_comment_token2] = "_plain_comment_token2",
  [anon_sym_AT] = "@",
  [aux_sym__var_comment_token1] = "_var_comment_token1",
  [anon_sym_EQ] = "=",
  [aux_sym__var_comment_token2] = "_var_comment_token2",
  [aux_sym__var_comment_token3] = "_var_comment_token3",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [sym_method] = "method",
  [aux_sym_http_version_token1] = "http_version_token1",
  [aux_sym__target_url_line_token1] = "_target_url_line_token1",
  [aux_sym__target_url_line_token2] = "_target_url_line_token2",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LT] = "<",
  [aux_sym_pre_request_script_token1] = "pre_request_script_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [aux_sym_res_redirect_token1] = "res_redirect_token1",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [aux_sym_graphql_json_body_token1] = "graphql_json_body_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [aux_sym_multipart_form_data_token2] = "multipart_form_data_token2",
  [aux_sym_raw_body_token1] = "raw_body_token1",
  [aux_sym__raw_body_token1] = "_raw_body_token1",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym__plain_comment] = "_plain_comment",
  [sym__var_comment] = "_var_comment",
  [sym_request_separator] = "request_separator",
  [sym_section] = "section",
  [sym__section_content] = "_section_content",
  [sym_http_version] = "http_version",
  [aux_sym__target_url_line] = "_target_url_line",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_pre_request_script] = "pre_request_script",
  [sym_res_handler_script] = "res_handler_script",
  [sym_script] = "script",
  [sym_res_redirect] = "res_redirect",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_graphql_data] = "graphql_data",
  [sym_graphql_json_body] = "json_body",
  [sym__external_body] = "_external_body",
  [sym_external_body] = "external_body",
  [sym_multipart_form_data] = "multipart_form_data",
  [sym_raw_body] = "raw_body",
  [sym__raw_body] = "_raw_body",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym___body_repeat1] = "__body_repeat1",
  [aux_sym___body_repeat2] = "__body_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_multipart_form_data_repeat1] = "multipart_form_data_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__plain_comment_token1] = aux_sym__plain_comment_token1,
  [aux_sym__plain_comment_token2] = aux_sym__plain_comment_token2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__var_comment_token1] = aux_sym__var_comment_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__var_comment_token2] = aux_sym__var_comment_token2,
  [aux_sym__var_comment_token3] = aux_sym__var_comment_token3,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [sym_method] = sym_method,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [aux_sym__target_url_line_token1] = aux_sym__target_url_line_token1,
  [aux_sym__target_url_line_token2] = aux_sym__target_url_line_token2,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_pre_request_script_token1] = aux_sym_pre_request_script_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [aux_sym_res_redirect_token1] = aux_sym_res_redirect_token1,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [aux_sym_graphql_json_body_token1] = aux_sym_graphql_json_body_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [aux_sym_multipart_form_data_token2] = aux_sym_multipart_form_data_token2,
  [aux_sym_raw_body_token1] = aux_sym_raw_body_token1,
  [aux_sym__raw_body_token1] = aux_sym__raw_body_token1,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym__plain_comment] = sym__plain_comment,
  [sym__var_comment] = sym__var_comment,
  [sym_request_separator] = sym_request_separator,
  [sym_section] = sym_section,
  [sym__section_content] = sym__section_content,
  [sym_http_version] = sym_http_version,
  [aux_sym__target_url_line] = aux_sym__target_url_line,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_pre_request_script] = sym_pre_request_script,
  [sym_res_handler_script] = sym_res_handler_script,
  [sym_script] = sym_script,
  [sym_res_redirect] = sym_res_redirect,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_graphql_data] = sym_graphql_data,
  [sym_graphql_json_body] = sym_json_body,
  [sym__external_body] = sym__external_body,
  [sym_external_body] = sym_external_body,
  [sym_multipart_form_data] = sym_multipart_form_data,
  [sym_raw_body] = sym_raw_body,
  [sym__raw_body] = sym__raw_body,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym___body_repeat1] = aux_sym___body_repeat1,
  [aux_sym___body_repeat2] = aux_sym___body_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_multipart_form_data_repeat1] = aux_sym_multipart_form_data_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__plain_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__plain_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__var_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__var_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__target_url_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__target_url_line_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pre_request_script_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_res_redirect_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipart_form_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_header_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__plain_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__var_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_content] = {
    .visible = false,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__target_url_line] = {
    .visible = false,
    .named = false,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_request_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_handler_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_data] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__external_body] = {
    .visible = false,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_body] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym___body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_header = 2,
  field_method = 3,
  field_name = 4,
  field_path = 5,
  field_request = 6,
  field_response = 7,
  field_url = 8,
  field_value = 9,
  field_version = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_method] = "method",
  [field_name] = "name",
  [field_path] = "path",
  [field_request] = "request",
  [field_response] = "response",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 0, .length = 2},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 3},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 3},
  [22] = {.index = 33, .length = 1},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 3},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 3},
  [28] = {.index = 47, .length = 2},
  [29] = {.index = 49, .length = 1},
  [30] = {.index = 50, .length = 3},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 1},
  [33] = {.index = 56, .length = 2},
  [34] = {.index = 58, .length = 4},
  [35] = {.index = 62, .length = 4},
  [36] = {.index = 66, .length = 2},
  [37] = {.index = 68, .length = 1},
  [38] = {.index = 69, .length = 1},
  [39] = {.index = 70, .length = 4},
  [40] = {.index = 74, .length = 2},
  [41] = {.index = 76, .length = 1},
  [42] = {.index = 77, .length = 4},
  [43] = {.index = 81, .length = 2},
  [44] = {.index = 83, .length = 1},
  [45] = {.index = 84, .length = 2},
  [46] = {.index = 86, .length = 2},
  [47] = {.index = 88, .length = 5},
  [48] = {.index = 93, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [2] =
    {field_request, 0, .inherited = true},
    {field_response, 0, .inherited = true},
  [4] =
    {field_response, 0},
  [5] =
    {field_request, 0},
  [6] =
    {field_request, 1, .inherited = true},
    {field_response, 1, .inherited = true},
  [8] =
    {field_url, 0},
  [9] =
    {field_value, 1},
  [10] =
    {field_name, 1},
  [11] =
    {field_header, 0},
  [12] =
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [14] =
    {field_name, 2},
  [15] =
    {field_value, 2},
  [16] =
    {field_method, 0},
    {field_url, 2},
  [18] =
    {field_url, 0},
    {field_version, 2},
  [20] =
    {field_body, 0},
  [21] =
    {field_body, 3, .inherited = true},
    {field_url, 0},
  [23] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [25] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [28] =
    {field_name, 1},
    {field_value, 3},
  [30] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [33] =
    {field_name, 0},
  [34] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [36] =
    {field_body, 4, .inherited = true},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [39] =
    {field_name, 2},
    {field_value, 4},
  [41] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [44] =
    {field_body, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [47] =
    {field_name, 1},
    {field_value, 4},
  [49] =
    {field_header, 5, .inherited = true},
  [50] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [53] =
    {field_name, 0},
    {field_value, 2},
  [55] =
    {field_path, 2},
  [56] =
    {field_name, 2},
    {field_value, 5},
  [58] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [62] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [66] =
    {field_name, 1},
    {field_value, 5},
  [68] =
    {field_body, 6, .inherited = true},
  [69] =
    {field_header, 6, .inherited = true},
  [70] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [74] =
    {field_name, 0},
    {field_value, 3},
  [76] =
    {field_path, 3},
  [77] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [81] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
  [83] =
    {field_body, 7, .inherited = true},
  [84] =
    {field_name, 0},
    {field_value, 4},
  [86] =
    {field_name, 2},
    {field_path, 4},
  [88] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [93] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [0] = sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__var_comment, 2,
    sym__var_comment,
    sym_comment,
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
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 34,
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
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 50,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 49,
  [65] = 65,
  [66] = 47,
  [67] = 67,
  [68] = 46,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 41,
  [87] = 43,
  [88] = 44,
  [89] = 89,
  [90] = 46,
  [91] = 48,
  [92] = 47,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 41,
  [100] = 48,
  [101] = 47,
  [102] = 102,
  [103] = 43,
  [104] = 46,
  [105] = 44,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 67,
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
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 127,
  [133] = 127,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 131,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 134,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 124,
  [148] = 148,
  [149] = 134,
  [150] = 134,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 154,
  [158] = 152,
  [159] = 152,
  [160] = 156,
  [161] = 156,
  [162] = 154,
  [163] = 153,
  [164] = 153,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 165,
  [173] = 165,
  [174] = 165,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 185,
  [196] = 183,
  [197] = 189,
  [198] = 185,
  [199] = 183,
  [200] = 200,
  [201] = 189,
  [202] = 180,
  [203] = 203,
  [204] = 180,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 210,
  [232] = 232,
  [233] = 215,
  [234] = 216,
  [235] = 230,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 210,
  [241] = 232,
  [242] = 215,
  [243] = 230,
  [244] = 244,
  [245] = 215,
  [246] = 230,
  [247] = 247,
  [248] = 223,
  [249] = 244,
  [250] = 232,
  [251] = 251,
  [252] = 252,
  [253] = 223,
  [254] = 244,
  [255] = 255,
  [256] = 256,
  [257] = 223,
  [258] = 258,
  [259] = 259,
  [260] = 260,
};

static TSCharacterRange aux_sym__target_url_line_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static TSCharacterRange aux_sym__target_url_line_token2_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '/'}, {':', '@'}, {'[', '`'}, {'{', 0x9f}, {0xa1, 0xa9},
  {0xab, 0xb1}, {0xb4, 0xb4}, {0xb6, 0xb8}, {0xbb, 0xbb}, {0xbf, 0xbf}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2c2, 0x2c5},
  {0x2d2, 0x2df}, {0x2e5, 0x2eb}, {0x2ed, 0x2ed}, {0x2ef, 0x36f}, {0x375, 0x375}, {0x378, 0x379}, {0x37e, 0x37e}, {0x380, 0x385},
  {0x387, 0x387}, {0x38b, 0x38b}, {0x38d, 0x38d}, {0x3a2, 0x3a2}, {0x3f6, 0x3f6}, {0x482, 0x489}, {0x530, 0x530}, {0x557, 0x558},
  {0x55a, 0x55f}, {0x589, 0x5cf}, {0x5eb, 0x5ee}, {0x5f3, 0x61f}, {0x64b, 0x65f}, {0x66a, 0x66d}, {0x670, 0x670}, {0x6d4, 0x6d4},
  {0x6d6, 0x6e4}, {0x6e7, 0x6ed}, {0x6fd, 0x6fe}, {0x700, 0x70f}, {0x711, 0x711}, {0x730, 0x74c}, {0x7a6, 0x7b0}, {0x7b2, 0x7bf},
  {0x7eb, 0x7f3}, {0x7f6, 0x7f9}, {0x7fb, 0x7ff}, {0x816, 0x819}, {0x81b, 0x823}, {0x825, 0x827}, {0x829, 0x83f}, {0x859, 0x85f},
  {0x86b, 0x86f}, {0x888, 0x888}, {0x88f, 0x89f}, {0x8ca, 0x903}, {0x93a, 0x93c}, {0x93e, 0x94f}, {0x951, 0x957}, {0x962, 0x965},
  {0x970, 0x970}, {0x981, 0x984}, {0x98d, 0x98e}, {0x991, 0x992}, {0x9a9, 0x9a9}, {0x9b1, 0x9b1}, {0x9b3, 0x9b5}, {0x9ba, 0x9bc},
  {0x9be, 0x9cd}, {0x9cf, 0x9db}, {0x9de, 0x9de}, {0x9e2, 0x9e5}, {0x9f2, 0x9f3}, {0x9fa, 0x9fb}, {0x9fd, 0xa04}, {0xa0b, 0xa0e},
  {0xa11, 0xa12}, {0xa29, 0xa29}, {0xa31, 0xa31}, {0xa34, 0xa34}, {0xa37, 0xa37}, {0xa3a, 0xa58}, {0xa5d, 0xa5d}, {0xa5f, 0xa65},
  {0xa70, 0xa71}, {0xa75, 0xa84}, {0xa8e, 0xa8e}, {0xa92, 0xa92}, {0xaa9, 0xaa9}, {0xab1, 0xab1}, {0xab4, 0xab4}, {0xaba, 0xabc},
  {0xabe, 0xacf}, {0xad1, 0xadf}, {0xae2, 0xae5}, {0xaf0, 0xaf8}, {0xafa, 0xb04}, {0xb0d, 0xb0e}, {0xb11, 0xb12}, {0xb29, 0xb29},
  {0xb31, 0xb31}, {0xb34, 0xb34}, {0xb3a, 0xb3c}, {0xb3e, 0xb5b}, {0xb5e, 0xb5e}, {0xb62, 0xb65}, {0xb70, 0xb70}, {0xb78, 0xb82},
  {0xb84, 0xb84}, {0xb8b, 0xb8d}, {0xb91, 0xb91}, {0xb96, 0xb98}, {0xb9b, 0xb9b}, {0xb9d, 0xb9d}, {0xba0, 0xba2}, {0xba5, 0xba7},
  {0xbab, 0xbad}, {0xbba, 0xbcf}, {0xbd1, 0xbe5}, {0xbf3, 0xc04}, {0xc0d, 0xc0d}, {0xc11, 0xc11}, {0xc29, 0xc29}, {0xc3a, 0xc3c},
  {0xc3e, 0xc57}, {0xc5b, 0xc5c}, {0xc5e, 0xc5f}, {0xc62, 0xc65}, {0xc70, 0xc77}, {0xc7f, 0xc7f}, {0xc81, 0xc84}, {0xc8d, 0xc8d},
  {0xc91, 0xc91}, {0xca9, 0xca9}, {0xcb4, 0xcb4}, {0xcba, 0xcbc}, {0xcbe, 0xcdc}, {0xcdf, 0xcdf}, {0xce2, 0xce5}, {0xcf0, 0xcf0},
  {0xcf3, 0xd03}, {0xd0d, 0xd0d}, {0xd11, 0xd11}, {0xd3b, 0xd3c}, {0xd3e, 0xd4d}, {0xd4f, 0xd53}, {0xd57, 0xd57}, {0xd62, 0xd65},
  {0xd79, 0xd79}, {0xd80, 0xd84}, {0xd97, 0xd99}, {0xdb2, 0xdb2}, {0xdbc, 0xdbc}, {0xdbe, 0xdbf}, {0xdc7, 0xde5}, {0xdf0, 0xe00},
  {0xe31, 0xe31}, {0xe34, 0xe3f}, {0xe47, 0xe4f}, {0xe5a, 0xe80}, {0xe83, 0xe83}, {0xe85, 0xe85}, {0xe8b, 0xe8b}, {0xea4, 0xea4},
  {0xea6, 0xea6}, {0xeb1, 0xeb1}, {0xeb4, 0xebc}, {0xebe, 0xebf}, {0xec5, 0xec5}, {0xec7, 0xecf}, {0xeda, 0xedb}, {0xee0, 0xeff},
  {0xf01, 0xf1f}, {0xf34, 0xf3f}, {0xf48, 0xf48}, {0xf6d, 0xf87}, {0xf8d, 0xfff}, {0x102b, 0x103e}, {0x104a, 0x104f}, {0x1056, 0x1059},
  {0x105e, 0x1060}, {0x1062, 0x1064}, {0x1067, 0x106d}, {0x1071, 0x1074}, {0x1082, 0x108d}, {0x108f, 0x108f}, {0x109a, 0x109f}, {0x10c6, 0x10c6},
  {0x10c8, 0x10cc}, {0x10ce, 0x10cf}, {0x10fb, 0x10fb}, {0x1249, 0x1249}, {0x124e, 0x124f}, {0x1257, 0x1257}, {0x1259, 0x1259}, {0x125e, 0x125f},
  {0x1289, 0x1289}, {0x128e, 0x128f}, {0x12b1, 0x12b1}, {0x12b6, 0x12b7}, {0x12bf, 0x12bf}, {0x12c1, 0x12c1}, {0x12c6, 0x12c7}, {0x12d7, 0x12d7},
  {0x1311, 0x1311}, {0x1316, 0x1317}, {0x135b, 0x1368}, {0x137d, 0x137f}, {0x1390, 0x139f}, {0x13f6, 0x13f7}, {0x13fe, 0x1400}, {0x166d, 0x166e},
  {0x169b, 0x169f}, {0x16eb, 0x16ed}, {0x16f9, 0x16ff}, {0x1712, 0x171e}, {0x1732, 0x173f}, {0x1752, 0x175f}, {0x176d, 0x176d}, {0x1771, 0x177f},
  {0x17b4, 0x17d6}, {0x17d8, 0x17db}, {0x17dd, 0x17df}, {0x17ea, 0x17ef}, {0x17fa, 0x180f}, {0x181a, 0x181f}, {0x1879, 0x187f}, {0x1885, 0x1886},
  {0x18a9, 0x18a9}, {0x18ab, 0x18af}, {0x18f6, 0x18ff}, {0x191f, 0x1945}, {0x196e, 0x196f}, {0x1975, 0x197f}, {0x19ac, 0x19af}, {0x19ca, 0x19cf},
  {0x19db, 0x19ff}, {0x1a17, 0x1a1f}, {0x1a55, 0x1a7f}, {0x1a8a, 0x1a8f}, {0x1a9a, 0x1aa6}, {0x1aa8, 0x1b04}, {0x1b34, 0x1b44}, {0x1b4d, 0x1b4f},
  {0x1b5a, 0x1b82}, {0x1ba1, 0x1bad}, {0x1be6, 0x1bff}, {0x1c24, 0x1c3f}, {0x1c4a, 0x1c4c}, {0x1c7e, 0x1c7f}, {0x1c89, 0x1c8f}, {0x1cbb, 0x1cbc},
  {0x1cc0, 0x1ce8}, {0x1ced, 0x1ced}, {0x1cf4, 0x1cf4}, {0x1cf7, 0x1cf9}, {0x1cfb, 0x1cff}, {0x1dc0, 0x1dff}, {0x1f16, 0x1f17}, {0x1f1e, 0x1f1f},
  {0x1f46, 0x1f47}, {0x1f4e, 0x1f4f}, {0x1f58, 0x1f58}, {0x1f5a, 0x1f5a}, {0x1f5c, 0x1f5c}, {0x1f5e, 0x1f5e}, {0x1f7e, 0x1f7f}, {0x1fb5, 0x1fb5},
  {0x1fbd, 0x1fbd}, {0x1fbf, 0x1fc1}, {0x1fc5, 0x1fc5}, {0x1fcd, 0x1fcf}, {0x1fd4, 0x1fd5}, {0x1fdc, 0x1fdf}, {0x1fed, 0x1ff1}, {0x1ff5, 0x1ff5},
  {0x1ffd, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x206f}, {0x2072, 0x2073}, {0x207a, 0x207e}, {0x208a, 0x208f},
  {0x209d, 0x2101}, {0x2103, 0x2106}, {0x2108, 0x2109}, {0x2114, 0x2114}, {0x2116, 0x2118}, {0x211e, 0x2123}, {0x2125, 0x2125}, {0x2127, 0x2127},
  {0x2129, 0x2129}, {0x212e, 0x212e}, {0x213a, 0x213b}, {0x2140, 0x2144}, {0x214a, 0x214d}, {0x214f, 0x214f}, {0x218a, 0x245f}, {0x249c, 0x24e9},
  {0x2500, 0x2775}, {0x2794, 0x2bff}, {0x2ce5, 0x2cea}, {0x2cef, 0x2cf1}, {0x2cf4, 0x2cfc}, {0x2cfe, 0x2cff}, {0x2d26, 0x2d26}, {0x2d28, 0x2d2c},
  {0x2d2e, 0x2d2f}, {0x2d68, 0x2d6e}, {0x2d70, 0x2d7f}, {0x2d97, 0x2d9f}, {0x2da7, 0x2da7}, {0x2daf, 0x2daf}, {0x2db7, 0x2db7}, {0x2dbf, 0x2dbf},
  {0x2dc7, 0x2dc7}, {0x2dcf, 0x2dcf}, {0x2dd7, 0x2dd7}, {0x2ddf, 0x2e2e}, {0x2e30, 0x2fff}, {0x3001, 0x3004}, {0x3008, 0x3020}, {0x302a, 0x3030},
  {0x3036, 0x3037}, {0x303d, 0x3040}, {0x3097, 0x309c}, {0x30a0, 0x30a0}, {0x30fb, 0x30fb}, {0x3100, 0x3104}, {0x3130, 0x3130}, {0x318f, 0x3191},
  {0x3196, 0x319f}, {0x31c0, 0x31ef}, {0x3200, 0x321f}, {0x322a, 0x3247}, {0x3250, 0x3250}, {0x3260, 0x327f}, {0x328a, 0x32b0}, {0x32c0, 0x33ff},
  {0x3401, 0x4dbe}, {0x4dc0, 0x4dff}, {0x4e01, 0x9ffe}, {0xa48d, 0xa4cf}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa62c, 0xa63f}, {0xa66f, 0xa67e},
  {0xa69e, 0xa69f}, {0xa6f0, 0xa716}, {0xa720, 0xa721}, {0xa789, 0xa78a}, {0xa7cb, 0xa7cf}, {0xa7d2, 0xa7d2}, {0xa7d4, 0xa7d4}, {0xa7da, 0xa7f1},
  {0xa802, 0xa802}, {0xa806, 0xa806}, {0xa80b, 0xa80b}, {0xa823, 0xa82f}, {0xa836, 0xa83f}, {0xa874, 0xa881}, {0xa8b4, 0xa8cf}, {0xa8da, 0xa8f1},
  {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa8ff, 0xa8ff}, {0xa926, 0xa92f}, {0xa947, 0xa95f}, {0xa97d, 0xa983}, {0xa9b3, 0xa9ce}, {0xa9da, 0xa9df},
  {0xa9e5, 0xa9e5}, {0xa9ff, 0xa9ff}, {0xaa29, 0xaa3f}, {0xaa43, 0xaa43}, {0xaa4c, 0xaa4f}, {0xaa5a, 0xaa5f}, {0xaa77, 0xaa79}, {0xaa7b, 0xaa7d},
  {0xaab0, 0xaab0}, {0xaab2, 0xaab4}, {0xaab7, 0xaab8}, {0xaabe, 0xaabf}, {0xaac1, 0xaac1}, {0xaac3, 0xaada}, {0xaade, 0xaadf}, {0xaaeb, 0xaaf1},
  {0xaaf5, 0xab00}, {0xab07, 0xab08}, {0xab0f, 0xab10}, {0xab17, 0xab1f}, {0xab27, 0xab27}, {0xab2f, 0xab2f}, {0xab5b, 0xab5b}, {0xab6a, 0xab6f},
  {0xabe3, 0xabef}, {0xabfa, 0xabff}, {0xac01, 0xd7a2}, {0xd7a4, 0xd7af}, {0xd7c7, 0xd7ca}, {0xd7fc, 0xf8ff}, {0xfa6e, 0xfa6f}, {0xfada, 0xfaff},
  {0xfb07, 0xfb12}, {0xfb18, 0xfb1c}, {0xfb1e, 0xfb1e}, {0xfb29, 0xfb29}, {0xfb37, 0xfb37}, {0xfb3d, 0xfb3d}, {0xfb3f, 0xfb3f}, {0xfb42, 0xfb42},
  {0xfb45, 0xfb45}, {0xfbb2, 0xfbd2}, {0xfd3e, 0xfd4f}, {0xfd90, 0xfd91}, {0xfdc8, 0xfdef}, {0xfdfc, 0xfe6f}, {0xfe75, 0xfe75}, {0xfefd, 0xff0f},
  {0xff1a, 0xff20}, {0xff3b, 0xff40}, {0xff5b, 0xff65}, {0xffbf, 0xffc1}, {0xffc8, 0xffc9}, {0xffd0, 0xffd1}, {0xffd8, 0xffd9}, {0xffdd, 0xffff},
  {0x1000c, 0x1000c}, {0x10027, 0x10027}, {0x1003b, 0x1003b}, {0x1003e, 0x1003e}, {0x1004e, 0x1004f}, {0x1005e, 0x1007f}, {0x100fb, 0x10106}, {0x10134, 0x1013f},
  {0x10179, 0x10189}, {0x1018c, 0x1027f}, {0x1029d, 0x1029f}, {0x102d1, 0x102e0}, {0x102fc, 0x102ff}, {0x10324, 0x1032c}, {0x1034b, 0x1034f}, {0x10376, 0x1037f},
  {0x1039e, 0x1039f}, {0x103c4, 0x103c7}, {0x103d0, 0x103d0}, {0x103d6, 0x103ff}, {0x1049e, 0x1049f}, {0x104aa, 0x104af}, {0x104d4, 0x104d7}, {0x104fc, 0x104ff},
  {0x10528, 0x1052f}, {0x10564, 0x1056f}, {0x1057b, 0x1057b}, {0x1058b, 0x1058b}, {0x10593, 0x10593}, {0x10596, 0x10596}, {0x105a2, 0x105a2}, {0x105b2, 0x105b2},
  {0x105ba, 0x105ba}, {0x105bd, 0x105ff}, {0x10737, 0x1073f}, {0x10756, 0x1075f}, {0x10768, 0x1077f}, {0x10786, 0x10786}, {0x107b1, 0x107b1}, {0x107bb, 0x107ff},
  {0x10806, 0x10807}, {0x10809, 0x10809}, {0x10836, 0x10836}, {0x10839, 0x1083b}, {0x1083d, 0x1083e}, {0x10856, 0x10857}, {0x10877, 0x10878}, {0x1089f, 0x108a6},
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 964,
        '\n', 964,
        '\r', 965,
        '#', 814,
        '-', 919,
        '/', 920,
        ':', 927,
        '<', 958,
        '=', 824,
        '>', 935,
        '@', 818,
        'C', 889,
        'D', 879,
        'G', 880,
        'H', 885,
        'L', 887,
        'O', 891,
        'P', 877,
        'T', 893,
        'W', 881,
        '[', 922,
        '\\', 924,
        '_', 923,
        '{', 918,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(826);
      if (lookahead == '\n') ADVANCE(826);
      if (lookahead == '\r') ADVANCE(828);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(921);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(826);
      if (lookahead == '\n') ADVANCE(826);
      if (lookahead == '\r') ADVANCE(828);
      if (lookahead == '{') ADVANCE(921);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(826);
      if (lookahead == '\n') ADVANCE(826);
      if (lookahead == '\r') ADVANCE(828);
      if (lookahead == '{') ADVANCE(921);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '#') ADVANCE(829);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'D') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'H') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'K') ADVANCE(15);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'L') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'S') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'T') ADVANCE(832);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'y') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(968);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(968);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(950);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '#') ADVANCE(829);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'B') ADVANCE(86);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'D') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'H') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'K') ADVANCE(68);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'L') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'P') ADVANCE(72);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'Q') ADVANCE(75);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'S') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'T') ADVANCE(833);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'y') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(837);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(105);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(963);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(105);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(963);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '#') ADVANCE(829);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '#') ADVANCE(813);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '/') ADVANCE(813);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'B') ADVANCE(139);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'C') ADVANCE(141);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'D') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'H') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'H') ADVANCE(137);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'K') ADVANCE(121);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'L') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'Q') ADVANCE(128);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'S') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'T') ADVANCE(834);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 152:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 153:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 154:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 155:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 156:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(158);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 157:
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 158:
      if ((!eof && lookahead == 00)) ADVANCE(972);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(972);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 159:
      if ((!eof && lookahead == 00)) ADVANCE(972);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(972);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 160:
      if ((!eof && lookahead == 00)) ADVANCE(916);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(934);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(921);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(896);
      END_STATE();
    case 161:
      if ((!eof && lookahead == 00)) ADVANCE(817);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 162:
      if ((!eof && lookahead == 00)) ADVANCE(817);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '@') ADVANCE(818);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 163:
      if ((!eof && lookahead == 00)) ADVANCE(817);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '}') ADVANCE(937);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 164:
      if ((!eof && lookahead == 00)) ADVANCE(817);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      if ((!eof && lookahead == 00)) ADVANCE(953);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == '\r') ADVANCE(1014);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(1013);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1011);
      END_STATE();
    case 167:
      ADVANCE_MAP(
        '\r', 828,
        ':', 927,
        '=', 824,
        'A', 367,
        'B', 319,
        'C', 604,
        'E', 785,
        'F', 320,
        'G', 321,
        'H', 312,
        'I', 223,
        'L', 417,
        'M', 411,
        'N', 418,
        'O', 263,
        'P', 322,
        'R', 330,
        'S', 408,
        'T', 412,
        'U', 288,
        'V', 326,
        '}', 798,
        0, 826,
        '\n', 826,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(800);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      END_STATE();
    case 168:
      if (lookahead == '\r') ADVANCE(934);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(934);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(823);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1011);
      END_STATE();
    case 169:
      if (lookahead == '\r') ADVANCE(973);
      if (lookahead == '@') ADVANCE(818);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(973);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == '\r') ADVANCE(973);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(170);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(745);
      END_STATE();
    case 210:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 211:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 212:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 214:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 216:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 217:
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 218:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 219:
      if (lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 220:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 221:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 222:
      if (lookahead == '#') ADVANCE(829);
      END_STATE();
    case 223:
      if (lookahead == '\'') ADVANCE(563);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == 'p') ADVANCE(558);
      END_STATE();
    case 226:
      if (lookahead == '/') ADVANCE(801);
      END_STATE();
    case 227:
      if (lookahead == 'A') ADVANCE(281);
      END_STATE();
    case 228:
      if (lookahead == 'A') ADVANCE(242);
      END_STATE();
    case 229:
      if (lookahead == 'A') ADVANCE(239);
      END_STATE();
    case 230:
      if (lookahead == 'A') ADVANCE(772);
      END_STATE();
    case 231:
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(787);
      if (lookahead == 'F') ADVANCE(607);
      if (lookahead == 'I') ADVANCE(565);
      if (lookahead == 'M') ADVANCE(631);
      END_STATE();
    case 232:
      if (lookahead == 'A') ADVANCE(770);
      END_STATE();
    case 233:
      if (lookahead == 'A') ADVANCE(546);
      END_STATE();
    case 234:
      if (lookahead == 'A') ADVANCE(549);
      END_STATE();
    case 235:
      if (lookahead == 'B') ADVANCE(297);
      END_STATE();
    case 236:
      if (lookahead == 'C') ADVANCE(303);
      END_STATE();
    case 237:
      if (lookahead == 'C') ADVANCE(264);
      END_STATE();
    case 238:
      if (lookahead == 'C') ADVANCE(257);
      END_STATE();
    case 239:
      if (lookahead == 'C') ADVANCE(246);
      END_STATE();
    case 240:
      if (lookahead == 'C') ADVANCE(611);
      END_STATE();
    case 241:
      if (lookahead == 'C') ADVANCE(496);
      END_STATE();
    case 242:
      if (lookahead == 'D') ADVANCE(831);
      END_STATE();
    case 243:
      if (lookahead == 'D') ADVANCE(467);
      END_STATE();
    case 244:
      if (lookahead == 'D') ADVANCE(455);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 246:
      if (lookahead == 'E') ADVANCE(831);
      END_STATE();
    case 247:
      if (lookahead == 'E') ADVANCE(236);
      END_STATE();
    case 248:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 249:
      if (lookahead == 'E') ADVANCE(682);
      END_STATE();
    case 250:
      if (lookahead == 'E') ADVANCE(585);
      END_STATE();
    case 251:
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead == 'M') ADVANCE(336);
      END_STATE();
    case 252:
      if (lookahead == 'F') ADVANCE(517);
      END_STATE();
    case 253:
      if (lookahead == 'F') ADVANCE(357);
      END_STATE();
    case 254:
      if (lookahead == 'F') ADVANCE(357);
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 255:
      if (lookahead == 'F') ADVANCE(637);
      END_STATE();
    case 256:
      if (lookahead == 'G') ADVANCE(358);
      if (lookahead == 'R') ADVANCE(409);
      END_STATE();
    case 257:
      if (lookahead == 'H') ADVANCE(831);
      END_STATE();
    case 258:
      if (lookahead == 'H') ADVANCE(287);
      END_STATE();
    case 259:
      if (lookahead == 'H') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 260:
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 261:
      if (lookahead == 'I') ADVANCE(205);
      END_STATE();
    case 262:
      if (lookahead == 'I') ADVANCE(575);
      END_STATE();
    case 263:
      if (lookahead == 'K') ADVANCE(926);
      END_STATE();
    case 264:
      if (lookahead == 'K') ADVANCE(245);
      END_STATE();
    case 265:
      if (lookahead == 'L') ADVANCE(248);
      END_STATE();
    case 266:
      if (lookahead == 'L') ADVANCE(831);
      END_STATE();
    case 267:
      if (lookahead == 'L') ADVANCE(430);
      END_STATE();
    case 268:
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 269:
      if (lookahead == 'L') ADVANCE(620);
      END_STATE();
    case 270:
      if (lookahead == 'M') ADVANCE(466);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(640);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(427);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(641);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(642);
      END_STATE();
    case 278:
      if (lookahead == 'O') ADVANCE(273);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(237);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(719);
      END_STATE();
    case 281:
      if (lookahead == 'P') ADVANCE(258);
      END_STATE();
    case 282:
      if (lookahead == 'P') ADVANCE(226);
      END_STATE();
    case 283:
      if (lookahead == 'P') ADVANCE(175);
      END_STATE();
    case 284:
      if (lookahead == 'P') ADVANCE(478);
      END_STATE();
    case 285:
      if (lookahead == 'P') ADVANCE(677);
      END_STATE();
    case 286:
      if (lookahead == 'P') ADVANCE(679);
      END_STATE();
    case 287:
      if (lookahead == 'Q') ADVANCE(266);
      END_STATE();
    case 288:
      if (lookahead == 'R') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 289:
      if (lookahead == 'R') ADVANCE(409);
      END_STATE();
    case 290:
      if (lookahead == 'R') ADVANCE(477);
      END_STATE();
    case 291:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 292:
      if (lookahead == 'R') ADVANCE(445);
      END_STATE();
    case 293:
      if (lookahead == 'R') ADVANCE(473);
      END_STATE();
    case 294:
      if (lookahead == 'R') ADVANCE(476);
      END_STATE();
    case 295:
      if (lookahead == 'S') ADVANCE(303);
      END_STATE();
    case 296:
      if (lookahead == 'S') ADVANCE(831);
      END_STATE();
    case 297:
      if (lookahead == 'S') ADVANCE(279);
      END_STATE();
    case 298:
      if (lookahead == 'S') ADVANCE(754);
      END_STATE();
    case 299:
      if (lookahead == 'S') ADVANCE(440);
      END_STATE();
    case 300:
      if (lookahead == 'S') ADVANCE(728);
      END_STATE();
    case 301:
      if (lookahead == 'S') ADVANCE(353);
      END_STATE();
    case 302:
      if (lookahead == 'S') ADVANCE(775);
      END_STATE();
    case 303:
      if (lookahead == 'T') ADVANCE(831);
      END_STATE();
    case 304:
      if (lookahead == 'T') ADVANCE(260);
      END_STATE();
    case 305:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 306:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 307:
      if (lookahead == 'T') ADVANCE(246);
      END_STATE();
    case 308:
      if (lookahead == 'T') ADVANCE(283);
      END_STATE();
    case 309:
      if (lookahead == 'T') ADVANCE(792);
      END_STATE();
    case 310:
      if (lookahead == 'T') ADVANCE(629);
      END_STATE();
    case 311:
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 312:
      if (lookahead == 'T') ADVANCE(308);
      END_STATE();
    case 313:
      if (lookahead == 'T') ADVANCE(636);
      END_STATE();
    case 314:
      if (lookahead == 'U') ADVANCE(702);
      END_STATE();
    case 315:
      if (lookahead == 'U') ADVANCE(582);
      END_STATE();
    case 316:
      if (lookahead == 'V') ADVANCE(433);
      END_STATE();
    case 317:
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(921);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(896);
      END_STATE();
    case 318:
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '{') ADVANCE(917);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(896);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 363:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 364:
      if (lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 365:
      if (lookahead == 'b') ADVANCE(559);
      END_STATE();
    case 366:
      if (lookahead == 'b') ADVANCE(560);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(669);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(788);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(725);
      END_STATE();
    case 373:
      if (lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 374:
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(789);
      END_STATE();
    case 375:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 376:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 377:
      if (lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 378:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 379:
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 380:
      if (lookahead == 'c') ADVANCE(426);
      END_STATE();
    case 381:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 384:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 385:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(791);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'w') ADVANCE(507);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 479:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 480:
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 481:
      if (lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 482:
      if (lookahead == 'f') ADVANCE(513);
      END_STATE();
    case 483:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 484:
      if (lookahead == 'f') ADVANCE(514);
      END_STATE();
    case 485:
      if (lookahead == 'g') ADVANCE(926);
      END_STATE();
    case 486:
      if (lookahead == 'g') ADVANCE(690);
      END_STATE();
    case 487:
      if (lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 488:
      if (lookahead == 'g') ADVANCE(716);
      END_STATE();
    case 489:
      if (lookahead == 'g') ADVANCE(639);
      END_STATE();
    case 490:
      if (lookahead == 'g') ADVANCE(439);
      END_STATE();
    case 491:
      if (lookahead == 'g') ADVANCE(351);
      END_STATE();
    case 492:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 493:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 494:
      if (lookahead == 'h') ADVANCE(638);
      END_STATE();
    case 495:
      if (lookahead == 'h') ADVANCE(632);
      END_STATE();
    case 496:
      if (lookahead == 'h') ADVANCE(645);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 498:
      if (lookahead == 'h') ADVANCE(436);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 500:
      if (lookahead == 'h') ADVANCE(618);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 539:
      if (lookahead == 'k') ADVANCE(416);
      END_STATE();
    case 540:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 550:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 551:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 552:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 554:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 562:
      if (lookahead == 'm') ADVANCE(653);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 564:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 565:
      if (lookahead == 'm') ADVANCE(652);
      END_STATE();
    case 566:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 567:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 568:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 569:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(726);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(610);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(729);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(654);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(658);
      END_STATE();
    case 660:
      if (lookahead == 'q') ADVANCE(768);
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 661:
      if (lookahead == 'q') ADVANCE(774);
      END_STATE();
    case 662:
      if (lookahead == 'q') ADVANCE(771);
      END_STATE();
    case 663:
      if (lookahead == 'q') ADVANCE(773);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(747);
      if (lookahead == 'y') ADVANCE(543);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(926);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(762);
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(724);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(781);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 764:
      if (lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 765:
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 766:
      if (lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 767:
      if (lookahead == 'u') ADVANCE(713);
      END_STATE();
    case 768:
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 769:
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 776:
      if (lookahead == 'v') ADVANCE(518);
      END_STATE();
    case 777:
      if (lookahead == 'v') ADVANCE(454);
      END_STATE();
    case 778:
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 779:
      if (lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 780:
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 781:
      if (lookahead == 'w') ADVANCE(609);
      END_STATE();
    case 782:
      if (lookahead == 'w') ADVANCE(349);
      END_STATE();
    case 783:
      if (lookahead == 'w') ADVANCE(416);
      END_STATE();
    case 784:
      if (lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 785:
      if (lookahead == 'x') ADVANCE(647);
      END_STATE();
    case 786:
      if (lookahead == 'x') ADVANCE(788);
      END_STATE();
    case 787:
      if (lookahead == 'x') ADVANCE(740);
      END_STATE();
    case 788:
      if (lookahead == 'y') ADVANCE(926);
      END_STATE();
    case 789:
      if (lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 790:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 791:
      if (lookahead == 'y') ADVANCE(210);
      END_STATE();
    case 792:
      if (lookahead == 'y') ADVANCE(648);
      END_STATE();
    case 793:
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 794:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 795:
      if (lookahead == 'z') ADVANCE(416);
      END_STATE();
    case 796:
      if (lookahead == '{') ADVANCE(921);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 797:
      if (lookahead == '{') ADVANCE(921);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 798:
      if (lookahead == '}') ADVANCE(932);
      END_STATE();
    case 799:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 800:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      END_STATE();
    case 801:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      END_STATE();
    case 802:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 964,
        '\n', 964,
        '\r', 965,
        '#', 811,
        '-', 906,
        '/', 907,
        '<', 956,
        '>', 935,
        '@', 942,
        'C', 859,
        'D', 855,
        'G', 857,
        'H', 856,
        'L', 858,
        'O', 860,
        'P', 853,
        'T', 861,
        'W', 854,
        '[', 905,
        'm', 863,
        'q', 862,
        '{', 904,
        0x2028, 104,
        0x2029, 104,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(820);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(864);
      if (lookahead != 0) ADVANCE(908);
      END_STATE();
    case 803:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 896,
        '\n', 1013,
        '\r', 1014,
        '#', 814,
        '/', 920,
        '<', 933,
        '@', 940,
        'C', 889,
        'D', 879,
        'G', 880,
        'H', 885,
        'L', 887,
        'O', 891,
        'P', 877,
        'T', 893,
        'W', 881,
        '{', 921,
        '-', 923,
        '_', 923,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 804:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 896,
        '\n', 1013,
        '\r', 1014,
        '#', 814,
        '/', 920,
        '<', 933,
        '@', 940,
        'C', 890,
        'D', 882,
        'G', 883,
        'H', 886,
        'L', 888,
        'O', 892,
        'P', 878,
        'T', 894,
        'W', 884,
        '{', 921,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(896);
      END_STATE();
    case 805:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 827,
        '\n', 826,
        '\r', 827,
        '#', 810,
        '-', 899,
        '/', 900,
        '<', 956,
        '>', 935,
        '@', 941,
        'C', 847,
        'D', 842,
        'G', 843,
        'H', 845,
        'L', 846,
        'O', 848,
        'P', 841,
        'T', 849,
        'W', 844,
        '[', 903,
        'm', 850,
        'q', 851,
        '{', 902,
        0x2028, 52,
        0x2029, 52,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(819);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(852);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 806:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 827,
        '\n', 826,
        '\r', 827,
        '#', 810,
        '-', 899,
        '/', 900,
        '<', 956,
        '>', 935,
        '@', 941,
        'C', 847,
        'D', 842,
        'G', 843,
        'H', 845,
        'L', 846,
        'O', 848,
        'P', 841,
        'T', 849,
        'W', 844,
        '[', 898,
        'm', 850,
        'q', 851,
        '{', 897,
        0x2028, 52,
        0x2029, 52,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(819);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(852);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 807:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 970,
        '\n', 969,
        '\r', 970,
        '#', 812,
        '-', 911,
        '/', 912,
        '<', 957,
        '>', 935,
        '@', 943,
        'C', 871,
        'D', 867,
        'G', 869,
        'H', 868,
        'L', 870,
        'O', 872,
        'P', 865,
        'T', 873,
        'W', 866,
        '[', 910,
        'm', 875,
        'q', 874,
        '{', 909,
        0x2028, 157,
        0x2029, 157,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(821);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(876);
      if (lookahead != 0) ADVANCE(913);
      END_STATE();
    case 808:
      if (eof) ADVANCE(809);
      ADVANCE_MAP(
        0, 970,
        '\n', 969,
        '\r', 970,
        '#', 812,
        '-', 911,
        '/', 912,
        '<', 957,
        '>', 935,
        '@', 943,
        'C', 871,
        'D', 867,
        'G', 869,
        'H', 868,
        'L', 870,
        'O', 872,
        'P', 865,
        'T', 873,
        'W', 866,
        '[', 915,
        'm', 875,
        'q', 874,
        '{', 914,
        0x2028, 157,
        0x2029, 157,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(821);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(876);
      if (lookahead != 0) ADVANCE(913);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(815);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(813);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(815);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '#') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(813);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(815);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '#') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(813);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(815);
      if (lookahead == '\r') ADVANCE(813);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '#') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__plain_comment_token2);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__plain_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(817);
      if (lookahead == '\n') ADVANCE(816);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(819);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(820);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(821);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(823);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1011);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__var_comment_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__var_comment_token3);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__var_comment_token3);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__var_comment_token3);
      if (lookahead == '\n') ADVANCE(826);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(829);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(837);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(6);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'P') ADVANCE(89);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'U') ADVANCE(141);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(1007);
      if (lookahead == 'O') ADVANCE(1002);
      if (lookahead == 'U') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'O') ADVANCE(295);
      if (lookahead == 'U') ADVANCE(303);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(1005);
      if (lookahead == 'R') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'R') ADVANCE(227);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(235);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(976);
      if (lookahead == 'T') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(306);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(295);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(304);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(229);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(955);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '{') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(954);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(955);
      if (lookahead == '\r') ADVANCE(954);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(954);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '/') ADVANCE(813);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(929);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(947);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(947);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(947);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(930);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(947);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(947);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(947);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead == '/') ADVANCE(813);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(955);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '{') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(954);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(955);
      if (lookahead == '\r') ADVANCE(954);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(954);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead == '/') ADVANCE(813);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(971);
      if (lookahead == '{') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(946);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(971);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(946);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '\r') ADVANCE(934);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(934);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(936);
      if (lookahead == '{') ADVANCE(928);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(936);
      if (lookahead == '{') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(955);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '/') ADVANCE(815);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '{') ADVANCE(928);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(955);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1012);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(934);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(939);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      if (lookahead == '!') ADVANCE(938);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(971);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(946);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(947);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(947);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(948);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(968);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(968);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead == '\n') ADVANCE(949);
      if (lookahead == '\r') ADVANCE(963);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead == '\r') ADVANCE(963);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(955);
      if (lookahead == '\r') ADVANCE(954);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(954);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(955);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(944);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(944);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(157);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(944);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(962);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(962);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead == '\n') ADVANCE(961);
      if (lookahead == '\r') ADVANCE(963);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      if (lookahead == '\n') ADVANCE(964);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(967);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(968);
      if (lookahead == '\n') ADVANCE(966);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(970);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(970);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(971);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(946);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(972);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(972);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(973);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(170);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1010);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1011);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(1013);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 804},
  [2] = {.lex_state = 805},
  [3] = {.lex_state = 805},
  [4] = {.lex_state = 805},
  [5] = {.lex_state = 805},
  [6] = {.lex_state = 805},
  [7] = {.lex_state = 805},
  [8] = {.lex_state = 805},
  [9] = {.lex_state = 805},
  [10] = {.lex_state = 805},
  [11] = {.lex_state = 805},
  [12] = {.lex_state = 805},
  [13] = {.lex_state = 805},
  [14] = {.lex_state = 805},
  [15] = {.lex_state = 805},
  [16] = {.lex_state = 805},
  [17] = {.lex_state = 805},
  [18] = {.lex_state = 805},
  [19] = {.lex_state = 805},
  [20] = {.lex_state = 805},
  [21] = {.lex_state = 805},
  [22] = {.lex_state = 805},
  [23] = {.lex_state = 805},
  [24] = {.lex_state = 805},
  [25] = {.lex_state = 805},
  [26] = {.lex_state = 805},
  [27] = {.lex_state = 802},
  [28] = {.lex_state = 802},
  [29] = {.lex_state = 802},
  [30] = {.lex_state = 804},
  [31] = {.lex_state = 804},
  [32] = {.lex_state = 804},
  [33] = {.lex_state = 804},
  [34] = {.lex_state = 807},
  [35] = {.lex_state = 807},
  [36] = {.lex_state = 808},
  [37] = {.lex_state = 806},
  [38] = {.lex_state = 805},
  [39] = {.lex_state = 808},
  [40] = {.lex_state = 802},
  [41] = {.lex_state = 802},
  [42] = {.lex_state = 808},
  [43] = {.lex_state = 802},
  [44] = {.lex_state = 802},
  [45] = {.lex_state = 808},
  [46] = {.lex_state = 802},
  [47] = {.lex_state = 802},
  [48] = {.lex_state = 802},
  [49] = {.lex_state = 806},
  [50] = {.lex_state = 806},
  [51] = {.lex_state = 806},
  [52] = {.lex_state = 805},
  [53] = {.lex_state = 805},
  [54] = {.lex_state = 805},
  [55] = {.lex_state = 805},
  [56] = {.lex_state = 805},
  [57] = {.lex_state = 805},
  [58] = {.lex_state = 805},
  [59] = {.lex_state = 805},
  [60] = {.lex_state = 805},
  [61] = {.lex_state = 805},
  [62] = {.lex_state = 805},
  [63] = {.lex_state = 805},
  [64] = {.lex_state = 805},
  [65] = {.lex_state = 805},
  [66] = {.lex_state = 805},
  [67] = {.lex_state = 805},
  [68] = {.lex_state = 805},
  [69] = {.lex_state = 803},
  [70] = {.lex_state = 803},
  [71] = {.lex_state = 803},
  [72] = {.lex_state = 803},
  [73] = {.lex_state = 803},
  [74] = {.lex_state = 803},
  [75] = {.lex_state = 803},
  [76] = {.lex_state = 803},
  [77] = {.lex_state = 803},
  [78] = {.lex_state = 803},
  [79] = {.lex_state = 803},
  [80] = {.lex_state = 803},
  [81] = {.lex_state = 803},
  [82] = {.lex_state = 803},
  [83] = {.lex_state = 803},
  [84] = {.lex_state = 803},
  [85] = {.lex_state = 803},
  [86] = {.lex_state = 803},
  [87] = {.lex_state = 803},
  [88] = {.lex_state = 803},
  [89] = {.lex_state = 803},
  [90] = {.lex_state = 803},
  [91] = {.lex_state = 803},
  [92] = {.lex_state = 803},
  [93] = {.lex_state = 803},
  [94] = {.lex_state = 803},
  [95] = {.lex_state = 803},
  [96] = {.lex_state = 803},
  [97] = {.lex_state = 804},
  [98] = {.lex_state = 804},
  [99] = {.lex_state = 804},
  [100] = {.lex_state = 804},
  [101] = {.lex_state = 804},
  [102] = {.lex_state = 804},
  [103] = {.lex_state = 804},
  [104] = {.lex_state = 804},
  [105] = {.lex_state = 804},
  [106] = {.lex_state = 804},
  [107] = {.lex_state = 804},
  [108] = {.lex_state = 804},
  [109] = {.lex_state = 804},
  [110] = {.lex_state = 804},
  [111] = {.lex_state = 804},
  [112] = {.lex_state = 804},
  [113] = {.lex_state = 804},
  [114] = {.lex_state = 804},
  [115] = {.lex_state = 804},
  [116] = {.lex_state = 804},
  [117] = {.lex_state = 318},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 796},
  [126] = {.lex_state = 796},
  [127] = {.lex_state = 796},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 796},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 796},
  [133] = {.lex_state = 796},
  [134] = {.lex_state = 797},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 797},
  [137] = {.lex_state = 160},
  [138] = {.lex_state = 797},
  [139] = {.lex_state = 317},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 317},
  [143] = {.lex_state = 797},
  [144] = {.lex_state = 797},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 317},
  [147] = {.lex_state = 160},
  [148] = {.lex_state = 317},
  [149] = {.lex_state = 797},
  [150] = {.lex_state = 797},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 797},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 160},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 160},
  [162] = {.lex_state = 160},
  [163] = {.lex_state = 160},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 167},
  [166] = {.lex_state = 108},
  [167] = {.lex_state = 161},
  [168] = {.lex_state = 161},
  [169] = {.lex_state = 108},
  [170] = {.lex_state = 161},
  [171] = {.lex_state = 108},
  [172] = {.lex_state = 167},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 108},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 168},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 167},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 162},
  [186] = {.lex_state = 167},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 167},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 167},
  [192] = {.lex_state = 169},
  [193] = {.lex_state = 167},
  [194] = {.lex_state = 168},
  [195] = {.lex_state = 162},
  [196] = {.lex_state = 167},
  [197] = {.lex_state = 167},
  [198] = {.lex_state = 162},
  [199] = {.lex_state = 167},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 167},
  [202] = {.lex_state = 168},
  [203] = {.lex_state = 804},
  [204] = {.lex_state = 168},
  [205] = {.lex_state = 804},
  [206] = {.lex_state = 166},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 167},
  [211] = {.lex_state = 804},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 168},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 169},
  [217] = {.lex_state = 166},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 167},
  [220] = {.lex_state = 804},
  [221] = {.lex_state = 168},
  [222] = {.lex_state = 167},
  [223] = {.lex_state = 166},
  [224] = {.lex_state = 804},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 804},
  [227] = {.lex_state = 804},
  [228] = {.lex_state = 168},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 167},
  [232] = {.lex_state = 167},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 169},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 168},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 168},
  [240] = {.lex_state = 167},
  [241] = {.lex_state = 167},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 166},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 804},
  [248] = {.lex_state = 166},
  [249] = {.lex_state = 166},
  [250] = {.lex_state = 167},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 166},
  [254] = {.lex_state = 166},
  [255] = {.lex_state = 104},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 166},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 167},
  [260] = {.lex_state = 804},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__plain_comment_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__var_comment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__var_comment_token2] = ACTIONS(1),
    [aux_sym__var_comment_token3] = ACTIONS(1),
    [aux_sym_request_separator_token1] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [aux_sym__target_url_line_token1] = ACTIONS(1),
    [aux_sym__target_url_line_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [aux_sym_res_redirect_token1] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_graphql_json_body_token1] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_multipart_form_data_token2] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(208),
    [sym_comment] = STATE(33),
    [sym__plain_comment] = STATE(99),
    [sym__var_comment] = STATE(103),
    [sym_request_separator] = STATE(32),
    [sym_section] = STATE(31),
    [sym__section_content] = STATE(110),
    [sym_http_version] = STATE(227),
    [aux_sym__target_url_line] = STATE(123),
    [sym_target_url] = STATE(179),
    [sym_response] = STATE(98),
    [sym_request] = STATE(102),
    [sym_variable] = STATE(123),
    [sym_pre_request_script] = STATE(33),
    [sym_variable_declaration] = STATE(33),
    [sym__blank_line] = STATE(33),
    [aux_sym_document_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__plain_comment_token1] = ACTIONS(5),
    [aux_sym__var_comment_token1] = ACTIONS(7),
    [aux_sym_request_separator_token1] = ACTIONS(9),
    [sym_method] = ACTIONS(11),
    [aux_sym_http_version_token1] = ACTIONS(13),
    [aux_sym__target_url_line_token1] = ACTIONS(15),
    [aux_sym__target_url_line_token2] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_AT2] = ACTIONS(21),
    [aux_sym__blank_line_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(31), 1,
      aux_sym__var_comment_token3,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(16), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(33), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [76] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(55), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(15), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(57), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [152] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(61), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(23), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(63), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [228] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(67), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(26), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(69), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [304] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(73), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(19), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(75), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [380] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(79), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(17), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(81), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [456] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(85), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(18), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(87), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [532] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(91), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(22), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(93), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [608] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(97), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(21), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(99), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [684] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(103), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(14), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(105), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [760] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(109), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(25), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(111), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [836] = 20,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(29), 1,
      aux_sym__var_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(115), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(24), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(117), 7,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [912] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(121), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [980] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(127), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1048] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(131), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1116] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(135), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1184] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(139), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1252] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(143), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1320] = 17,
    ACTIONS(147), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(152), 1,
      aux_sym__var_comment_token3,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(161), 1,
      aux_sym_xml_body_token1,
    ACTIONS(164), 1,
      aux_sym_json_body_token1,
    ACTIONS(167), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(170), 1,
      anon_sym_LT2,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      aux_sym_raw_body_token1,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(150), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1388] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(181), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1456] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(185), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1524] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(189), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1592] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(193), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1660] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(197), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1728] = 17,
    ACTIONS(27), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(123), 1,
      aux_sym__var_comment_token3,
    STATE(37), 1,
      sym_graphql_data,
    STATE(65), 1,
      sym__var_comment,
    STATE(256), 1,
      sym_external_body,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(20), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(61), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(201), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1796] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(205), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(211), 1,
      aux_sym_multipart_form_data_token1,
    STATE(41), 1,
      sym__plain_comment,
    STATE(43), 1,
      sym__var_comment,
    STATE(190), 1,
      sym_external_body,
    STATE(29), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(209), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(207), 12,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [1845] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(205), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(219), 1,
      aux_sym_multipart_form_data_token1,
    STATE(41), 1,
      sym__plain_comment,
    STATE(43), 1,
      sym__var_comment,
    STATE(190), 1,
      sym_external_body,
    STATE(27), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(217), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(215), 12,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [1894] = 10,
    ACTIONS(223), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(231), 1,
      anon_sym_LT2,
    ACTIONS(234), 1,
      aux_sym_multipart_form_data_token1,
    STATE(41), 1,
      sym__plain_comment,
    STATE(43), 1,
      sym__var_comment,
    STATE(190), 1,
      sym_external_body,
    STATE(29), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(228), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(226), 12,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [1943] = 22,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(242), 1,
      aux_sym__var_comment_token1,
    ACTIONS(245), 1,
      aux_sym_request_separator_token1,
    ACTIONS(248), 1,
      sym_method,
    ACTIONS(251), 1,
      aux_sym_http_version_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_AT2,
    ACTIONS(266), 1,
      aux_sym__blank_line_token1,
    STATE(32), 1,
      sym_request_separator,
    STATE(98), 1,
      sym_response,
    STATE(99), 1,
      sym__plain_comment,
    STATE(102), 1,
      sym_request,
    STATE(103), 1,
      sym__var_comment,
    STATE(110), 1,
      sym__section_content,
    STATE(179), 1,
      sym_target_url,
    STATE(227), 1,
      sym_http_version,
    ACTIONS(254), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(30), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(123), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(33), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [2016] = 22,
    ACTIONS(5), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(7), 1,
      aux_sym__var_comment_token1,
    ACTIONS(9), 1,
      aux_sym_request_separator_token1,
    ACTIONS(11), 1,
      sym_method,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_request_separator,
    STATE(98), 1,
      sym_response,
    STATE(99), 1,
      sym__plain_comment,
    STATE(102), 1,
      sym_request,
    STATE(103), 1,
      sym__var_comment,
    STATE(110), 1,
      sym__section_content,
    STATE(179), 1,
      sym_target_url,
    STATE(227), 1,
      sym_http_version,
    ACTIONS(15), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(30), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(123), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(33), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [2089] = 19,
    ACTIONS(5), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(7), 1,
      aux_sym__var_comment_token1,
    ACTIONS(11), 1,
      sym_method,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    STATE(97), 1,
      sym__section_content,
    STATE(98), 1,
      sym_response,
    STATE(99), 1,
      sym__plain_comment,
    STATE(102), 1,
      sym_request,
    STATE(103), 1,
      sym__var_comment,
    STATE(179), 1,
      sym_target_url,
    STATE(227), 1,
      sym_http_version,
    ACTIONS(15), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(123), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(33), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [2153] = 19,
    ACTIONS(275), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(278), 1,
      aux_sym__var_comment_token1,
    ACTIONS(281), 1,
      sym_method,
    ACTIONS(284), 1,
      aux_sym_http_version_token1,
    ACTIONS(290), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_AT2,
    ACTIONS(299), 1,
      aux_sym__blank_line_token1,
    STATE(98), 1,
      sym_response,
    STATE(99), 1,
      sym__plain_comment,
    STATE(102), 1,
      sym_request,
    STATE(103), 1,
      sym__var_comment,
    STATE(108), 1,
      sym__section_content,
    STATE(179), 1,
      sym_target_url,
    STATE(227), 1,
      sym_http_version,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(287), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(123), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(33), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [2217] = 5,
    ACTIONS(304), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(309), 1,
      aux_sym__raw_body_token1,
    STATE(49), 1,
      sym__raw_body,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(307), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2252] = 5,
    ACTIONS(309), 1,
      aux_sym__raw_body_token1,
    ACTIONS(313), 1,
      aux_sym__plain_comment_token1,
    STATE(50), 1,
      sym__raw_body,
    ACTIONS(311), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(316), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2287] = 5,
    ACTIONS(318), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    STATE(57), 1,
      sym__raw_body,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(316), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2321] = 4,
    ACTIONS(327), 1,
      aux_sym_graphql_json_body_token1,
    STATE(55), 1,
      sym_graphql_json_body,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(325), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2353] = 5,
    ACTIONS(333), 1,
      aux_sym__var_comment_token1,
    ACTIONS(336), 1,
      aux_sym__blank_line_token1,
    STATE(38), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(331), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
  [2387] = 5,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(339), 1,
      aux_sym__plain_comment_token1,
    STATE(64), 1,
      sym__raw_body,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(307), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2421] = 2,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(226), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2449] = 2,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(344), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2477] = 5,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(348), 1,
      aux_sym__plain_comment_token1,
    STATE(54), 1,
      sym__raw_body,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(351), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2511] = 2,
    ACTIONS(353), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(355), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2539] = 2,
    ACTIONS(357), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(359), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2567] = 5,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(363), 1,
      aux_sym__plain_comment_token1,
    STATE(58), 1,
      sym__raw_body,
    ACTIONS(361), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(366), 17,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2601] = 2,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(370), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2629] = 2,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(374), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2657] = 2,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(378), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2685] = 2,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(382), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2712] = 2,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(307), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2739] = 2,
    ACTIONS(384), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(386), 15,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2766] = 2,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(378), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2792] = 2,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(390), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2818] = 2,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(366), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2844] = 2,
    ACTIONS(392), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(394), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2870] = 2,
    ACTIONS(396), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(398), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2896] = 2,
    ACTIONS(302), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(307), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2922] = 2,
    ACTIONS(400), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(402), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2948] = 2,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(406), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [2974] = 2,
    ACTIONS(408), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(410), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3000] = 2,
    ACTIONS(412), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(414), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3026] = 2,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(418), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3052] = 2,
    ACTIONS(420), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(422), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3078] = 2,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(382), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3104] = 2,
    ACTIONS(424), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(426), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3130] = 2,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(374), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3156] = 2,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(430), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3182] = 2,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(370), 14,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3208] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(442), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(438), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(432), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3251] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(448), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(446), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(444), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3294] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(454), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(2), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(70), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(452), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(450), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3337] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(460), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(458), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(456), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3380] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(466), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(76), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(464), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(462), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3423] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(472), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(75), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(470), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(468), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3466] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(478), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(476), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(474), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3509] = 11,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(484), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(482), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(480), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3552] = 8,
    ACTIONS(488), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(493), 1,
      sym_header_entity,
    STATE(86), 1,
      sym__plain_comment,
    STATE(87), 1,
      sym__var_comment,
    STATE(95), 1,
      sym_header,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(491), 4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3587] = 8,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(500), 1,
      aux_sym__blank_line_token1,
    STATE(82), 1,
      aux_sym_response_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(498), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(496), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3621] = 8,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(506), 1,
      aux_sym__blank_line_token1,
    STATE(82), 1,
      aux_sym_response_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(504), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(502), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3655] = 8,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(512), 1,
      aux_sym__blank_line_token1,
    STATE(79), 1,
      aux_sym_response_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(510), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(508), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3689] = 8,
    ACTIONS(436), 1,
      aux_sym__var_comment_token1,
    ACTIONS(440), 1,
      sym_header_entity,
    ACTIONS(514), 1,
      aux_sym__blank_line_token1,
    STATE(78), 1,
      aux_sym_response_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(81), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3723] = 5,
    ACTIONS(520), 1,
      sym_header_entity,
    STATE(82), 1,
      aux_sym_response_repeat1,
    STATE(89), 1,
      sym_header,
    ACTIONS(518), 5,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3749] = 2,
    ACTIONS(525), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(523), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3767] = 2,
    ACTIONS(529), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(527), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3785] = 2,
    ACTIONS(533), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(531), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3803] = 2,
    ACTIONS(344), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(342), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3821] = 2,
    ACTIONS(355), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3839] = 2,
    ACTIONS(359), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3857] = 2,
    ACTIONS(537), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3875] = 2,
    ACTIONS(370), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3893] = 2,
    ACTIONS(378), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3911] = 2,
    ACTIONS(374), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3929] = 2,
    ACTIONS(541), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3947] = 2,
    ACTIONS(545), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3965] = 2,
    ACTIONS(549), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3983] = 2,
    ACTIONS(553), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4001] = 2,
    ACTIONS(557), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(555), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4018] = 2,
    ACTIONS(561), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(559), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4035] = 2,
    ACTIONS(344), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4052] = 2,
    ACTIONS(378), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4069] = 2,
    ACTIONS(374), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4086] = 2,
    ACTIONS(565), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(563), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4103] = 2,
    ACTIONS(355), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(353), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4120] = 2,
    ACTIONS(370), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4137] = 2,
    ACTIONS(359), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(357), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4154] = 2,
    ACTIONS(569), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(567), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4171] = 2,
    ACTIONS(573), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(571), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4188] = 2,
    ACTIONS(577), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(575), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4205] = 2,
    ACTIONS(581), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(579), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4222] = 2,
    ACTIONS(585), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(583), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4239] = 2,
    ACTIONS(430), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4256] = 2,
    ACTIONS(589), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(587), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4273] = 2,
    ACTIONS(593), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(591), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4290] = 2,
    ACTIONS(597), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(595), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4307] = 2,
    ACTIONS(601), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(599), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4324] = 2,
    ACTIONS(605), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(603), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4341] = 6,
    ACTIONS(609), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(611), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(613), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(607), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(147), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(214), 2,
      sym_script,
      sym_path,
  [4363] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      aux_sym__var_comment_token2,
    ACTIONS(619), 1,
      aux_sym__var_comment_token3,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    STATE(225), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4387] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(623), 1,
      aux_sym__var_comment_token2,
    ACTIONS(625), 1,
      aux_sym__var_comment_token3,
    STATE(209), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4411] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(627), 1,
      aux_sym__var_comment_token2,
    ACTIONS(629), 1,
      aux_sym__var_comment_token3,
    STATE(212), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4435] = 6,
    ACTIONS(609), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(611), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(613), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(607), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(147), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(236), 2,
      sym_script,
      sym_path,
  [4457] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(619), 1,
      aux_sym__var_comment_token3,
    STATE(225), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4478] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      aux_sym__var_comment_token1,
    ACTIONS(634), 1,
      aux_sym__var_comment_token3,
    ACTIONS(637), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    STATE(177), 1,
      aux_sym_target_url_repeat1,
    STATE(141), 2,
      aux_sym__target_url_line,
      sym_variable,
  [4501] = 5,
    ACTIONS(645), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(641), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
    ACTIONS(643), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(131), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4520] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(649), 1,
      aux_sym__var_comment_token2,
    STATE(252), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4541] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(651), 1,
      aux_sym__var_comment_token2,
    STATE(237), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4562] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(653), 1,
      aux_sym__var_comment_token2,
    STATE(215), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4583] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(655), 1,
      aux_sym__var_comment_token3,
    STATE(238), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4604] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(657), 1,
      aux_sym__var_comment_token3,
    STATE(229), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4625] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(659), 1,
      aux_sym__var_comment_token2,
    STATE(233), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4646] = 5,
    ACTIONS(666), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(669), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(661), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
    ACTIONS(663), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(131), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4665] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(672), 1,
      aux_sym__var_comment_token2,
    STATE(242), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4686] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(674), 1,
      aux_sym__var_comment_token2,
    STATE(245), 1,
      sym_value,
    ACTIONS(615), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4707] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(235), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4725] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(678), 1,
      aux_sym__var_comment_token3,
    ACTIONS(680), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(676), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(145), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4743] = 5,
    ACTIONS(15), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 1,
      sym_target_url,
    ACTIONS(682), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(123), 2,
      aux_sym__target_url_line,
      sym_variable,
  [4761] = 5,
    ACTIONS(687), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(690), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(693), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(684), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(137), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4779] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(237), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4797] = 5,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      aux_sym__target_url_line_token2,
    STATE(181), 1,
      sym_path,
    ACTIONS(695), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(124), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4815] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(637), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(699), 1,
      aux_sym__var_comment_token1,
    ACTIONS(702), 1,
      aux_sym__var_comment_token3,
    STATE(141), 2,
      aux_sym__target_url_line,
      sym_variable,
  [4835] = 5,
    ACTIONS(707), 1,
      aux_sym__var_comment_token3,
    ACTIONS(709), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(712), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(704), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(141), 2,
      aux_sym__target_url_line,
      sym_variable,
  [4853] = 5,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      aux_sym__target_url_line_token2,
    STATE(184), 1,
      sym_path,
    ACTIONS(695), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(124), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4871] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(230), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4889] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(207), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4907] = 5,
    ACTIONS(718), 1,
      aux_sym__var_comment_token3,
    ACTIONS(720), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(723), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(715), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(145), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4925] = 5,
    ACTIONS(609), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(611), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(239), 1,
      sym_path,
    ACTIONS(607), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(147), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4943] = 5,
    ACTIONS(611), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(728), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(730), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(726), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(137), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4961] = 5,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      aux_sym__target_url_line_token2,
    STATE(187), 1,
      sym_path,
    ACTIONS(695), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(124), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [4979] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(243), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [4997] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    STATE(246), 1,
      sym_value,
    ACTIONS(621), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(135), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5015] = 3,
    ACTIONS(734), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(736), 1,
      aux_sym__blank_line_token1,
    ACTIONS(732), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5028] = 2,
    ACTIONS(740), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(738), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5039] = 2,
    ACTIONS(744), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(742), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5050] = 2,
    ACTIONS(748), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(746), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5061] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(750), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(140), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5076] = 2,
    ACTIONS(756), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(754), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5087] = 2,
    ACTIONS(748), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(746), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5097] = 2,
    ACTIONS(740), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(738), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5107] = 2,
    ACTIONS(740), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(738), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5117] = 2,
    ACTIONS(756), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(754), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5127] = 2,
    ACTIONS(756), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(754), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5137] = 2,
    ACTIONS(748), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(746), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5147] = 2,
    ACTIONS(744), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(742), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5157] = 2,
    ACTIONS(744), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(742), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5167] = 2,
    ACTIONS(760), 1,
      aux_sym__var_comment_token3,
    ACTIONS(758), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5175] = 3,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(762), 1,
      aux_sym__plain_comment_token1,
    STATE(60), 1,
      sym__raw_body,
  [5185] = 3,
    ACTIONS(764), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(766), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(168), 1,
      aux_sym_script_repeat1,
  [5195] = 3,
    ACTIONS(768), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(770), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(170), 1,
      aux_sym_script_repeat1,
  [5205] = 3,
    ACTIONS(309), 1,
      aux_sym__raw_body_token1,
    ACTIONS(772), 1,
      aux_sym__plain_comment_token1,
    STATE(51), 1,
      sym__raw_body,
  [5215] = 3,
    ACTIONS(774), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(777), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(170), 1,
      aux_sym_script_repeat1,
  [5225] = 3,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(762), 1,
      aux_sym__plain_comment_token1,
    STATE(53), 1,
      sym__raw_body,
  [5235] = 2,
    ACTIONS(781), 1,
      aux_sym__var_comment_token3,
    ACTIONS(779), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5243] = 2,
    ACTIONS(785), 1,
      aux_sym__var_comment_token3,
    ACTIONS(783), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5251] = 2,
    ACTIONS(789), 1,
      aux_sym__var_comment_token3,
    ACTIONS(787), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5259] = 3,
    ACTIONS(791), 1,
      aux_sym__var_comment_token1,
    ACTIONS(793), 1,
      aux_sym__var_comment_token3,
    STATE(175), 1,
      aux_sym_target_url_repeat1,
  [5269] = 3,
    ACTIONS(321), 1,
      aux_sym__raw_body_token1,
    ACTIONS(762), 1,
      aux_sym__plain_comment_token1,
    STATE(59), 1,
      sym__raw_body,
  [5279] = 3,
    ACTIONS(796), 1,
      aux_sym__var_comment_token1,
    ACTIONS(798), 1,
      aux_sym__var_comment_token3,
    STATE(175), 1,
      aux_sym_target_url_repeat1,
  [5289] = 1,
    ACTIONS(801), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5294] = 2,
    ACTIONS(803), 1,
      aux_sym__var_comment_token1,
    ACTIONS(805), 1,
      aux_sym__var_comment_token3,
  [5301] = 2,
    ACTIONS(807), 1,
      aux_sym__var_comment_token1,
    ACTIONS(809), 1,
      sym_identifier,
  [5308] = 1,
    ACTIONS(811), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5313] = 2,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    STATE(258), 1,
      sym_http_version,
  [5320] = 2,
    ACTIONS(813), 1,
      aux_sym__var_comment_token1,
    ACTIONS(815), 1,
      anon_sym_RBRACE_RBRACE,
  [5327] = 1,
    ACTIONS(817), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5332] = 2,
    ACTIONS(819), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(821), 1,
      anon_sym_AT,
  [5339] = 2,
    ACTIONS(823), 1,
      aux_sym__var_comment_token3,
    ACTIONS(825), 1,
      sym_status_text,
  [5346] = 1,
    ACTIONS(827), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5351] = 2,
    ACTIONS(829), 1,
      aux_sym__var_comment_token1,
    ACTIONS(831), 1,
      aux_sym__var_comment_token3,
  [5358] = 2,
    ACTIONS(833), 1,
      aux_sym__var_comment_token1,
    ACTIONS(835), 1,
      anon_sym_RBRACE_RBRACE,
  [5365] = 1,
    ACTIONS(837), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5370] = 2,
    ACTIONS(839), 1,
      aux_sym__var_comment_token1,
    ACTIONS(841), 1,
      anon_sym_EQ,
  [5377] = 2,
    ACTIONS(843), 1,
      anon_sym_AT,
    ACTIONS(845), 1,
      sym__not_comment,
  [5384] = 2,
    ACTIONS(847), 1,
      aux_sym__var_comment_token1,
    ACTIONS(849), 1,
      anon_sym_COLON,
  [5391] = 2,
    ACTIONS(851), 1,
      aux_sym__var_comment_token1,
    ACTIONS(853), 1,
      sym_identifier,
  [5398] = 2,
    ACTIONS(855), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(857), 1,
      anon_sym_AT,
  [5405] = 2,
    ACTIONS(859), 1,
      aux_sym__var_comment_token1,
    ACTIONS(861), 1,
      anon_sym_RBRACE_RBRACE,
  [5412] = 2,
    ACTIONS(863), 1,
      aux_sym__var_comment_token1,
    ACTIONS(865), 1,
      anon_sym_RBRACE_RBRACE,
  [5419] = 2,
    ACTIONS(867), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(869), 1,
      anon_sym_AT,
  [5426] = 2,
    ACTIONS(871), 1,
      aux_sym__var_comment_token1,
    ACTIONS(873), 1,
      anon_sym_RBRACE_RBRACE,
  [5433] = 2,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    STATE(218), 1,
      sym_http_version,
  [5440] = 2,
    ACTIONS(875), 1,
      aux_sym__var_comment_token1,
    ACTIONS(877), 1,
      anon_sym_RBRACE_RBRACE,
  [5447] = 2,
    ACTIONS(879), 1,
      aux_sym__var_comment_token1,
    ACTIONS(881), 1,
      sym_identifier,
  [5454] = 2,
    ACTIONS(883), 1,
      aux_sym__var_comment_token1,
    ACTIONS(885), 1,
      anon_sym_AT2,
  [5461] = 2,
    ACTIONS(887), 1,
      aux_sym__var_comment_token1,
    ACTIONS(889), 1,
      sym_identifier,
  [5468] = 1,
    ACTIONS(891), 1,
      aux_sym__var_comment_token1,
  [5472] = 1,
    ACTIONS(893), 1,
      sym_identifier,
  [5476] = 1,
    ACTIONS(895), 1,
      aux_sym__var_comment_token3,
  [5480] = 1,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [5484] = 1,
    ACTIONS(899), 1,
      aux_sym__var_comment_token3,
  [5488] = 1,
    ACTIONS(901), 1,
      anon_sym_RBRACE_RBRACE,
  [5492] = 1,
    ACTIONS(903), 1,
      aux_sym__var_comment_token1,
  [5496] = 1,
    ACTIONS(905), 1,
      aux_sym__var_comment_token3,
  [5500] = 1,
    ACTIONS(907), 1,
      aux_sym__var_comment_token3,
  [5504] = 1,
    ACTIONS(909), 1,
      aux_sym_pre_request_script_token1,
  [5508] = 1,
    ACTIONS(911), 1,
      aux_sym__var_comment_token3,
  [5512] = 1,
    ACTIONS(913), 1,
      sym__not_comment,
  [5516] = 1,
    ACTIONS(915), 1,
      aux_sym__blank_line_token1,
  [5520] = 1,
    ACTIONS(917), 1,
      aux_sym__var_comment_token3,
  [5524] = 1,
    ACTIONS(919), 1,
      anon_sym_COLON,
  [5528] = 1,
    ACTIONS(921), 1,
      aux_sym__var_comment_token1,
  [5532] = 1,
    ACTIONS(923), 1,
      aux_sym_pre_request_script_token1,
  [5536] = 1,
    ACTIONS(925), 1,
      anon_sym_EQ,
  [5540] = 1,
    ACTIONS(927), 1,
      sym_identifier,
  [5544] = 1,
    ACTIONS(929), 1,
      aux_sym__var_comment_token1,
  [5548] = 1,
    ACTIONS(931), 1,
      aux_sym__var_comment_token3,
  [5552] = 1,
    ACTIONS(933), 1,
      aux_sym__var_comment_token1,
  [5556] = 1,
    ACTIONS(935), 1,
      aux_sym__var_comment_token1,
  [5560] = 1,
    ACTIONS(937), 1,
      aux_sym_pre_request_script_token1,
  [5564] = 1,
    ACTIONS(939), 1,
      aux_sym__var_comment_token3,
  [5568] = 1,
    ACTIONS(941), 1,
      aux_sym__var_comment_token3,
  [5572] = 1,
    ACTIONS(943), 1,
      anon_sym_RBRACE_RBRACE,
  [5576] = 1,
    ACTIONS(945), 1,
      anon_sym_RBRACE_RBRACE,
  [5580] = 1,
    ACTIONS(947), 1,
      aux_sym__var_comment_token3,
  [5584] = 1,
    ACTIONS(949), 1,
      sym__not_comment,
  [5588] = 1,
    ACTIONS(951), 1,
      aux_sym__var_comment_token3,
  [5592] = 1,
    ACTIONS(953), 1,
      aux_sym_pre_request_script_token1,
  [5596] = 1,
    ACTIONS(955), 1,
      aux_sym__var_comment_token3,
  [5600] = 1,
    ACTIONS(957), 1,
      aux_sym__var_comment_token3,
  [5604] = 1,
    ACTIONS(959), 1,
      aux_sym_pre_request_script_token1,
  [5608] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACE_RBRACE,
  [5612] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE_RBRACE,
  [5616] = 1,
    ACTIONS(965), 1,
      aux_sym__var_comment_token3,
  [5620] = 1,
    ACTIONS(967), 1,
      aux_sym__var_comment_token3,
  [5624] = 1,
    ACTIONS(969), 1,
      sym_identifier,
  [5628] = 1,
    ACTIONS(971), 1,
      aux_sym__var_comment_token3,
  [5632] = 1,
    ACTIONS(973), 1,
      aux_sym__var_comment_token3,
  [5636] = 1,
    ACTIONS(975), 1,
      aux_sym__var_comment_token1,
  [5640] = 1,
    ACTIONS(977), 1,
      sym_identifier,
  [5644] = 1,
    ACTIONS(979), 1,
      sym_identifier,
  [5648] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE_RBRACE,
  [5652] = 1,
    ACTIONS(983), 1,
      aux_sym__var_comment_token3,
  [5656] = 1,
    ACTIONS(985), 1,
      aux_sym__var_comment_token3,
  [5660] = 1,
    ACTIONS(987), 1,
      sym_identifier,
  [5664] = 1,
    ACTIONS(989), 1,
      sym_identifier,
  [5668] = 1,
    ACTIONS(991), 1,
      aux_sym_multipart_form_data_token1,
  [5672] = 1,
    ACTIONS(993), 1,
      aux_sym__var_comment_token3,
  [5676] = 1,
    ACTIONS(995), 1,
      sym_identifier,
  [5680] = 1,
    ACTIONS(997), 1,
      aux_sym__var_comment_token3,
  [5684] = 1,
    ACTIONS(999), 1,
      sym_status_code,
  [5688] = 1,
    ACTIONS(1001), 1,
      aux_sym__var_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 228,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 532,
  [SMALL_STATE(10)] = 608,
  [SMALL_STATE(11)] = 684,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 836,
  [SMALL_STATE(14)] = 912,
  [SMALL_STATE(15)] = 980,
  [SMALL_STATE(16)] = 1048,
  [SMALL_STATE(17)] = 1116,
  [SMALL_STATE(18)] = 1184,
  [SMALL_STATE(19)] = 1252,
  [SMALL_STATE(20)] = 1320,
  [SMALL_STATE(21)] = 1388,
  [SMALL_STATE(22)] = 1456,
  [SMALL_STATE(23)] = 1524,
  [SMALL_STATE(24)] = 1592,
  [SMALL_STATE(25)] = 1660,
  [SMALL_STATE(26)] = 1728,
  [SMALL_STATE(27)] = 1796,
  [SMALL_STATE(28)] = 1845,
  [SMALL_STATE(29)] = 1894,
  [SMALL_STATE(30)] = 1943,
  [SMALL_STATE(31)] = 2016,
  [SMALL_STATE(32)] = 2089,
  [SMALL_STATE(33)] = 2153,
  [SMALL_STATE(34)] = 2217,
  [SMALL_STATE(35)] = 2252,
  [SMALL_STATE(36)] = 2287,
  [SMALL_STATE(37)] = 2321,
  [SMALL_STATE(38)] = 2353,
  [SMALL_STATE(39)] = 2387,
  [SMALL_STATE(40)] = 2421,
  [SMALL_STATE(41)] = 2449,
  [SMALL_STATE(42)] = 2477,
  [SMALL_STATE(43)] = 2511,
  [SMALL_STATE(44)] = 2539,
  [SMALL_STATE(45)] = 2567,
  [SMALL_STATE(46)] = 2601,
  [SMALL_STATE(47)] = 2629,
  [SMALL_STATE(48)] = 2657,
  [SMALL_STATE(49)] = 2685,
  [SMALL_STATE(50)] = 2712,
  [SMALL_STATE(51)] = 2739,
  [SMALL_STATE(52)] = 2766,
  [SMALL_STATE(53)] = 2792,
  [SMALL_STATE(54)] = 2818,
  [SMALL_STATE(55)] = 2844,
  [SMALL_STATE(56)] = 2870,
  [SMALL_STATE(57)] = 2896,
  [SMALL_STATE(58)] = 2922,
  [SMALL_STATE(59)] = 2948,
  [SMALL_STATE(60)] = 2974,
  [SMALL_STATE(61)] = 3000,
  [SMALL_STATE(62)] = 3026,
  [SMALL_STATE(63)] = 3052,
  [SMALL_STATE(64)] = 3078,
  [SMALL_STATE(65)] = 3104,
  [SMALL_STATE(66)] = 3130,
  [SMALL_STATE(67)] = 3156,
  [SMALL_STATE(68)] = 3182,
  [SMALL_STATE(69)] = 3208,
  [SMALL_STATE(70)] = 3251,
  [SMALL_STATE(71)] = 3294,
  [SMALL_STATE(72)] = 3337,
  [SMALL_STATE(73)] = 3380,
  [SMALL_STATE(74)] = 3423,
  [SMALL_STATE(75)] = 3466,
  [SMALL_STATE(76)] = 3509,
  [SMALL_STATE(77)] = 3552,
  [SMALL_STATE(78)] = 3587,
  [SMALL_STATE(79)] = 3621,
  [SMALL_STATE(80)] = 3655,
  [SMALL_STATE(81)] = 3689,
  [SMALL_STATE(82)] = 3723,
  [SMALL_STATE(83)] = 3749,
  [SMALL_STATE(84)] = 3767,
  [SMALL_STATE(85)] = 3785,
  [SMALL_STATE(86)] = 3803,
  [SMALL_STATE(87)] = 3821,
  [SMALL_STATE(88)] = 3839,
  [SMALL_STATE(89)] = 3857,
  [SMALL_STATE(90)] = 3875,
  [SMALL_STATE(91)] = 3893,
  [SMALL_STATE(92)] = 3911,
  [SMALL_STATE(93)] = 3929,
  [SMALL_STATE(94)] = 3947,
  [SMALL_STATE(95)] = 3965,
  [SMALL_STATE(96)] = 3983,
  [SMALL_STATE(97)] = 4001,
  [SMALL_STATE(98)] = 4018,
  [SMALL_STATE(99)] = 4035,
  [SMALL_STATE(100)] = 4052,
  [SMALL_STATE(101)] = 4069,
  [SMALL_STATE(102)] = 4086,
  [SMALL_STATE(103)] = 4103,
  [SMALL_STATE(104)] = 4120,
  [SMALL_STATE(105)] = 4137,
  [SMALL_STATE(106)] = 4154,
  [SMALL_STATE(107)] = 4171,
  [SMALL_STATE(108)] = 4188,
  [SMALL_STATE(109)] = 4205,
  [SMALL_STATE(110)] = 4222,
  [SMALL_STATE(111)] = 4239,
  [SMALL_STATE(112)] = 4256,
  [SMALL_STATE(113)] = 4273,
  [SMALL_STATE(114)] = 4290,
  [SMALL_STATE(115)] = 4307,
  [SMALL_STATE(116)] = 4324,
  [SMALL_STATE(117)] = 4341,
  [SMALL_STATE(118)] = 4363,
  [SMALL_STATE(119)] = 4387,
  [SMALL_STATE(120)] = 4411,
  [SMALL_STATE(121)] = 4435,
  [SMALL_STATE(122)] = 4457,
  [SMALL_STATE(123)] = 4478,
  [SMALL_STATE(124)] = 4501,
  [SMALL_STATE(125)] = 4520,
  [SMALL_STATE(126)] = 4541,
  [SMALL_STATE(127)] = 4562,
  [SMALL_STATE(128)] = 4583,
  [SMALL_STATE(129)] = 4604,
  [SMALL_STATE(130)] = 4625,
  [SMALL_STATE(131)] = 4646,
  [SMALL_STATE(132)] = 4665,
  [SMALL_STATE(133)] = 4686,
  [SMALL_STATE(134)] = 4707,
  [SMALL_STATE(135)] = 4725,
  [SMALL_STATE(136)] = 4743,
  [SMALL_STATE(137)] = 4761,
  [SMALL_STATE(138)] = 4779,
  [SMALL_STATE(139)] = 4797,
  [SMALL_STATE(140)] = 4815,
  [SMALL_STATE(141)] = 4835,
  [SMALL_STATE(142)] = 4853,
  [SMALL_STATE(143)] = 4871,
  [SMALL_STATE(144)] = 4889,
  [SMALL_STATE(145)] = 4907,
  [SMALL_STATE(146)] = 4925,
  [SMALL_STATE(147)] = 4943,
  [SMALL_STATE(148)] = 4961,
  [SMALL_STATE(149)] = 4979,
  [SMALL_STATE(150)] = 4997,
  [SMALL_STATE(151)] = 5015,
  [SMALL_STATE(152)] = 5028,
  [SMALL_STATE(153)] = 5039,
  [SMALL_STATE(154)] = 5050,
  [SMALL_STATE(155)] = 5061,
  [SMALL_STATE(156)] = 5076,
  [SMALL_STATE(157)] = 5087,
  [SMALL_STATE(158)] = 5097,
  [SMALL_STATE(159)] = 5107,
  [SMALL_STATE(160)] = 5117,
  [SMALL_STATE(161)] = 5127,
  [SMALL_STATE(162)] = 5137,
  [SMALL_STATE(163)] = 5147,
  [SMALL_STATE(164)] = 5157,
  [SMALL_STATE(165)] = 5167,
  [SMALL_STATE(166)] = 5175,
  [SMALL_STATE(167)] = 5185,
  [SMALL_STATE(168)] = 5195,
  [SMALL_STATE(169)] = 5205,
  [SMALL_STATE(170)] = 5215,
  [SMALL_STATE(171)] = 5225,
  [SMALL_STATE(172)] = 5235,
  [SMALL_STATE(173)] = 5243,
  [SMALL_STATE(174)] = 5251,
  [SMALL_STATE(175)] = 5259,
  [SMALL_STATE(176)] = 5269,
  [SMALL_STATE(177)] = 5279,
  [SMALL_STATE(178)] = 5289,
  [SMALL_STATE(179)] = 5294,
  [SMALL_STATE(180)] = 5301,
  [SMALL_STATE(181)] = 5308,
  [SMALL_STATE(182)] = 5313,
  [SMALL_STATE(183)] = 5320,
  [SMALL_STATE(184)] = 5327,
  [SMALL_STATE(185)] = 5332,
  [SMALL_STATE(186)] = 5339,
  [SMALL_STATE(187)] = 5346,
  [SMALL_STATE(188)] = 5351,
  [SMALL_STATE(189)] = 5358,
  [SMALL_STATE(190)] = 5365,
  [SMALL_STATE(191)] = 5370,
  [SMALL_STATE(192)] = 5377,
  [SMALL_STATE(193)] = 5384,
  [SMALL_STATE(194)] = 5391,
  [SMALL_STATE(195)] = 5398,
  [SMALL_STATE(196)] = 5405,
  [SMALL_STATE(197)] = 5412,
  [SMALL_STATE(198)] = 5419,
  [SMALL_STATE(199)] = 5426,
  [SMALL_STATE(200)] = 5433,
  [SMALL_STATE(201)] = 5440,
  [SMALL_STATE(202)] = 5447,
  [SMALL_STATE(203)] = 5454,
  [SMALL_STATE(204)] = 5461,
  [SMALL_STATE(205)] = 5468,
  [SMALL_STATE(206)] = 5472,
  [SMALL_STATE(207)] = 5476,
  [SMALL_STATE(208)] = 5480,
  [SMALL_STATE(209)] = 5484,
  [SMALL_STATE(210)] = 5488,
  [SMALL_STATE(211)] = 5492,
  [SMALL_STATE(212)] = 5496,
  [SMALL_STATE(213)] = 5500,
  [SMALL_STATE(214)] = 5504,
  [SMALL_STATE(215)] = 5508,
  [SMALL_STATE(216)] = 5512,
  [SMALL_STATE(217)] = 5516,
  [SMALL_STATE(218)] = 5520,
  [SMALL_STATE(219)] = 5524,
  [SMALL_STATE(220)] = 5528,
  [SMALL_STATE(221)] = 5532,
  [SMALL_STATE(222)] = 5536,
  [SMALL_STATE(223)] = 5540,
  [SMALL_STATE(224)] = 5544,
  [SMALL_STATE(225)] = 5548,
  [SMALL_STATE(226)] = 5552,
  [SMALL_STATE(227)] = 5556,
  [SMALL_STATE(228)] = 5560,
  [SMALL_STATE(229)] = 5564,
  [SMALL_STATE(230)] = 5568,
  [SMALL_STATE(231)] = 5572,
  [SMALL_STATE(232)] = 5576,
  [SMALL_STATE(233)] = 5580,
  [SMALL_STATE(234)] = 5584,
  [SMALL_STATE(235)] = 5588,
  [SMALL_STATE(236)] = 5592,
  [SMALL_STATE(237)] = 5596,
  [SMALL_STATE(238)] = 5600,
  [SMALL_STATE(239)] = 5604,
  [SMALL_STATE(240)] = 5608,
  [SMALL_STATE(241)] = 5612,
  [SMALL_STATE(242)] = 5616,
  [SMALL_STATE(243)] = 5620,
  [SMALL_STATE(244)] = 5624,
  [SMALL_STATE(245)] = 5628,
  [SMALL_STATE(246)] = 5632,
  [SMALL_STATE(247)] = 5636,
  [SMALL_STATE(248)] = 5640,
  [SMALL_STATE(249)] = 5644,
  [SMALL_STATE(250)] = 5648,
  [SMALL_STATE(251)] = 5652,
  [SMALL_STATE(252)] = 5656,
  [SMALL_STATE(253)] = 5660,
  [SMALL_STATE(254)] = 5664,
  [SMALL_STATE(255)] = 5668,
  [SMALL_STATE(256)] = 5672,
  [SMALL_STATE(257)] = 5676,
  [SMALL_STATE(258)] = 5680,
  [SMALL_STATE(259)] = 5684,
  [SMALL_STATE(260)] = 5688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 10),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 29),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 29),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 34),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 34),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 38),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 38),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 44),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 44),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 24),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 24),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 17),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 17),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 37),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 35),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 35),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(192),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(20),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(205),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(260),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(166),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(171),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(169),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(203),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(255),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 23), SHIFT_REPEAT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 43),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 43),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 42),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 42),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 9, 0, 48),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 9, 0, 48),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 47),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 47),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(185),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(151),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(247),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(178),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(123),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(180),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(220),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(206),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(33),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(234),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(234),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(216),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(216),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(216),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plain_comment, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plain_comment, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(216),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 4, 0, 11),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 4, 0, 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 6, 0, 25),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 6, 0, 25),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 7, 0, 33),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 7, 0, 33),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 1, 0, 16),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 1, 0, 16),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_redirect, 4, 0, 32),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_redirect, 4, 0, 32),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 1, 0, 15),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 1, 0, 15),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 10),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 10),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 6),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 34),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 34),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 14),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 14),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 18),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 18), SHIFT_REPEAT(195),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 18),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 18), SHIFT_REPEAT(193),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 38),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 38),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 29),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 29),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 18),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 18),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 18), SHIFT_REPEAT(193),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 22),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 22),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 45),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 45),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 31),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 31),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 1, 0, 9),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 1, 0, 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 22),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 22),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 40),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 40),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 1, 0, 9),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 1, 0, 9),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 22),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 22),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 5),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 4),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 12),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 12),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 36),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 36),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 5),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 20),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 20),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 7),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 7),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(141),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(226),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0), SHIFT(141),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(141),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(141),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(180),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 1, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 8),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 8),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 8),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(226),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1, 1, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 41),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 46),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 32),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [897] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
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

TS_PUBLIC const TSLanguage *tree_sitter_kulala(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

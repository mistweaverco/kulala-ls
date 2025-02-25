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
#define STATE_COUNT 341
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  anon_sym_DASH_DASH2 = 33,
  aux_sym_multipart_form_data_token3 = 34,
  aux_sym_multipart_form_data_token4 = 35,
  aux_sym_raw_body_token1 = 36,
  aux_sym_raw_body_token2 = 37,
  aux_sym__raw_body_token1 = 38,
  sym__not_comment = 39,
  sym_header_entity = 40,
  sym_identifier = 41,
  aux_sym_path_token1 = 42,
  aux_sym__blank_line_token1 = 43,
  sym_document = 44,
  sym_comment = 45,
  sym__plain_comment = 46,
  sym__var_comment = 47,
  sym_request_separator = 48,
  sym_section = 49,
  sym__section_content = 50,
  sym_http_version = 51,
  sym_target_url = 52,
  sym_response = 53,
  sym_request = 54,
  sym_header = 55,
  sym_variable = 56,
  sym_pre_request_script = 57,
  sym_res_handler_script = 58,
  sym_script = 59,
  sym_res_redirect = 60,
  sym_variable_declaration = 61,
  sym_xml_body = 62,
  sym_json_body = 63,
  sym_graphql_body = 64,
  sym_graphql_data = 65,
  sym_graphql_json_body = 66,
  sym__external_body = 67,
  sym_external_body = 68,
  sym_multipart_form_data = 69,
  sym_raw_body = 70,
  sym__raw_body = 71,
  sym_path = 72,
  sym_value = 73,
  sym__blank_line = 74,
  aux_sym_document_repeat1 = 75,
  aux_sym__target_url_line_repeat1 = 76,
  aux_sym_target_url_repeat1 = 77,
  aux_sym___body_repeat1 = 78,
  aux_sym___body_repeat2 = 79,
  aux_sym_response_repeat1 = 80,
  aux_sym_request_repeat1 = 81,
  aux_sym_script_repeat1 = 82,
  aux_sym_multipart_form_data_repeat1 = 83,
  aux_sym_path_repeat1 = 84,
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
  [anon_sym_DASH_DASH2] = "--",
  [aux_sym_multipart_form_data_token3] = "multipart_form_data_token3",
  [aux_sym_multipart_form_data_token4] = "multipart_form_data_token4",
  [aux_sym_raw_body_token1] = "raw_body_token1",
  [aux_sym_raw_body_token2] = "raw_body_token2",
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
  [aux_sym__target_url_line_repeat1] = "_target_url_line_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym___body_repeat1] = "__body_repeat1",
  [aux_sym___body_repeat2] = "__body_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_multipart_form_data_repeat1] = "multipart_form_data_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token3] = aux_sym_multipart_form_data_token3,
  [aux_sym_multipart_form_data_token4] = aux_sym_multipart_form_data_token4,
  [aux_sym_raw_body_token1] = aux_sym_raw_body_token1,
  [aux_sym_raw_body_token2] = aux_sym_raw_body_token2,
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
  [aux_sym__target_url_line_repeat1] = aux_sym__target_url_line_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym___body_repeat1] = aux_sym___body_repeat1,
  [aux_sym___body_repeat2] = aux_sym___body_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_multipart_form_data_repeat1] = aux_sym_multipart_form_data_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
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
  [anon_sym_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipart_form_data_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token2] = {
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
  [aux_sym__target_url_line_repeat1] = {
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
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 3},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 3},
  [20] = {.index = 32, .length = 1},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 3},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 1},
  [27] = {.index = 47, .length = 3},
  [28] = {.index = 50, .length = 2},
  [29] = {.index = 52, .length = 1},
  [30] = {.index = 53, .length = 2},
  [31] = {.index = 55, .length = 4},
  [32] = {.index = 59, .length = 4},
  [33] = {.index = 63, .length = 2},
  [34] = {.index = 0, .length = 2},
  [35] = {.index = 65, .length = 1},
  [36] = {.index = 66, .length = 1},
  [37] = {.index = 67, .length = 1},
  [38] = {.index = 68, .length = 4},
  [39] = {.index = 72, .length = 2},
  [40] = {.index = 74, .length = 1},
  [41] = {.index = 75, .length = 4},
  [42] = {.index = 79, .length = 2},
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
    {field_body, 3},
    {field_url, 0},
  [22] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [24] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [27] =
    {field_name, 1},
    {field_value, 3},
  [29] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [32] =
    {field_name, 0},
  [33] =
    {field_body, 4},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [36] =
    {field_name, 2},
    {field_value, 4},
  [38] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [41] =
    {field_body, 5},
    {field_method, 0},
    {field_url, 2},
  [44] =
    {field_name, 1},
    {field_value, 4},
  [46] =
    {field_header, 5, .inherited = true},
  [47] =
    {field_body, 5},
    {field_url, 0},
    {field_version, 2},
  [50] =
    {field_name, 0},
    {field_value, 2},
  [52] =
    {field_path, 2},
  [53] =
    {field_name, 2},
    {field_value, 5},
  [55] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [59] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [63] =
    {field_name, 1},
    {field_value, 5},
  [65] =
    {field_body, 0},
  [66] =
    {field_body, 6, .inherited = true},
  [67] =
    {field_header, 6, .inherited = true},
  [68] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [72] =
    {field_name, 0},
    {field_value, 3},
  [74] =
    {field_path, 3},
  [75] =
    {field_body, 7},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [79] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
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
    {field_body, 8},
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
  [34] = {
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
  [26] = 23,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 11,
  [34] = 13,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 12,
  [39] = 36,
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
  [52] = 37,
  [53] = 20,
  [54] = 21,
  [55] = 22,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 17,
  [66] = 18,
  [67] = 19,
  [68] = 15,
  [69] = 20,
  [70] = 70,
  [71] = 22,
  [72] = 72,
  [73] = 21,
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
  [85] = 24,
  [86] = 23,
  [87] = 28,
  [88] = 23,
  [89] = 31,
  [90] = 24,
  [91] = 25,
  [92] = 35,
  [93] = 22,
  [94] = 17,
  [95] = 18,
  [96] = 19,
  [97] = 20,
  [98] = 37,
  [99] = 36,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 21,
  [109] = 109,
  [110] = 110,
  [111] = 19,
  [112] = 51,
  [113] = 44,
  [114] = 45,
  [115] = 115,
  [116] = 46,
  [117] = 47,
  [118] = 48,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 21,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 49,
  [130] = 37,
  [131] = 131,
  [132] = 50,
  [133] = 22,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 36,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 20,
  [158] = 158,
  [159] = 159,
  [160] = 17,
  [161] = 161,
  [162] = 18,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 51,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 179,
  [183] = 179,
  [184] = 179,
  [185] = 179,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 178,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 196,
  [197] = 193,
  [198] = 198,
  [199] = 193,
  [200] = 200,
  [201] = 193,
  [202] = 177,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 204,
  [208] = 203,
  [209] = 203,
  [210] = 206,
  [211] = 211,
  [212] = 205,
  [213] = 206,
  [214] = 205,
  [215] = 204,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 218,
  [226] = 221,
  [227] = 227,
  [228] = 227,
  [229] = 227,
  [230] = 230,
  [231] = 227,
  [232] = 219,
  [233] = 217,
  [234] = 227,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 204,
  [247] = 205,
  [248] = 206,
  [249] = 203,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 236,
  [256] = 241,
  [257] = 253,
  [258] = 258,
  [259] = 237,
  [260] = 251,
  [261] = 241,
  [262] = 253,
  [263] = 237,
  [264] = 241,
  [265] = 253,
  [266] = 266,
  [267] = 237,
  [268] = 236,
  [269] = 236,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 283,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 284,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 286,
  [299] = 299,
  [300] = 300,
  [301] = 285,
  [302] = 302,
  [303] = 303,
  [304] = 272,
  [305] = 283,
  [306] = 290,
  [307] = 296,
  [308] = 290,
  [309] = 286,
  [310] = 285,
  [311] = 311,
  [312] = 312,
  [313] = 296,
  [314] = 283,
  [315] = 290,
  [316] = 296,
  [317] = 297,
  [318] = 286,
  [319] = 319,
  [320] = 296,
  [321] = 286,
  [322] = 322,
  [323] = 323,
  [324] = 288,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 323,
  [329] = 288,
  [330] = 330,
  [331] = 323,
  [332] = 332,
  [333] = 323,
  [334] = 288,
  [335] = 297,
  [336] = 336,
  [337] = 323,
  [338] = 338,
  [339] = 339,
  [340] = 297,
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
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 992,
        '\n', 992,
        '\r', 993,
        '#', 828,
        '-', 936,
        '/', 937,
        ':', 945,
        '<', 983,
        '=', 838,
        '>', 954,
        '@', 832,
        'C', 902,
        'D', 892,
        'G', 893,
        'H', 898,
        'L', 900,
        'O', 904,
        'P', 890,
        'T', 906,
        'W', 894,
        '[', 940,
        '\\', 942,
        '_', 941,
        '{', 935,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 1000,
        '\n', 999,
        '\r', 1001,
        '#', 823,
        '-', 3,
        '/', 4,
        '<', 981,
        'm', 49,
        'q', 50,
        '[', 55,
        '{', 55,
      );
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '#') ADVANCE(842);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'D') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'H') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'K') ADVANCE(15);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'L') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'S') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'T') ADVANCE(845);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(968);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(966);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(996);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(998);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(996);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(998);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(971);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\r') ADVANCE(974);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(975);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\r') ADVANCE(974);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(805);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '#') ADVANCE(842);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'B') ADVANCE(90);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'D') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'H') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'H') ADVANCE(88);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'K') ADVANCE(72);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'L') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'P') ADVANCE(76);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'Q') ADVANCE(79);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'S') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'T') ADVANCE(846);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'y') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(109);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(988);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(988);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) ADVANCE(988);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(988);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '#') ADVANCE(842);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'A') ADVANCE(123);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'D') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'H') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'K') ADVANCE(125);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'Q') ADVANCE(132);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'S') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'S') ADVANCE(138);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'T') ADVANCE(847);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 152:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 153:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 154:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 155:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 156:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 157:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 158:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 159:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(851);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 160:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(162);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      if ((!eof && lookahead == 00)) ADVANCE(1005);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1005);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 163:
      if ((!eof && lookahead == 00)) ADVANCE(1005);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1005);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 164:
      if ((!eof && lookahead == 00)) ADVANCE(840);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 165:
      if ((!eof && lookahead == 00)) ADVANCE(840);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(839);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 166:
      if ((!eof && lookahead == 00)) ADVANCE(840);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 167:
      if ((!eof && lookahead == 00)) ADVANCE(933);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '{') ADVANCE(938);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(909);
      END_STATE();
    case 168:
      if ((!eof && lookahead == 00)) ADVANCE(831);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(831);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 169:
      if ((!eof && lookahead == 00)) ADVANCE(831);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(831);
      if (lookahead == '@') ADVANCE(832);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 170:
      if ((!eof && lookahead == 00)) ADVANCE(831);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(831);
      if (lookahead == '}') ADVANCE(956);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 171:
      if ((!eof && lookahead == 00)) ADVANCE(831);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(831);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 172:
      if ((!eof && lookahead == 00)) ADVANCE(973);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\r') ADVANCE(972);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 173:
      if (lookahead == '\r') ADVANCE(1047);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1044);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        '\r', 841,
        ':', 945,
        '=', 838,
        'A', 374,
        'B', 326,
        'C', 611,
        'E', 792,
        'F', 327,
        'G', 328,
        'H', 319,
        'I', 230,
        'L', 424,
        'M', 418,
        'N', 425,
        'O', 270,
        'P', 329,
        'R', 337,
        'S', 415,
        'T', 419,
        'U', 295,
        'V', 333,
        '}', 806,
        0, 840,
        '\n', 840,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(808);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      END_STATE();
    case 175:
      if (lookahead == '\r') ADVANCE(953);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(953);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(837);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1044);
      END_STATE();
    case 176:
      if (lookahead == '\r') ADVANCE(1006);
      if (lookahead == '@') ADVANCE(832);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '\r') ADVANCE(1006);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(323);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 210:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 212:
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 213:
      if (lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 214:
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 215:
      if (lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 216:
      if (lookahead == ' ') ADVANCE(752);
      END_STATE();
    case 217:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 218:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 219:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 220:
      if (lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 221:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 223:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 224:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 225:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 226:
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 227:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 228:
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 229:
      if (lookahead == '#') ADVANCE(842);
      END_STATE();
    case 230:
      if (lookahead == '\'') ADVANCE(570);
      if (lookahead == 'M') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(705);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(565);
      END_STATE();
    case 233:
      if (lookahead == '/') ADVANCE(809);
      END_STATE();
    case 234:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 235:
      if (lookahead == 'A') ADVANCE(249);
      END_STATE();
    case 236:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 237:
      if (lookahead == 'A') ADVANCE(779);
      END_STATE();
    case 238:
      if (lookahead == 'A') ADVANCE(391);
      if (lookahead == 'E') ADVANCE(794);
      if (lookahead == 'F') ADVANCE(614);
      if (lookahead == 'I') ADVANCE(572);
      if (lookahead == 'M') ADVANCE(638);
      END_STATE();
    case 239:
      if (lookahead == 'A') ADVANCE(777);
      END_STATE();
    case 240:
      if (lookahead == 'A') ADVANCE(553);
      END_STATE();
    case 241:
      if (lookahead == 'A') ADVANCE(556);
      END_STATE();
    case 242:
      if (lookahead == 'B') ADVANCE(304);
      END_STATE();
    case 243:
      if (lookahead == 'C') ADVANCE(310);
      END_STATE();
    case 244:
      if (lookahead == 'C') ADVANCE(271);
      END_STATE();
    case 245:
      if (lookahead == 'C') ADVANCE(264);
      END_STATE();
    case 246:
      if (lookahead == 'C') ADVANCE(253);
      END_STATE();
    case 247:
      if (lookahead == 'C') ADVANCE(618);
      END_STATE();
    case 248:
      if (lookahead == 'C') ADVANCE(503);
      END_STATE();
    case 249:
      if (lookahead == 'D') ADVANCE(844);
      END_STATE();
    case 250:
      if (lookahead == 'D') ADVANCE(474);
      END_STATE();
    case 251:
      if (lookahead == 'D') ADVANCE(462);
      END_STATE();
    case 252:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 253:
      if (lookahead == 'E') ADVANCE(844);
      END_STATE();
    case 254:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 255:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 256:
      if (lookahead == 'E') ADVANCE(689);
      END_STATE();
    case 257:
      if (lookahead == 'E') ADVANCE(592);
      END_STATE();
    case 258:
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == 'M') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 'F') ADVANCE(524);
      END_STATE();
    case 260:
      if (lookahead == 'F') ADVANCE(364);
      END_STATE();
    case 261:
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'R') ADVANCE(464);
      END_STATE();
    case 262:
      if (lookahead == 'F') ADVANCE(644);
      END_STATE();
    case 263:
      if (lookahead == 'G') ADVANCE(365);
      if (lookahead == 'R') ADVANCE(416);
      END_STATE();
    case 264:
      if (lookahead == 'H') ADVANCE(844);
      END_STATE();
    case 265:
      if (lookahead == 'H') ADVANCE(294);
      END_STATE();
    case 266:
      if (lookahead == 'H') ADVANCE(472);
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 267:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 268:
      if (lookahead == 'I') ADVANCE(212);
      END_STATE();
    case 269:
      if (lookahead == 'I') ADVANCE(582);
      END_STATE();
    case 270:
      if (lookahead == 'K') ADVANCE(944);
      END_STATE();
    case 271:
      if (lookahead == 'K') ADVANCE(252);
      END_STATE();
    case 272:
      if (lookahead == 'L') ADVANCE(255);
      END_STATE();
    case 273:
      if (lookahead == 'L') ADVANCE(844);
      END_STATE();
    case 274:
      if (lookahead == 'L') ADVANCE(437);
      END_STATE();
    case 275:
      if (lookahead == 'L') ADVANCE(347);
      END_STATE();
    case 276:
      if (lookahead == 'L') ADVANCE(627);
      END_STATE();
    case 277:
      if (lookahead == 'M') ADVANCE(473);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(254);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(303);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(647);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(434);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(648);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(649);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(280);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(244);
      END_STATE();
    case 287:
      if (lookahead == 'O') ADVANCE(726);
      END_STATE();
    case 288:
      if (lookahead == 'P') ADVANCE(265);
      END_STATE();
    case 289:
      if (lookahead == 'P') ADVANCE(233);
      END_STATE();
    case 290:
      if (lookahead == 'P') ADVANCE(182);
      END_STATE();
    case 291:
      if (lookahead == 'P') ADVANCE(485);
      END_STATE();
    case 292:
      if (lookahead == 'P') ADVANCE(684);
      END_STATE();
    case 293:
      if (lookahead == 'P') ADVANCE(686);
      END_STATE();
    case 294:
      if (lookahead == 'Q') ADVANCE(273);
      END_STATE();
    case 295:
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 296:
      if (lookahead == 'R') ADVANCE(416);
      END_STATE();
    case 297:
      if (lookahead == 'R') ADVANCE(484);
      END_STATE();
    case 298:
      if (lookahead == 'R') ADVANCE(464);
      END_STATE();
    case 299:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 300:
      if (lookahead == 'R') ADVANCE(480);
      END_STATE();
    case 301:
      if (lookahead == 'R') ADVANCE(483);
      END_STATE();
    case 302:
      if (lookahead == 'S') ADVANCE(310);
      END_STATE();
    case 303:
      if (lookahead == 'S') ADVANCE(844);
      END_STATE();
    case 304:
      if (lookahead == 'S') ADVANCE(286);
      END_STATE();
    case 305:
      if (lookahead == 'S') ADVANCE(761);
      END_STATE();
    case 306:
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 307:
      if (lookahead == 'S') ADVANCE(735);
      END_STATE();
    case 308:
      if (lookahead == 'S') ADVANCE(360);
      END_STATE();
    case 309:
      if (lookahead == 'S') ADVANCE(782);
      END_STATE();
    case 310:
      if (lookahead == 'T') ADVANCE(844);
      END_STATE();
    case 311:
      if (lookahead == 'T') ADVANCE(267);
      END_STATE();
    case 312:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 313:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 314:
      if (lookahead == 'T') ADVANCE(253);
      END_STATE();
    case 315:
      if (lookahead == 'T') ADVANCE(290);
      END_STATE();
    case 316:
      if (lookahead == 'T') ADVANCE(799);
      END_STATE();
    case 317:
      if (lookahead == 'T') ADVANCE(636);
      END_STATE();
    case 318:
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 319:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 320:
      if (lookahead == 'T') ADVANCE(643);
      END_STATE();
    case 321:
      if (lookahead == 'U') ADVANCE(709);
      END_STATE();
    case 322:
      if (lookahead == 'U') ADVANCE(589);
      END_STATE();
    case 323:
      if (lookahead == 'V') ADVANCE(440);
      END_STATE();
    case 324:
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '{') ADVANCE(938);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(909);
      END_STATE();
    case 325:
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '{') ADVANCE(934);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(909);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(776);
      if (lookahead == 'p') ADVANCE(679);
      if (lookahead == 's') ADVANCE(771);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(562);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 370:
      if (lookahead == 'b') ADVANCE(511);
      END_STATE();
    case 371:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 372:
      if (lookahead == 'b') ADVANCE(566);
      END_STATE();
    case 373:
      if (lookahead == 'b') ADVANCE(567);
      END_STATE();
    case 374:
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(676);
      END_STATE();
    case 375:
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 376:
      if (lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 377:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 378:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 379:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 380:
      if (lookahead == 'c') ADVANCE(720);
      END_STATE();
    case 381:
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead == 'x') ADVANCE(796);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 384:
      if (lookahead == 'c') ADVANCE(620);
      END_STATE();
    case 385:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 386:
      if (lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 387:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 388:
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 389:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 390:
      if (lookahead == 'c') ADVANCE(763);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(526);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(536);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'w') ADVANCE(514);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'o') ADVANCE(784);
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 486:
      if (lookahead == 'f') ADVANCE(488);
      END_STATE();
    case 487:
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(512);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(520);
      END_STATE();
    case 490:
      if (lookahead == 'f') ADVANCE(651);
      END_STATE();
    case 491:
      if (lookahead == 'f') ADVANCE(521);
      END_STATE();
    case 492:
      if (lookahead == 'g') ADVANCE(944);
      END_STATE();
    case 493:
      if (lookahead == 'g') ADVANCE(697);
      END_STATE();
    case 494:
      if (lookahead == 'g') ADVANCE(414);
      END_STATE();
    case 495:
      if (lookahead == 'g') ADVANCE(723);
      END_STATE();
    case 496:
      if (lookahead == 'g') ADVANCE(646);
      END_STATE();
    case 497:
      if (lookahead == 'g') ADVANCE(446);
      END_STATE();
    case 498:
      if (lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 499:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 500:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 501:
      if (lookahead == 'h') ADVANCE(645);
      END_STATE();
    case 502:
      if (lookahead == 'h') ADVANCE(639);
      END_STATE();
    case 503:
      if (lookahead == 'h') ADVANCE(652);
      END_STATE();
    case 504:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 505:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 506:
      if (lookahead == 'h') ADVANCE(453);
      END_STATE();
    case 507:
      if (lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(802);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 546:
      if (lookahead == 'k') ADVANCE(423);
      END_STATE();
    case 547:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 550:
      if (lookahead == 'l') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 551:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 552:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 554:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 569:
      if (lookahead == 'm') ADVANCE(660);
      END_STATE();
    case 570:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 571:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 572:
      if (lookahead == 'm') ADVANCE(659);
      END_STATE();
    case 573:
      if (lookahead == 'm') ADVANCE(478);
      END_STATE();
    case 574:
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    case 575:
      if (lookahead == 'm') ADVANCE(357);
      END_STATE();
    case 576:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(492);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(578);
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(757);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(422);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(661);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(653);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(665);
      END_STATE();
    case 667:
      if (lookahead == 'q') ADVANCE(775);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 668:
      if (lookahead == 'q') ADVANCE(781);
      END_STATE();
    case 669:
      if (lookahead == 'q') ADVANCE(778);
      END_STATE();
    case 670:
      if (lookahead == 'q') ADVANCE(780);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 'y') ADVANCE(550);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(800);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(944);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(769);
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(720);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(795);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 769:
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(704);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(720);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 776:
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == 'v') ADVANCE(349);
      END_STATE();
    case 777:
      if (lookahead == 'u') ADVANCE(755);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 779:
      if (lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 781:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 782:
      if (lookahead == 'u') ADVANCE(666);
      END_STATE();
    case 783:
      if (lookahead == 'v') ADVANCE(525);
      END_STATE();
    case 784:
      if (lookahead == 'v') ADVANCE(461);
      END_STATE();
    case 785:
      if (lookahead == 'v') ADVANCE(469);
      END_STATE();
    case 786:
      if (lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 787:
      if (lookahead == 'v') ADVANCE(355);
      END_STATE();
    case 788:
      if (lookahead == 'w') ADVANCE(616);
      END_STATE();
    case 789:
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 790:
      if (lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 791:
      if (lookahead == 'w') ADVANCE(332);
      END_STATE();
    case 792:
      if (lookahead == 'x') ADVANCE(654);
      END_STATE();
    case 793:
      if (lookahead == 'x') ADVANCE(795);
      END_STATE();
    case 794:
      if (lookahead == 'x') ADVANCE(747);
      END_STATE();
    case 795:
      if (lookahead == 'y') ADVANCE(944);
      END_STATE();
    case 796:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 797:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 798:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 799:
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 800:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 801:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 802:
      if (lookahead == 'z') ADVANCE(423);
      END_STATE();
    case 803:
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(839);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 804:
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 805:
      if (lookahead == '{') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(805);
      END_STATE();
    case 806:
      if (lookahead == '}') ADVANCE(950);
      END_STATE();
    case 807:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(943);
      END_STATE();
    case 808:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      END_STATE();
    case 809:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(852);
      END_STATE();
    case 810:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 992,
        '\n', 992,
        '\r', 993,
        '#', 824,
        '-', 919,
        '/', 921,
        '<', 981,
        '>', 954,
        '@', 961,
        'C', 872,
        'D', 868,
        'G', 870,
        'H', 869,
        'L', 871,
        'O', 873,
        'P', 866,
        'T', 874,
        'W', 867,
        '[', 918,
        'm', 876,
        'q', 875,
        '{', 917,
        0x2028, 108,
        0x2029, 108,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(834);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(877);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 811:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 992,
        '\n', 992,
        '\r', 993,
        '#', 824,
        '-', 920,
        '/', 921,
        '<', 980,
        '@', 961,
        'C', 872,
        'D', 868,
        'G', 870,
        'H', 869,
        'L', 871,
        'O', 873,
        'P', 866,
        'T', 874,
        'W', 867,
        '[', 924,
        '{', 923,
        0x2028, 108,
        0x2029, 108,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(834);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(877);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 812:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 909,
        '\n', 1046,
        '\r', 1047,
        '#', 828,
        '/', 937,
        '<', 951,
        '@', 959,
        'C', 902,
        'D', 892,
        'G', 893,
        'H', 898,
        'L', 900,
        'O', 904,
        'P', 890,
        'T', 906,
        'W', 894,
        '{', 938,
        '-', 941,
        '_', 941,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 813:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 909,
        '\n', 1046,
        '\r', 1047,
        '#', 828,
        '/', 937,
        '<', 951,
        '@', 959,
        'C', 903,
        'D', 895,
        'G', 896,
        'H', 899,
        'L', 901,
        'O', 905,
        'P', 891,
        'T', 907,
        'W', 897,
        '[', 940,
        '{', 939,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 814:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 909,
        '\n', 1046,
        '\r', 1047,
        '#', 828,
        '/', 937,
        '<', 951,
        '@', 959,
        'C', 903,
        'D', 895,
        'G', 896,
        'H', 899,
        'L', 901,
        'O', 905,
        'P', 891,
        'T', 907,
        'W', 897,
        '{', 938,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(909);
      END_STATE();
    case 815:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1000,
        '\n', 999,
        '\r', 1001,
        '#', 822,
        '-', 912,
        '/', 913,
        '<', 981,
        '>', 954,
        '@', 960,
        'C', 860,
        'D', 855,
        'G', 856,
        'H', 858,
        'L', 859,
        'O', 861,
        'P', 854,
        'T', 862,
        'W', 857,
        '[', 916,
        'm', 863,
        'q', 864,
        '{', 915,
        0x2028, 54,
        0x2029, 54,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(833);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(865);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 816:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1000,
        '\n', 999,
        '\r', 1001,
        '#', 822,
        '-', 912,
        '/', 913,
        '<', 981,
        '>', 954,
        '@', 960,
        'C', 860,
        'D', 855,
        'G', 856,
        'H', 858,
        'L', 859,
        'O', 861,
        'P', 854,
        'T', 862,
        'W', 857,
        '[', 911,
        'm', 863,
        'q', 864,
        '{', 910,
        0x2028, 54,
        0x2029, 54,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(833);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(865);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 817:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1003,
        '\n', 1002,
        '\r', 1003,
        '#', 825,
        '-', 927,
        '/', 928,
        '<', 982,
        '>', 954,
        '@', 962,
        'C', 884,
        'D', 880,
        'G', 882,
        'H', 881,
        'L', 883,
        'O', 885,
        'P', 878,
        'T', 886,
        'W', 879,
        '[', 926,
        'm', 888,
        'q', 887,
        '{', 925,
        0x2028, 161,
        0x2029, 161,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(835);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(889);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 818:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1003,
        '\n', 1002,
        '\r', 1003,
        '#', 825,
        '-', 927,
        '/', 928,
        '<', 982,
        '>', 954,
        '@', 962,
        'C', 884,
        'D', 880,
        'G', 882,
        'H', 881,
        'L', 883,
        'O', 885,
        'P', 878,
        'T', 886,
        'W', 879,
        '[', 932,
        'm', 888,
        'q', 887,
        '{', 931,
        0x2028, 161,
        0x2029, 161,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(835);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(889);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 819:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1003,
        '\n', 1002,
        '\r', 1003,
        '#', 825,
        '/', 928,
        '<', 952,
        '@', 962,
        'C', 884,
        'D', 880,
        'G', 882,
        'H', 881,
        'L', 883,
        'O', 885,
        'P', 878,
        'T', 886,
        'W', 879,
        '[', 926,
        '{', 925,
        0x2028, 161,
        0x2029, 161,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(835);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(889);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 820:
      if (eof) ADVANCE(821);
      ADVANCE_MAP(
        0, 1003,
        '\n', 1002,
        '\r', 1003,
        '#', 825,
        '/', 928,
        '<', 952,
        '@', 962,
        'C', 884,
        'D', 880,
        'G', 882,
        'H', 881,
        'L', 883,
        'O', 885,
        'P', 878,
        'T', 886,
        'W', 879,
        '{', 929,
        0x2028, 161,
        0x2029, 161,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(835);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(889);
      if (lookahead != 0) ADVANCE(930);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '\r') ADVANCE(827);
      if (lookahead == '#') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(823);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '\r') ADVANCE(827);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '\r') ADVANCE(826);
      if (lookahead == '#') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '\r') ADVANCE(826);
      if (lookahead == '#') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (lookahead == '\r') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '\n') ADVANCE(829);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(829);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (lookahead == '#') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(829);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__plain_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__plain_comment_token2);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__plain_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(831);
      if (lookahead == '\n') ADVANCE(830);
      if (lookahead == '\r') ADVANCE(831);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(833);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(834);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(835);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(837);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1044);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__var_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__var_comment_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__var_comment_token3);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__var_comment_token3);
      if (lookahead == '\n') ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(842);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(843);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(851);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(6);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'A') ADVANCE(148);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(145);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(1040);
      if (lookahead == 'O') ADVANCE(1035);
      if (lookahead == 'U') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead == 'U') ADVANCE(310);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(1038);
      if (lookahead == 'R') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(310);
      if (lookahead == 'R') ADVANCE(234);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(1009);
      if (lookahead == 'T') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(313);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(302);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(278);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(311);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(236);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(978);
      if (lookahead == '{') ADVANCE(947);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(978);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead == '/') ADVANCE(823);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(968);
      if (lookahead == '{') ADVANCE(947);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(966);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(968);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(966);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '{') ADVANCE(948);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(967);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(967);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(967);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '-') ADVANCE(989);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(991);
      if (lookahead == '\r') ADVANCE(990);
      if (lookahead == '{') ADVANCE(948);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(990);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(991);
      if (lookahead == '\r') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(990);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(976);
      if (lookahead == '{') ADVANCE(949);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(976);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '-') ADVANCE(985);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(826);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '{') ADVANCE(949);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1004);
      if (lookahead == '{') ADVANCE(949);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(965);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1004);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(965);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '\r') ADVANCE(953);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(953);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '{') ADVANCE(946);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(955);
      if (lookahead == '{') ADVANCE(946);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '/') ADVANCE(829);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '{') ADVANCE(946);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '{') ADVANCE(946);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1045);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(953);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(958);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      if (lookahead == '!') ADVANCE(957);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1004);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(965);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(968);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(966);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(969);
      if (lookahead == '\r') ADVANCE(967);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(967);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(969);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(969);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(996);
      if (lookahead == '\r') ADVANCE(998);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(988);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\r') ADVANCE(988);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(988);
      if (lookahead == '\r') ADVANCE(988);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(805);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(805);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(976);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(979);
      if (lookahead == '\r') ADVANCE(978);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(979);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(963);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(963);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(161);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(963);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(987);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(987);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(988);
      if (lookahead == '\n') ADVANCE(986);
      if (lookahead == '\r') ADVANCE(988);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token3);
      if (lookahead == '\n') ADVANCE(991);
      if (lookahead == '\r') ADVANCE(990);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(991);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token4);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token4);
      if (lookahead == '\n') ADVANCE(992);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(996);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(998);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if (lookahead == '\n') ADVANCE(994);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead != 0) ADVANCE(805);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_raw_body_token2);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_raw_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(995);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\r') ADVANCE(997);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_raw_body_token2);
      if (lookahead == '\n') ADVANCE(999);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1003);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1004);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(965);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(1005);
      if (lookahead == '\n') ADVANCE(1002);
      if (lookahead == '\r') ADVANCE(1005);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(1006);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(177);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(1046);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 814},
  [2] = {.lex_state = 815},
  [3] = {.lex_state = 815},
  [4] = {.lex_state = 815},
  [5] = {.lex_state = 815},
  [6] = {.lex_state = 815},
  [7] = {.lex_state = 815},
  [8] = {.lex_state = 815},
  [9] = {.lex_state = 815},
  [10] = {.lex_state = 815},
  [11] = {.lex_state = 810},
  [12] = {.lex_state = 810},
  [13] = {.lex_state = 810},
  [14] = {.lex_state = 814},
  [15] = {.lex_state = 810},
  [16] = {.lex_state = 814},
  [17] = {.lex_state = 810},
  [18] = {.lex_state = 810},
  [19] = {.lex_state = 810},
  [20] = {.lex_state = 810},
  [21] = {.lex_state = 810},
  [22] = {.lex_state = 810},
  [23] = {.lex_state = 817},
  [24] = {.lex_state = 817},
  [25] = {.lex_state = 816},
  [26] = {.lex_state = 818},
  [27] = {.lex_state = 818},
  [28] = {.lex_state = 818},
  [29] = {.lex_state = 815},
  [30] = {.lex_state = 814},
  [31] = {.lex_state = 818},
  [32] = {.lex_state = 814},
  [33] = {.lex_state = 811},
  [34] = {.lex_state = 811},
  [35] = {.lex_state = 816},
  [36] = {.lex_state = 816},
  [37] = {.lex_state = 816},
  [38] = {.lex_state = 811},
  [39] = {.lex_state = 815},
  [40] = {.lex_state = 815},
  [41] = {.lex_state = 815},
  [42] = {.lex_state = 815},
  [43] = {.lex_state = 815},
  [44] = {.lex_state = 815},
  [45] = {.lex_state = 815},
  [46] = {.lex_state = 815},
  [47] = {.lex_state = 815},
  [48] = {.lex_state = 815},
  [49] = {.lex_state = 815},
  [50] = {.lex_state = 815},
  [51] = {.lex_state = 815},
  [52] = {.lex_state = 815},
  [53] = {.lex_state = 815},
  [54] = {.lex_state = 815},
  [55] = {.lex_state = 815},
  [56] = {.lex_state = 812},
  [57] = {.lex_state = 812},
  [58] = {.lex_state = 812},
  [59] = {.lex_state = 812},
  [60] = {.lex_state = 812},
  [61] = {.lex_state = 812},
  [62] = {.lex_state = 812},
  [63] = {.lex_state = 812},
  [64] = {.lex_state = 812},
  [65] = {.lex_state = 811},
  [66] = {.lex_state = 811},
  [67] = {.lex_state = 811},
  [68] = {.lex_state = 811},
  [69] = {.lex_state = 811},
  [70] = {.lex_state = 812},
  [71] = {.lex_state = 811},
  [72] = {.lex_state = 812},
  [73] = {.lex_state = 811},
  [74] = {.lex_state = 812},
  [75] = {.lex_state = 812},
  [76] = {.lex_state = 812},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 819},
  [86] = {.lex_state = 819},
  [87] = {.lex_state = 820},
  [88] = {.lex_state = 820},
  [89] = {.lex_state = 820},
  [90] = {.lex_state = 820},
  [91] = {.lex_state = 813},
  [92] = {.lex_state = 813},
  [93] = {.lex_state = 812},
  [94] = {.lex_state = 812},
  [95] = {.lex_state = 812},
  [96] = {.lex_state = 812},
  [97] = {.lex_state = 812},
  [98] = {.lex_state = 813},
  [99] = {.lex_state = 813},
  [100] = {.lex_state = 812},
  [101] = {.lex_state = 812},
  [102] = {.lex_state = 812},
  [103] = {.lex_state = 812},
  [104] = {.lex_state = 812},
  [105] = {.lex_state = 812},
  [106] = {.lex_state = 812},
  [107] = {.lex_state = 812},
  [108] = {.lex_state = 812},
  [109] = {.lex_state = 814},
  [110] = {.lex_state = 814},
  [111] = {.lex_state = 814},
  [112] = {.lex_state = 814},
  [113] = {.lex_state = 814},
  [114] = {.lex_state = 814},
  [115] = {.lex_state = 814},
  [116] = {.lex_state = 814},
  [117] = {.lex_state = 814},
  [118] = {.lex_state = 814},
  [119] = {.lex_state = 814},
  [120] = {.lex_state = 814},
  [121] = {.lex_state = 814},
  [122] = {.lex_state = 814},
  [123] = {.lex_state = 814},
  [124] = {.lex_state = 814},
  [125] = {.lex_state = 814},
  [126] = {.lex_state = 814},
  [127] = {.lex_state = 814},
  [128] = {.lex_state = 814},
  [129] = {.lex_state = 814},
  [130] = {.lex_state = 814},
  [131] = {.lex_state = 814},
  [132] = {.lex_state = 814},
  [133] = {.lex_state = 814},
  [134] = {.lex_state = 814},
  [135] = {.lex_state = 814},
  [136] = {.lex_state = 814},
  [137] = {.lex_state = 814},
  [138] = {.lex_state = 814},
  [139] = {.lex_state = 814},
  [140] = {.lex_state = 814},
  [141] = {.lex_state = 814},
  [142] = {.lex_state = 814},
  [143] = {.lex_state = 814},
  [144] = {.lex_state = 814},
  [145] = {.lex_state = 814},
  [146] = {.lex_state = 814},
  [147] = {.lex_state = 814},
  [148] = {.lex_state = 814},
  [149] = {.lex_state = 814},
  [150] = {.lex_state = 814},
  [151] = {.lex_state = 814},
  [152] = {.lex_state = 814},
  [153] = {.lex_state = 814},
  [154] = {.lex_state = 814},
  [155] = {.lex_state = 814},
  [156] = {.lex_state = 814},
  [157] = {.lex_state = 814},
  [158] = {.lex_state = 814},
  [159] = {.lex_state = 814},
  [160] = {.lex_state = 814},
  [161] = {.lex_state = 814},
  [162] = {.lex_state = 814},
  [163] = {.lex_state = 814},
  [164] = {.lex_state = 814},
  [165] = {.lex_state = 814},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 325},
  [168] = {.lex_state = 165},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 325},
  [171] = {.lex_state = 166},
  [172] = {.lex_state = 166},
  [173] = {.lex_state = 166},
  [174] = {.lex_state = 166},
  [175] = {.lex_state = 803},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 164},
  [178] = {.lex_state = 164},
  [179] = {.lex_state = 803},
  [180] = {.lex_state = 803},
  [181] = {.lex_state = 166},
  [182] = {.lex_state = 803},
  [183] = {.lex_state = 803},
  [184] = {.lex_state = 803},
  [185] = {.lex_state = 803},
  [186] = {.lex_state = 166},
  [187] = {.lex_state = 324},
  [188] = {.lex_state = 166},
  [189] = {.lex_state = 166},
  [190] = {.lex_state = 167},
  [191] = {.lex_state = 324},
  [192] = {.lex_state = 804},
  [193] = {.lex_state = 804},
  [194] = {.lex_state = 804},
  [195] = {.lex_state = 166},
  [196] = {.lex_state = 804},
  [197] = {.lex_state = 804},
  [198] = {.lex_state = 324},
  [199] = {.lex_state = 804},
  [200] = {.lex_state = 324},
  [201] = {.lex_state = 804},
  [202] = {.lex_state = 167},
  [203] = {.lex_state = 164},
  [204] = {.lex_state = 164},
  [205] = {.lex_state = 164},
  [206] = {.lex_state = 164},
  [207] = {.lex_state = 167},
  [208] = {.lex_state = 167},
  [209] = {.lex_state = 166},
  [210] = {.lex_state = 167},
  [211] = {.lex_state = 803},
  [212] = {.lex_state = 167},
  [213] = {.lex_state = 166},
  [214] = {.lex_state = 166},
  [215] = {.lex_state = 166},
  [216] = {.lex_state = 803},
  [217] = {.lex_state = 112},
  [218] = {.lex_state = 112},
  [219] = {.lex_state = 112},
  [220] = {.lex_state = 166},
  [221] = {.lex_state = 112},
  [222] = {.lex_state = 168},
  [223] = {.lex_state = 166},
  [224] = {.lex_state = 168},
  [225] = {.lex_state = 112},
  [226] = {.lex_state = 112},
  [227] = {.lex_state = 174},
  [228] = {.lex_state = 174},
  [229] = {.lex_state = 174},
  [230] = {.lex_state = 166},
  [231] = {.lex_state = 174},
  [232] = {.lex_state = 112},
  [233] = {.lex_state = 112},
  [234] = {.lex_state = 174},
  [235] = {.lex_state = 168},
  [236] = {.lex_state = 175},
  [237] = {.lex_state = 174},
  [238] = {.lex_state = 166},
  [239] = {.lex_state = 176},
  [240] = {.lex_state = 174},
  [241] = {.lex_state = 169},
  [242] = {.lex_state = 166},
  [243] = {.lex_state = 174},
  [244] = {.lex_state = 175},
  [245] = {.lex_state = 814},
  [246] = {.lex_state = 174},
  [247] = {.lex_state = 174},
  [248] = {.lex_state = 174},
  [249] = {.lex_state = 174},
  [250] = {.lex_state = 166},
  [251] = {.lex_state = 166},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 174},
  [254] = {.lex_state = 174},
  [255] = {.lex_state = 175},
  [256] = {.lex_state = 169},
  [257] = {.lex_state = 174},
  [258] = {.lex_state = 166},
  [259] = {.lex_state = 174},
  [260] = {.lex_state = 166},
  [261] = {.lex_state = 169},
  [262] = {.lex_state = 174},
  [263] = {.lex_state = 174},
  [264] = {.lex_state = 169},
  [265] = {.lex_state = 174},
  [266] = {.lex_state = 166},
  [267] = {.lex_state = 174},
  [268] = {.lex_state = 175},
  [269] = {.lex_state = 175},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 166},
  [272] = {.lex_state = 165},
  [273] = {.lex_state = 175},
  [274] = {.lex_state = 174},
  [275] = {.lex_state = 165},
  [276] = {.lex_state = 175},
  [277] = {.lex_state = 814},
  [278] = {.lex_state = 175},
  [279] = {.lex_state = 165},
  [280] = {.lex_state = 165},
  [281] = {.lex_state = 165},
  [282] = {.lex_state = 175},
  [283] = {.lex_state = 174},
  [284] = {.lex_state = 108},
  [285] = {.lex_state = 173},
  [286] = {.lex_state = 165},
  [287] = {.lex_state = 174},
  [288] = {.lex_state = 173},
  [289] = {.lex_state = 174},
  [290] = {.lex_state = 174},
  [291] = {.lex_state = 165},
  [292] = {.lex_state = 814},
  [293] = {.lex_state = 814},
  [294] = {.lex_state = 108},
  [295] = {.lex_state = 814},
  [296] = {.lex_state = 165},
  [297] = {.lex_state = 176},
  [298] = {.lex_state = 165},
  [299] = {.lex_state = 174},
  [300] = {.lex_state = 165},
  [301] = {.lex_state = 173},
  [302] = {.lex_state = 176},
  [303] = {.lex_state = 165},
  [304] = {.lex_state = 165},
  [305] = {.lex_state = 174},
  [306] = {.lex_state = 174},
  [307] = {.lex_state = 165},
  [308] = {.lex_state = 174},
  [309] = {.lex_state = 165},
  [310] = {.lex_state = 173},
  [311] = {.lex_state = 814},
  [312] = {.lex_state = 814},
  [313] = {.lex_state = 165},
  [314] = {.lex_state = 174},
  [315] = {.lex_state = 174},
  [316] = {.lex_state = 165},
  [317] = {.lex_state = 176},
  [318] = {.lex_state = 165},
  [319] = {.lex_state = 165},
  [320] = {.lex_state = 165},
  [321] = {.lex_state = 165},
  [322] = {.lex_state = 165},
  [323] = {.lex_state = 173},
  [324] = {.lex_state = 173},
  [325] = {.lex_state = 173},
  [326] = {.lex_state = 814},
  [327] = {.lex_state = 165},
  [328] = {.lex_state = 173},
  [329] = {.lex_state = 173},
  [330] = {.lex_state = 814},
  [331] = {.lex_state = 173},
  [332] = {.lex_state = 165},
  [333] = {.lex_state = 173},
  [334] = {.lex_state = 173},
  [335] = {.lex_state = 176},
  [336] = {.lex_state = 175},
  [337] = {.lex_state = 173},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 165},
  [340] = {.lex_state = 176},
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
    [anon_sym_DASH_DASH2] = ACTIONS(1),
    [aux_sym_multipart_form_data_token3] = ACTIONS(1),
    [aux_sym_multipart_form_data_token4] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(338),
    [sym_comment] = STATE(32),
    [sym__plain_comment] = STATE(160),
    [sym__var_comment] = STATE(162),
    [sym_request_separator] = STATE(30),
    [sym_section] = STATE(16),
    [sym__section_content] = STATE(163),
    [sym_http_version] = STATE(330),
    [sym_target_url] = STATE(271),
    [sym_response] = STATE(110),
    [sym_request] = STATE(109),
    [sym_variable] = STATE(172),
    [sym_pre_request_script] = STATE(32),
    [sym_variable_declaration] = STATE(32),
    [sym__blank_line] = STATE(32),
    [aux_sym_document_repeat1] = STATE(16),
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
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(29), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(6), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
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
  [77] = 20,
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
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(55), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(29), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(9), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
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
  [154] = 20,
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
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(61), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(29), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(7), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
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
  [231] = 20,
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
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(67), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(29), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    STATE(10), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
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
  [308] = 17,
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
    ACTIONS(75), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(8), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(73), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [377] = 17,
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
    ACTIONS(75), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(8), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(79), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [446] = 17,
    ACTIONS(83), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(88), 1,
      aux_sym__var_comment_token3,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(94), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(97), 1,
      aux_sym_xml_body_token1,
    ACTIONS(100), 1,
      aux_sym_json_body_token1,
    ACTIONS(103), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(106), 1,
      anon_sym_LT2,
    ACTIONS(109), 1,
      anon_sym_DASH_DASH,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(112), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(8), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(86), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [515] = 17,
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
    ACTIONS(75), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(8), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(117), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [584] = 17,
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
    ACTIONS(75), 1,
      aux_sym__var_comment_token3,
    STATE(25), 1,
      sym_graphql_data,
    STATE(40), 1,
      sym__var_comment,
    STATE(272), 1,
      sym_external_body,
    ACTIONS(49), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(8), 3,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym___body_repeat2,
    STATE(41), 6,
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
  [653] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(125), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(131), 1,
      aux_sym_multipart_form_data_token4,
    STATE(17), 1,
      sym__plain_comment,
    STATE(18), 1,
      sym__var_comment,
    STATE(260), 1,
      sym_external_body,
    STATE(12), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(129), 4,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(127), 13,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [706] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(125), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(139), 1,
      aux_sym_multipart_form_data_token4,
    STATE(17), 1,
      sym__plain_comment,
    STATE(18), 1,
      sym__var_comment,
    STATE(260), 1,
      sym_external_body,
    STATE(13), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(137), 4,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(135), 13,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [759] = 10,
    ACTIONS(143), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(148), 1,
      anon_sym_LT2,
    ACTIONS(154), 1,
      aux_sym_multipart_form_data_token4,
    STATE(17), 1,
      sym__plain_comment,
    STATE(18), 1,
      sym__var_comment,
    STATE(260), 1,
      sym_external_body,
    STATE(13), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(151), 4,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(146), 13,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [812] = 22,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(162), 1,
      aux_sym__var_comment_token1,
    ACTIONS(165), 1,
      aux_sym_request_separator_token1,
    ACTIONS(168), 1,
      sym_method,
    ACTIONS(171), 1,
      aux_sym_http_version_token1,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_AT2,
    ACTIONS(186), 1,
      aux_sym__blank_line_token1,
    STATE(30), 1,
      sym_request_separator,
    STATE(109), 1,
      sym_request,
    STATE(110), 1,
      sym_response,
    STATE(160), 1,
      sym__plain_comment,
    STATE(162), 1,
      sym__var_comment,
    STATE(163), 1,
      sym__section_content,
    STATE(172), 1,
      sym_variable,
    STATE(271), 1,
      sym_target_url,
    STATE(330), 1,
      sym_http_version,
    ACTIONS(174), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(14), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(32), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [884] = 2,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(146), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [916] = 22,
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
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_request_separator,
    STATE(109), 1,
      sym_request,
    STATE(110), 1,
      sym_response,
    STATE(160), 1,
      sym__plain_comment,
    STATE(162), 1,
      sym__var_comment,
    STATE(163), 1,
      sym__section_content,
    STATE(172), 1,
      sym_variable,
    STATE(271), 1,
      sym_target_url,
    STATE(330), 1,
      sym_http_version,
    ACTIONS(15), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(14), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(32), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [988] = 2,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(193), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1020] = 2,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(197), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1052] = 2,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(201), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1084] = 2,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(205), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1116] = 2,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(209), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1148] = 2,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token4,
    ACTIONS(213), 19,
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
      aux_sym_multipart_form_data_token2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1180] = 5,
    ACTIONS(217), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(222), 1,
      aux_sym__raw_body_token1,
    STATE(37), 1,
      sym__raw_body,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(220), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1216] = 5,
    ACTIONS(222), 1,
      aux_sym__raw_body_token1,
    ACTIONS(226), 1,
      aux_sym__plain_comment_token1,
    STATE(36), 1,
      sym__raw_body,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(229), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1252] = 4,
    ACTIONS(235), 1,
      aux_sym_graphql_json_body_token1,
    STATE(47), 1,
      sym_graphql_json_body,
    ACTIONS(231), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(233), 16,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1285] = 5,
    ACTIONS(237), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    STATE(52), 1,
      sym__raw_body,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(220), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1320] = 5,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(242), 1,
      aux_sym__plain_comment_token1,
    STATE(39), 1,
      sym__raw_body,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(229), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1355] = 5,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(247), 1,
      aux_sym__plain_comment_token1,
    STATE(46), 1,
      sym__raw_body,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(250), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1390] = 5,
    ACTIONS(256), 1,
      aux_sym__var_comment_token1,
    ACTIONS(259), 1,
      aux_sym__blank_line_token1,
    STATE(29), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(254), 13,
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
      aux_sym_raw_body_token2,
  [1425] = 19,
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
    STATE(109), 1,
      sym_request,
    STATE(110), 1,
      sym_response,
    STATE(134), 1,
      sym__section_content,
    STATE(160), 1,
      sym__plain_comment,
    STATE(162), 1,
      sym__var_comment,
    STATE(172), 1,
      sym_variable,
    STATE(271), 1,
      sym_target_url,
    STATE(330), 1,
      sym_http_version,
    ACTIONS(15), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(32), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [1488] = 5,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(266), 1,
      aux_sym__plain_comment_token1,
    STATE(49), 1,
      sym__raw_body,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(269), 18,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1523] = 19,
    ACTIONS(273), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(276), 1,
      aux_sym__var_comment_token1,
    ACTIONS(279), 1,
      sym_method,
    ACTIONS(282), 1,
      aux_sym_http_version_token1,
    ACTIONS(288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_AT2,
    ACTIONS(297), 1,
      aux_sym__blank_line_token1,
    STATE(109), 1,
      sym_request,
    STATE(110), 1,
      sym_response,
    STATE(131), 1,
      sym__section_content,
    STATE(160), 1,
      sym__plain_comment,
    STATE(162), 1,
      sym__var_comment,
    STATE(172), 1,
      sym_variable,
    STATE(271), 1,
      sym_target_url,
    STATE(330), 1,
      sym_http_version,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(285), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(32), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [1586] = 10,
    ACTIONS(300), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(302), 1,
      anon_sym_LT2,
    STATE(65), 1,
      sym__plain_comment,
    STATE(66), 1,
      sym__var_comment,
    STATE(251), 1,
      sym_external_body,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(304), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
    STATE(38), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(306), 3,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
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
  [1630] = 10,
    ACTIONS(308), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(311), 1,
      anon_sym_LT2,
    STATE(65), 1,
      sym__plain_comment,
    STATE(66), 1,
      sym__var_comment,
    STATE(251), 1,
      sym_external_body,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(314), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
    STATE(34), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(317), 3,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(146), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1674] = 2,
    ACTIONS(320), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(322), 16,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1702] = 2,
    ACTIONS(324), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(326), 16,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1730] = 2,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(229), 16,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1758] = 10,
    ACTIONS(300), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(302), 1,
      anon_sym_LT2,
    STATE(65), 1,
      sym__plain_comment,
    STATE(66), 1,
      sym__var_comment,
    STATE(251), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(328), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
    STATE(34), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(330), 3,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
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
  [1802] = 2,
    ACTIONS(324), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(326), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1829] = 2,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(334), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1856] = 2,
    ACTIONS(336), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(338), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1883] = 2,
    ACTIONS(340), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(342), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1910] = 2,
    ACTIONS(344), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(346), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1937] = 2,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(350), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1964] = 2,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(354), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [1991] = 2,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(269), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2018] = 2,
    ACTIONS(356), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(358), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2045] = 2,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(362), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2072] = 2,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(366), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2099] = 2,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
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
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2126] = 2,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
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
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2153] = 2,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(229), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2180] = 2,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(205), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2207] = 2,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(209), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2234] = 2,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(213), 15,
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
      aux_sym_raw_body_token2,
      aux_sym__blank_line_token1,
  [2261] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(388), 1,
      aux_sym__blank_line_token1,
    STATE(77), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(382), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2308] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(394), 1,
      aux_sym__blank_line_token1,
    STATE(82), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(61), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(392), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(390), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2355] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(400), 1,
      aux_sym__blank_line_token1,
    STATE(83), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(398), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2402] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(406), 1,
      aux_sym__blank_line_token1,
    STATE(81), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(56), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(404), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(402), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2449] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(412), 1,
      aux_sym__blank_line_token1,
    STATE(84), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(63), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(410), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2496] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(418), 1,
      aux_sym__blank_line_token1,
    STATE(80), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(416), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2543] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(424), 1,
      aux_sym__blank_line_token1,
    STATE(78), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(58), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(422), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(420), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2590] = 13,
    ACTIONS(378), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(380), 1,
      aux_sym__var_comment_token1,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(430), 1,
      aux_sym__blank_line_token1,
    STATE(79), 1,
      sym__blank_line,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(428), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(426), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2637] = 10,
    ACTIONS(434), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(439), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(442), 1,
      sym_header_entity,
    STATE(94), 1,
      sym__plain_comment,
    STATE(95), 1,
      sym__var_comment,
    STATE(103), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(437), 4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(432), 6,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2677] = 2,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(193), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2700] = 2,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(197), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2723] = 2,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(201), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2746] = 2,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(146), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2769] = 2,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(205), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2792] = 10,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(449), 1,
      aux_sym__var_comment_token1,
    ACTIONS(451), 1,
      aux_sym__blank_line_token1,
    STATE(76), 1,
      aux_sym_response_repeat1,
    STATE(101), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(3), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(447), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(445), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2831] = 2,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(213), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2854] = 10,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(449), 1,
      aux_sym__var_comment_token1,
    ACTIONS(457), 1,
      aux_sym__blank_line_token1,
    STATE(70), 1,
      aux_sym_response_repeat1,
    STATE(101), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(4), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(455), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(453), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2893] = 2,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH2,
      aux_sym_multipart_form_data_token3,
      aux_sym_multipart_form_data_token4,
    ACTIONS(209), 12,
      aux_sym__plain_comment_token1,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_multipart_form_data_token2,
      aux_sym__blank_line_token1,
  [2916] = 10,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(449), 1,
      aux_sym__var_comment_token1,
    ACTIONS(459), 1,
      aux_sym__blank_line_token1,
    STATE(75), 1,
      aux_sym_response_repeat1,
    STATE(101), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(5), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(63), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2955] = 10,
    ACTIONS(384), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_header_entity,
    ACTIONS(449), 1,
      aux_sym__var_comment_token1,
    ACTIONS(465), 1,
      aux_sym__blank_line_token1,
    STATE(76), 1,
      aux_sym_response_repeat1,
    STATE(101), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    STATE(2), 2,
      sym__blank_line,
      aux_sym___body_repeat1,
    ACTIONS(463), 4,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(461), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [2994] = 7,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(474), 1,
      sym_header_entity,
    STATE(76), 1,
      aux_sym_response_repeat1,
    STATE(101), 1,
      sym_header,
    STATE(254), 1,
      sym_variable,
    ACTIONS(469), 5,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LT,
      anon_sym_AT2,
  [3025] = 15,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(119), 1,
      sym_xml_body,
    STATE(120), 1,
      sym_json_body,
    STATE(121), 1,
      sym_graphql_body,
    STATE(122), 1,
      sym__external_body,
    STATE(123), 1,
      sym_multipart_form_data,
    STATE(124), 1,
      sym_raw_body,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
  [3072] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(128), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [3109] = 15,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(151), 1,
      sym_xml_body,
    STATE(152), 1,
      sym_json_body,
    STATE(153), 1,
      sym_graphql_body,
    STATE(154), 1,
      sym__external_body,
    STATE(155), 1,
      sym_multipart_form_data,
    STATE(156), 1,
      sym_raw_body,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
  [3156] = 15,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(135), 1,
      sym_xml_body,
    STATE(136), 1,
      sym_graphql_body,
    STATE(137), 1,
      sym__external_body,
    STATE(138), 1,
      sym_multipart_form_data,
    STATE(139), 1,
      sym_raw_body,
    STATE(165), 1,
      sym_json_body,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
  [3203] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(161), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [3240] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(126), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [3277] = 15,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(143), 1,
      sym_xml_body,
    STATE(144), 1,
      sym_json_body,
    STATE(145), 1,
      sym_graphql_body,
    STATE(146), 1,
      sym__external_body,
    STATE(147), 1,
      sym_multipart_form_data,
    STATE(148), 1,
      sym_raw_body,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
  [3324] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(477), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(479), 1,
      aux_sym_xml_body_token1,
    ACTIONS(481), 1,
      aux_sym_json_body_token1,
    ACTIONS(483), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(91), 1,
      sym_graphql_data,
    STATE(304), 1,
      sym_external_body,
    ACTIONS(487), 2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    STATE(150), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [3361] = 5,
    ACTIONS(489), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(492), 1,
      aux_sym__raw_body_token1,
    STATE(99), 1,
      sym__raw_body,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(229), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3387] = 5,
    ACTIONS(492), 1,
      aux_sym__raw_body_token1,
    ACTIONS(494), 1,
      aux_sym__plain_comment_token1,
    STATE(98), 1,
      sym__raw_body,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(220), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3413] = 5,
    ACTIONS(497), 1,
      aux_sym__plain_comment_token1,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    STATE(116), 1,
      sym__raw_body,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(250), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3438] = 5,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(502), 1,
      aux_sym__plain_comment_token1,
    STATE(130), 1,
      sym__raw_body,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(220), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3463] = 5,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(505), 1,
      aux_sym__plain_comment_token1,
    STATE(129), 1,
      sym__raw_body,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(269), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3488] = 5,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(508), 1,
      aux_sym__plain_comment_token1,
    STATE(149), 1,
      sym__raw_body,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(229), 9,
      aux_sym__var_comment_token1,
      sym_method,
      aux_sym_http_version_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3513] = 4,
    ACTIONS(511), 1,
      aux_sym_graphql_json_body_token1,
    STATE(117), 1,
      sym_graphql_json_body,
    ACTIONS(233), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3536] = 2,
    ACTIONS(322), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_graphql_json_body_token1,
  [3554] = 2,
    ACTIONS(213), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3572] = 2,
    ACTIONS(193), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3590] = 2,
    ACTIONS(197), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3608] = 2,
    ACTIONS(201), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3626] = 2,
    ACTIONS(205), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3644] = 2,
    ACTIONS(229), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_graphql_json_body_token1,
  [3662] = 2,
    ACTIONS(326), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_graphql_json_body_token1,
  [3680] = 2,
    ACTIONS(515), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3698] = 2,
    ACTIONS(519), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(517), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3716] = 2,
    ACTIONS(523), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3734] = 2,
    ACTIONS(527), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(525), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3752] = 2,
    ACTIONS(531), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(529), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3770] = 2,
    ACTIONS(535), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(533), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3788] = 2,
    ACTIONS(539), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(537), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3806] = 2,
    ACTIONS(543), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3824] = 2,
    ACTIONS(209), 6,
      aux_sym__plain_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3842] = 2,
    ACTIONS(547), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(545), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3859] = 2,
    ACTIONS(551), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(549), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3876] = 2,
    ACTIONS(201), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3893] = 2,
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
  [3910] = 2,
    ACTIONS(350), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3927] = 2,
    ACTIONS(354), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3944] = 2,
    ACTIONS(555), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(553), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3961] = 2,
    ACTIONS(269), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3978] = 2,
    ACTIONS(358), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(356), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [3995] = 2,
    ACTIONS(362), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4012] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4029] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4046] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4063] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4080] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4097] = 2,
    ACTIONS(559), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(557), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4114] = 2,
    ACTIONS(209), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4131] = 2,
    ACTIONS(563), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(561), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4148] = 2,
    ACTIONS(567), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(565), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4165] = 2,
    ACTIONS(571), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(569), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4182] = 2,
    ACTIONS(366), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4199] = 2,
    ACTIONS(229), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4216] = 2,
    ACTIONS(575), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(573), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4233] = 2,
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
  [4250] = 2,
    ACTIONS(213), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4267] = 2,
    ACTIONS(579), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(577), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4284] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4301] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4318] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4335] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4352] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4369] = 2,
    ACTIONS(587), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(585), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4386] = 2,
    ACTIONS(591), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(589), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4403] = 2,
    ACTIONS(595), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(593), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4420] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4437] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4454] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4471] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4488] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4505] = 2,
    ACTIONS(599), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(597), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4522] = 2,
    ACTIONS(326), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4539] = 2,
    ACTIONS(603), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(601), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4556] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4573] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4590] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4607] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4624] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4641] = 2,
    ACTIONS(607), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(605), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4658] = 2,
    ACTIONS(205), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4675] = 2,
    ACTIONS(611), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(609), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4692] = 2,
    ACTIONS(615), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(613), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4709] = 2,
    ACTIONS(193), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4726] = 2,
    ACTIONS(619), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(617), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4743] = 2,
    ACTIONS(197), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4760] = 2,
    ACTIONS(623), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(621), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4777] = 2,
    ACTIONS(627), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(625), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4794] = 2,
    ACTIONS(583), 4,
      aux_sym__plain_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(581), 8,
      ts_builtin_sym_end,
      aux_sym__var_comment_token1,
      aux_sym_request_separator_token1,
      sym_method,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4811] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      aux_sym__var_comment_token2,
    ACTIONS(633), 1,
      aux_sym__var_comment_token3,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    STATE(303), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4835] = 6,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(637), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(202), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(336), 2,
      sym_script,
      sym_path,
  [4857] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(645), 1,
      aux_sym__var_comment_token2,
    ACTIONS(647), 1,
      aux_sym__var_comment_token3,
    STATE(327), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4881] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(649), 1,
      aux_sym__var_comment_token2,
    ACTIONS(651), 1,
      aux_sym__var_comment_token3,
    STATE(300), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4905] = 6,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(637), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(202), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(276), 2,
      sym_script,
      sym_path,
  [4927] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(653), 1,
      aux_sym__var_comment_token3,
    STATE(319), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4948] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(655), 1,
      aux_sym__var_comment_token1,
    ACTIONS(658), 1,
      aux_sym__var_comment_token3,
    ACTIONS(661), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(663), 1,
      aux_sym__target_url_line_token2,
    STATE(223), 1,
      aux_sym_target_url_repeat1,
    STATE(173), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4971] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(665), 1,
      aux_sym__var_comment_token1,
    ACTIONS(668), 1,
      aux_sym__var_comment_token3,
    ACTIONS(671), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(673), 1,
      aux_sym__target_url_line_token2,
    STATE(220), 1,
      aux_sym_target_url_repeat1,
    STATE(188), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [4994] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(675), 1,
      aux_sym__var_comment_token3,
    STATE(291), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5015] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(677), 1,
      aux_sym__var_comment_token2,
    STATE(280), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5036] = 2,
    ACTIONS(374), 3,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym_raw_body_token2,
    ACTIONS(372), 5,
      aux_sym__plain_comment_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
  [5049] = 5,
    ACTIONS(683), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(679), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
    ACTIONS(681), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(178), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5068] = 5,
    ACTIONS(692), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(695), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(687), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
    ACTIONS(689), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(178), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5087] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(698), 1,
      aux_sym__var_comment_token2,
    STATE(313), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5108] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(700), 1,
      aux_sym__var_comment_token2,
    STATE(281), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5129] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(633), 1,
      aux_sym__var_comment_token3,
    STATE(303), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5150] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(702), 1,
      aux_sym__var_comment_token2,
    STATE(296), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5171] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(704), 1,
      aux_sym__var_comment_token2,
    STATE(307), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5192] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(706), 1,
      aux_sym__var_comment_token2,
    STATE(316), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5213] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(708), 1,
      aux_sym__var_comment_token2,
    STATE(320), 1,
      sym_value,
    ACTIONS(629), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token2,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5234] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(673), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(710), 1,
      aux_sym__var_comment_token3,
    ACTIONS(671), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(188), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5252] = 5,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(714), 1,
      aux_sym__target_url_line_token2,
    STATE(266), 1,
      sym_path,
    ACTIONS(712), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5270] = 5,
    ACTIONS(719), 1,
      aux_sym__var_comment_token3,
    ACTIONS(721), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(724), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(716), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(188), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5288] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(727), 1,
      aux_sym__var_comment_token1,
    ACTIONS(730), 1,
      aux_sym__var_comment_token3,
    ACTIONS(732), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(734), 1,
      aux_sym__target_url_line_token2,
    STATE(195), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5308] = 5,
    ACTIONS(739), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(742), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(736), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5326] = 5,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(714), 1,
      aux_sym__target_url_line_token2,
    STATE(242), 1,
      sym_path,
    ACTIONS(712), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5344] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(281), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5362] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(321), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5380] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(286), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5398] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(671), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(673), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(747), 1,
      aux_sym__var_comment_token1,
    ACTIONS(750), 1,
      aux_sym__var_comment_token3,
    STATE(188), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5418] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(332), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5436] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(298), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5454] = 5,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(714), 1,
      aux_sym__target_url_line_token2,
    STATE(250), 1,
      sym_path,
    ACTIONS(712), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5472] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(309), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5490] = 5,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(273), 1,
      sym_path,
    ACTIONS(637), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(202), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5508] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      aux_sym__target_url_line_token2,
    STATE(318), 1,
      sym_value,
    ACTIONS(635), 2,
      aux_sym__var_comment_token1,
      aux_sym__target_url_line_token1,
    STATE(186), 2,
      sym_variable,
      aux_sym__target_url_line_repeat1,
  [5526] = 5,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(756), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(752), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [5544] = 2,
    ACTIONS(760), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(758), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5555] = 2,
    ACTIONS(764), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(762), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5566] = 2,
    ACTIONS(768), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(766), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5577] = 2,
    ACTIONS(772), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(770), 5,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5588] = 2,
    ACTIONS(764), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(762), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5598] = 2,
    ACTIONS(760), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(758), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5608] = 2,
    ACTIONS(760), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(758), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5618] = 2,
    ACTIONS(772), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(770), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5628] = 5,
    ACTIONS(15), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(774), 1,
      aux_sym__target_url_line_token1,
    STATE(172), 1,
      sym_variable,
    STATE(258), 1,
      sym_target_url,
  [5644] = 2,
    ACTIONS(768), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(766), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [5654] = 2,
    ACTIONS(772), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(770), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5664] = 2,
    ACTIONS(768), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(766), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5674] = 2,
    ACTIONS(764), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(762), 4,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [5684] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(776), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(778), 1,
      aux_sym__target_url_line_token2,
    STATE(189), 1,
      sym_variable,
  [5697] = 3,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(780), 1,
      aux_sym__plain_comment_token1,
    STATE(132), 1,
      sym__raw_body,
  [5707] = 3,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(780), 1,
      aux_sym__plain_comment_token1,
    STATE(113), 1,
      sym__raw_body,
  [5717] = 3,
    ACTIONS(500), 1,
      aux_sym__raw_body_token1,
    ACTIONS(780), 1,
      aux_sym__plain_comment_token1,
    STATE(114), 1,
      sym__raw_body,
  [5727] = 3,
    ACTIONS(782), 1,
      aux_sym__var_comment_token1,
    ACTIONS(784), 1,
      aux_sym__var_comment_token3,
    STATE(230), 1,
      aux_sym_target_url_repeat1,
  [5737] = 3,
    ACTIONS(492), 1,
      aux_sym__raw_body_token1,
    ACTIONS(787), 1,
      aux_sym__plain_comment_token1,
    STATE(92), 1,
      sym__raw_body,
  [5747] = 3,
    ACTIONS(789), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(791), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(224), 1,
      aux_sym_script_repeat1,
  [5757] = 3,
    ACTIONS(668), 1,
      aux_sym__var_comment_token3,
    ACTIONS(793), 1,
      aux_sym__var_comment_token1,
    STATE(230), 1,
      aux_sym_target_url_repeat1,
  [5767] = 3,
    ACTIONS(795), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(798), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(224), 1,
      aux_sym_script_repeat1,
  [5777] = 3,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(800), 1,
      aux_sym__plain_comment_token1,
    STATE(44), 1,
      sym__raw_body,
  [5787] = 3,
    ACTIONS(222), 1,
      aux_sym__raw_body_token1,
    ACTIONS(802), 1,
      aux_sym__plain_comment_token1,
    STATE(35), 1,
      sym__raw_body,
  [5797] = 2,
    ACTIONS(806), 1,
      aux_sym__var_comment_token3,
    ACTIONS(804), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5805] = 2,
    ACTIONS(810), 1,
      aux_sym__var_comment_token3,
    ACTIONS(808), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5813] = 2,
    ACTIONS(814), 1,
      aux_sym__var_comment_token3,
    ACTIONS(812), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5821] = 3,
    ACTIONS(816), 1,
      aux_sym__var_comment_token1,
    ACTIONS(818), 1,
      aux_sym__var_comment_token3,
    STATE(230), 1,
      aux_sym_target_url_repeat1,
  [5831] = 2,
    ACTIONS(823), 1,
      aux_sym__var_comment_token3,
    ACTIONS(821), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5839] = 3,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(800), 1,
      aux_sym__plain_comment_token1,
    STATE(45), 1,
      sym__raw_body,
  [5849] = 3,
    ACTIONS(240), 1,
      aux_sym__raw_body_token1,
    ACTIONS(800), 1,
      aux_sym__plain_comment_token1,
    STATE(50), 1,
      sym__raw_body,
  [5859] = 2,
    ACTIONS(827), 1,
      aux_sym__var_comment_token3,
    ACTIONS(825), 2,
      aux_sym__var_comment_token1,
      anon_sym_EQ,
  [5867] = 3,
    ACTIONS(829), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(831), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(222), 1,
      aux_sym_script_repeat1,
  [5877] = 2,
    ACTIONS(833), 1,
      aux_sym__var_comment_token1,
    ACTIONS(835), 1,
      sym_identifier,
  [5884] = 2,
    ACTIONS(837), 1,
      aux_sym__var_comment_token1,
    ACTIONS(839), 1,
      anon_sym_RBRACE_RBRACE,
  [5891] = 1,
    ACTIONS(841), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5896] = 2,
    ACTIONS(843), 1,
      anon_sym_AT,
    ACTIONS(845), 1,
      sym__not_comment,
  [5903] = 2,
    ACTIONS(847), 1,
      aux_sym__var_comment_token3,
    ACTIONS(849), 1,
      sym_status_text,
  [5910] = 2,
    ACTIONS(851), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(853), 1,
      anon_sym_AT,
  [5917] = 1,
    ACTIONS(855), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5922] = 2,
    ACTIONS(857), 1,
      aux_sym__var_comment_token1,
    ACTIONS(859), 1,
      anon_sym_EQ,
  [5929] = 2,
    ACTIONS(861), 1,
      aux_sym__var_comment_token1,
    ACTIONS(863), 1,
      sym_identifier,
  [5936] = 2,
    ACTIONS(865), 1,
      aux_sym__var_comment_token1,
    ACTIONS(867), 1,
      anon_sym_AT2,
  [5943] = 1,
    ACTIONS(762), 2,
      aux_sym__var_comment_token1,
      anon_sym_COLON,
  [5948] = 1,
    ACTIONS(766), 2,
      aux_sym__var_comment_token1,
      anon_sym_COLON,
  [5953] = 1,
    ACTIONS(770), 2,
      aux_sym__var_comment_token1,
      anon_sym_COLON,
  [5958] = 1,
    ACTIONS(758), 2,
      aux_sym__var_comment_token1,
      anon_sym_COLON,
  [5963] = 1,
    ACTIONS(869), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5968] = 1,
    ACTIONS(871), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [5973] = 2,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    STATE(322), 1,
      sym_http_version,
  [5980] = 2,
    ACTIONS(873), 1,
      aux_sym__var_comment_token1,
    ACTIONS(875), 1,
      anon_sym_RBRACE_RBRACE,
  [5987] = 2,
    ACTIONS(877), 1,
      aux_sym__var_comment_token1,
    ACTIONS(879), 1,
      anon_sym_COLON,
  [5994] = 2,
    ACTIONS(881), 1,
      aux_sym__var_comment_token1,
    ACTIONS(883), 1,
      sym_identifier,
  [6001] = 2,
    ACTIONS(885), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(887), 1,
      anon_sym_AT,
  [6008] = 2,
    ACTIONS(889), 1,
      aux_sym__var_comment_token1,
    ACTIONS(891), 1,
      anon_sym_RBRACE_RBRACE,
  [6015] = 2,
    ACTIONS(893), 1,
      aux_sym__var_comment_token1,
    ACTIONS(895), 1,
      aux_sym__var_comment_token3,
  [6022] = 2,
    ACTIONS(897), 1,
      aux_sym__var_comment_token1,
    ACTIONS(899), 1,
      anon_sym_RBRACE_RBRACE,
  [6029] = 1,
    ACTIONS(901), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [6034] = 2,
    ACTIONS(903), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(905), 1,
      anon_sym_AT,
  [6041] = 2,
    ACTIONS(907), 1,
      aux_sym__var_comment_token1,
    ACTIONS(909), 1,
      anon_sym_RBRACE_RBRACE,
  [6048] = 2,
    ACTIONS(911), 1,
      aux_sym__var_comment_token1,
    ACTIONS(913), 1,
      anon_sym_RBRACE_RBRACE,
  [6055] = 2,
    ACTIONS(915), 1,
      aux_sym__plain_comment_token2,
    ACTIONS(917), 1,
      anon_sym_AT,
  [6062] = 2,
    ACTIONS(919), 1,
      aux_sym__var_comment_token1,
    ACTIONS(921), 1,
      anon_sym_RBRACE_RBRACE,
  [6069] = 1,
    ACTIONS(923), 2,
      aux_sym__var_comment_token1,
      aux_sym__var_comment_token3,
  [6074] = 2,
    ACTIONS(925), 1,
      aux_sym__var_comment_token1,
    ACTIONS(927), 1,
      anon_sym_RBRACE_RBRACE,
  [6081] = 2,
    ACTIONS(929), 1,
      aux_sym__var_comment_token1,
    ACTIONS(931), 1,
      sym_identifier,
  [6088] = 2,
    ACTIONS(933), 1,
      aux_sym__var_comment_token1,
    ACTIONS(935), 1,
      sym_identifier,
  [6095] = 2,
    ACTIONS(13), 1,
      aux_sym_http_version_token1,
    STATE(279), 1,
      sym_http_version,
  [6102] = 2,
    ACTIONS(937), 1,
      aux_sym__var_comment_token1,
    ACTIONS(939), 1,
      aux_sym__var_comment_token3,
  [6109] = 1,
    ACTIONS(941), 1,
      aux_sym__var_comment_token3,
  [6113] = 1,
    ACTIONS(943), 1,
      aux_sym_pre_request_script_token1,
  [6117] = 1,
    ACTIONS(945), 1,
      anon_sym_EQ,
  [6121] = 1,
    ACTIONS(947), 1,
      aux_sym__var_comment_token3,
  [6125] = 1,
    ACTIONS(949), 1,
      aux_sym_pre_request_script_token1,
  [6129] = 1,
    ACTIONS(951), 1,
      aux_sym__var_comment_token1,
  [6133] = 1,
    ACTIONS(953), 1,
      aux_sym_pre_request_script_token1,
  [6137] = 1,
    ACTIONS(955), 1,
      aux_sym__var_comment_token3,
  [6141] = 1,
    ACTIONS(957), 1,
      aux_sym__var_comment_token3,
  [6145] = 1,
    ACTIONS(959), 1,
      aux_sym__var_comment_token3,
  [6149] = 1,
    ACTIONS(961), 1,
      aux_sym_pre_request_script_token1,
  [6153] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE_RBRACE,
  [6157] = 1,
    ACTIONS(965), 1,
      aux_sym_multipart_form_data_token1,
  [6161] = 1,
    ACTIONS(967), 1,
      aux_sym__blank_line_token1,
  [6165] = 1,
    ACTIONS(969), 1,
      aux_sym__var_comment_token3,
  [6169] = 1,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [6173] = 1,
    ACTIONS(973), 1,
      sym_identifier,
  [6177] = 1,
    ACTIONS(975), 1,
      anon_sym_RBRACE_RBRACE,
  [6181] = 1,
    ACTIONS(977), 1,
      anon_sym_RBRACE_RBRACE,
  [6185] = 1,
    ACTIONS(979), 1,
      aux_sym__var_comment_token3,
  [6189] = 1,
    ACTIONS(981), 1,
      aux_sym__var_comment_token1,
  [6193] = 1,
    ACTIONS(983), 1,
      aux_sym__var_comment_token1,
  [6197] = 1,
    ACTIONS(985), 1,
      aux_sym_multipart_form_data_token1,
  [6201] = 1,
    ACTIONS(987), 1,
      aux_sym__var_comment_token1,
  [6205] = 1,
    ACTIONS(989), 1,
      aux_sym__var_comment_token3,
  [6209] = 1,
    ACTIONS(991), 1,
      sym__not_comment,
  [6213] = 1,
    ACTIONS(993), 1,
      aux_sym__var_comment_token3,
  [6217] = 1,
    ACTIONS(995), 1,
      sym_status_code,
  [6221] = 1,
    ACTIONS(997), 1,
      aux_sym__var_comment_token3,
  [6225] = 1,
    ACTIONS(999), 1,
      aux_sym__blank_line_token1,
  [6229] = 1,
    ACTIONS(1001), 1,
      sym__not_comment,
  [6233] = 1,
    ACTIONS(1003), 1,
      aux_sym__var_comment_token3,
  [6237] = 1,
    ACTIONS(1005), 1,
      aux_sym__var_comment_token3,
  [6241] = 1,
    ACTIONS(1007), 1,
      anon_sym_RBRACE_RBRACE,
  [6245] = 1,
    ACTIONS(1009), 1,
      anon_sym_RBRACE_RBRACE,
  [6249] = 1,
    ACTIONS(1011), 1,
      aux_sym__var_comment_token3,
  [6253] = 1,
    ACTIONS(1013), 1,
      anon_sym_RBRACE_RBRACE,
  [6257] = 1,
    ACTIONS(1015), 1,
      aux_sym__var_comment_token3,
  [6261] = 1,
    ACTIONS(1017), 1,
      aux_sym__blank_line_token1,
  [6265] = 1,
    ACTIONS(1019), 1,
      aux_sym__var_comment_token1,
  [6269] = 1,
    ACTIONS(1021), 1,
      aux_sym__var_comment_token1,
  [6273] = 1,
    ACTIONS(1023), 1,
      aux_sym__var_comment_token3,
  [6277] = 1,
    ACTIONS(1025), 1,
      anon_sym_RBRACE_RBRACE,
  [6281] = 1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE_RBRACE,
  [6285] = 1,
    ACTIONS(1029), 1,
      aux_sym__var_comment_token3,
  [6289] = 1,
    ACTIONS(1031), 1,
      sym__not_comment,
  [6293] = 1,
    ACTIONS(1033), 1,
      aux_sym__var_comment_token3,
  [6297] = 1,
    ACTIONS(1035), 1,
      aux_sym__var_comment_token3,
  [6301] = 1,
    ACTIONS(1037), 1,
      aux_sym__var_comment_token3,
  [6305] = 1,
    ACTIONS(1039), 1,
      aux_sym__var_comment_token3,
  [6309] = 1,
    ACTIONS(1041), 1,
      aux_sym__var_comment_token3,
  [6313] = 1,
    ACTIONS(1043), 1,
      sym_identifier,
  [6317] = 1,
    ACTIONS(1045), 1,
      sym_identifier,
  [6321] = 1,
    ACTIONS(1047), 1,
      sym_identifier,
  [6325] = 1,
    ACTIONS(1049), 1,
      aux_sym__var_comment_token1,
  [6329] = 1,
    ACTIONS(1051), 1,
      aux_sym__var_comment_token3,
  [6333] = 1,
    ACTIONS(1053), 1,
      sym_identifier,
  [6337] = 1,
    ACTIONS(1055), 1,
      sym_identifier,
  [6341] = 1,
    ACTIONS(1057), 1,
      aux_sym__var_comment_token1,
  [6345] = 1,
    ACTIONS(1059), 1,
      sym_identifier,
  [6349] = 1,
    ACTIONS(1061), 1,
      aux_sym__var_comment_token3,
  [6353] = 1,
    ACTIONS(1063), 1,
      sym_identifier,
  [6357] = 1,
    ACTIONS(1065), 1,
      sym_identifier,
  [6361] = 1,
    ACTIONS(1067), 1,
      sym__not_comment,
  [6365] = 1,
    ACTIONS(1069), 1,
      aux_sym_pre_request_script_token1,
  [6369] = 1,
    ACTIONS(1071), 1,
      sym_identifier,
  [6373] = 1,
    ACTIONS(1073), 1,
      ts_builtin_sym_end,
  [6377] = 1,
    ACTIONS(1075), 1,
      aux_sym__var_comment_token3,
  [6381] = 1,
    ACTIONS(1077), 1,
      sym__not_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 446,
  [SMALL_STATE(9)] = 515,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 653,
  [SMALL_STATE(12)] = 706,
  [SMALL_STATE(13)] = 759,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 884,
  [SMALL_STATE(16)] = 916,
  [SMALL_STATE(17)] = 988,
  [SMALL_STATE(18)] = 1020,
  [SMALL_STATE(19)] = 1052,
  [SMALL_STATE(20)] = 1084,
  [SMALL_STATE(21)] = 1116,
  [SMALL_STATE(22)] = 1148,
  [SMALL_STATE(23)] = 1180,
  [SMALL_STATE(24)] = 1216,
  [SMALL_STATE(25)] = 1252,
  [SMALL_STATE(26)] = 1285,
  [SMALL_STATE(27)] = 1320,
  [SMALL_STATE(28)] = 1355,
  [SMALL_STATE(29)] = 1390,
  [SMALL_STATE(30)] = 1425,
  [SMALL_STATE(31)] = 1488,
  [SMALL_STATE(32)] = 1523,
  [SMALL_STATE(33)] = 1586,
  [SMALL_STATE(34)] = 1630,
  [SMALL_STATE(35)] = 1674,
  [SMALL_STATE(36)] = 1702,
  [SMALL_STATE(37)] = 1730,
  [SMALL_STATE(38)] = 1758,
  [SMALL_STATE(39)] = 1802,
  [SMALL_STATE(40)] = 1829,
  [SMALL_STATE(41)] = 1856,
  [SMALL_STATE(42)] = 1883,
  [SMALL_STATE(43)] = 1910,
  [SMALL_STATE(44)] = 1937,
  [SMALL_STATE(45)] = 1964,
  [SMALL_STATE(46)] = 1991,
  [SMALL_STATE(47)] = 2018,
  [SMALL_STATE(48)] = 2045,
  [SMALL_STATE(49)] = 2072,
  [SMALL_STATE(50)] = 2099,
  [SMALL_STATE(51)] = 2126,
  [SMALL_STATE(52)] = 2153,
  [SMALL_STATE(53)] = 2180,
  [SMALL_STATE(54)] = 2207,
  [SMALL_STATE(55)] = 2234,
  [SMALL_STATE(56)] = 2261,
  [SMALL_STATE(57)] = 2308,
  [SMALL_STATE(58)] = 2355,
  [SMALL_STATE(59)] = 2402,
  [SMALL_STATE(60)] = 2449,
  [SMALL_STATE(61)] = 2496,
  [SMALL_STATE(62)] = 2543,
  [SMALL_STATE(63)] = 2590,
  [SMALL_STATE(64)] = 2637,
  [SMALL_STATE(65)] = 2677,
  [SMALL_STATE(66)] = 2700,
  [SMALL_STATE(67)] = 2723,
  [SMALL_STATE(68)] = 2746,
  [SMALL_STATE(69)] = 2769,
  [SMALL_STATE(70)] = 2792,
  [SMALL_STATE(71)] = 2831,
  [SMALL_STATE(72)] = 2854,
  [SMALL_STATE(73)] = 2893,
  [SMALL_STATE(74)] = 2916,
  [SMALL_STATE(75)] = 2955,
  [SMALL_STATE(76)] = 2994,
  [SMALL_STATE(77)] = 3025,
  [SMALL_STATE(78)] = 3072,
  [SMALL_STATE(79)] = 3109,
  [SMALL_STATE(80)] = 3156,
  [SMALL_STATE(81)] = 3203,
  [SMALL_STATE(82)] = 3240,
  [SMALL_STATE(83)] = 3277,
  [SMALL_STATE(84)] = 3324,
  [SMALL_STATE(85)] = 3361,
  [SMALL_STATE(86)] = 3387,
  [SMALL_STATE(87)] = 3413,
  [SMALL_STATE(88)] = 3438,
  [SMALL_STATE(89)] = 3463,
  [SMALL_STATE(90)] = 3488,
  [SMALL_STATE(91)] = 3513,
  [SMALL_STATE(92)] = 3536,
  [SMALL_STATE(93)] = 3554,
  [SMALL_STATE(94)] = 3572,
  [SMALL_STATE(95)] = 3590,
  [SMALL_STATE(96)] = 3608,
  [SMALL_STATE(97)] = 3626,
  [SMALL_STATE(98)] = 3644,
  [SMALL_STATE(99)] = 3662,
  [SMALL_STATE(100)] = 3680,
  [SMALL_STATE(101)] = 3698,
  [SMALL_STATE(102)] = 3716,
  [SMALL_STATE(103)] = 3734,
  [SMALL_STATE(104)] = 3752,
  [SMALL_STATE(105)] = 3770,
  [SMALL_STATE(106)] = 3788,
  [SMALL_STATE(107)] = 3806,
  [SMALL_STATE(108)] = 3824,
  [SMALL_STATE(109)] = 3842,
  [SMALL_STATE(110)] = 3859,
  [SMALL_STATE(111)] = 3876,
  [SMALL_STATE(112)] = 3893,
  [SMALL_STATE(113)] = 3910,
  [SMALL_STATE(114)] = 3927,
  [SMALL_STATE(115)] = 3944,
  [SMALL_STATE(116)] = 3961,
  [SMALL_STATE(117)] = 3978,
  [SMALL_STATE(118)] = 3995,
  [SMALL_STATE(119)] = 4012,
  [SMALL_STATE(120)] = 4029,
  [SMALL_STATE(121)] = 4046,
  [SMALL_STATE(122)] = 4063,
  [SMALL_STATE(123)] = 4080,
  [SMALL_STATE(124)] = 4097,
  [SMALL_STATE(125)] = 4114,
  [SMALL_STATE(126)] = 4131,
  [SMALL_STATE(127)] = 4148,
  [SMALL_STATE(128)] = 4165,
  [SMALL_STATE(129)] = 4182,
  [SMALL_STATE(130)] = 4199,
  [SMALL_STATE(131)] = 4216,
  [SMALL_STATE(132)] = 4233,
  [SMALL_STATE(133)] = 4250,
  [SMALL_STATE(134)] = 4267,
  [SMALL_STATE(135)] = 4284,
  [SMALL_STATE(136)] = 4301,
  [SMALL_STATE(137)] = 4318,
  [SMALL_STATE(138)] = 4335,
  [SMALL_STATE(139)] = 4352,
  [SMALL_STATE(140)] = 4369,
  [SMALL_STATE(141)] = 4386,
  [SMALL_STATE(142)] = 4403,
  [SMALL_STATE(143)] = 4420,
  [SMALL_STATE(144)] = 4437,
  [SMALL_STATE(145)] = 4454,
  [SMALL_STATE(146)] = 4471,
  [SMALL_STATE(147)] = 4488,
  [SMALL_STATE(148)] = 4505,
  [SMALL_STATE(149)] = 4522,
  [SMALL_STATE(150)] = 4539,
  [SMALL_STATE(151)] = 4556,
  [SMALL_STATE(152)] = 4573,
  [SMALL_STATE(153)] = 4590,
  [SMALL_STATE(154)] = 4607,
  [SMALL_STATE(155)] = 4624,
  [SMALL_STATE(156)] = 4641,
  [SMALL_STATE(157)] = 4658,
  [SMALL_STATE(158)] = 4675,
  [SMALL_STATE(159)] = 4692,
  [SMALL_STATE(160)] = 4709,
  [SMALL_STATE(161)] = 4726,
  [SMALL_STATE(162)] = 4743,
  [SMALL_STATE(163)] = 4760,
  [SMALL_STATE(164)] = 4777,
  [SMALL_STATE(165)] = 4794,
  [SMALL_STATE(166)] = 4811,
  [SMALL_STATE(167)] = 4835,
  [SMALL_STATE(168)] = 4857,
  [SMALL_STATE(169)] = 4881,
  [SMALL_STATE(170)] = 4905,
  [SMALL_STATE(171)] = 4927,
  [SMALL_STATE(172)] = 4948,
  [SMALL_STATE(173)] = 4971,
  [SMALL_STATE(174)] = 4994,
  [SMALL_STATE(175)] = 5015,
  [SMALL_STATE(176)] = 5036,
  [SMALL_STATE(177)] = 5049,
  [SMALL_STATE(178)] = 5068,
  [SMALL_STATE(179)] = 5087,
  [SMALL_STATE(180)] = 5108,
  [SMALL_STATE(181)] = 5129,
  [SMALL_STATE(182)] = 5150,
  [SMALL_STATE(183)] = 5171,
  [SMALL_STATE(184)] = 5192,
  [SMALL_STATE(185)] = 5213,
  [SMALL_STATE(186)] = 5234,
  [SMALL_STATE(187)] = 5252,
  [SMALL_STATE(188)] = 5270,
  [SMALL_STATE(189)] = 5288,
  [SMALL_STATE(190)] = 5308,
  [SMALL_STATE(191)] = 5326,
  [SMALL_STATE(192)] = 5344,
  [SMALL_STATE(193)] = 5362,
  [SMALL_STATE(194)] = 5380,
  [SMALL_STATE(195)] = 5398,
  [SMALL_STATE(196)] = 5418,
  [SMALL_STATE(197)] = 5436,
  [SMALL_STATE(198)] = 5454,
  [SMALL_STATE(199)] = 5472,
  [SMALL_STATE(200)] = 5490,
  [SMALL_STATE(201)] = 5508,
  [SMALL_STATE(202)] = 5526,
  [SMALL_STATE(203)] = 5544,
  [SMALL_STATE(204)] = 5555,
  [SMALL_STATE(205)] = 5566,
  [SMALL_STATE(206)] = 5577,
  [SMALL_STATE(207)] = 5588,
  [SMALL_STATE(208)] = 5598,
  [SMALL_STATE(209)] = 5608,
  [SMALL_STATE(210)] = 5618,
  [SMALL_STATE(211)] = 5628,
  [SMALL_STATE(212)] = 5644,
  [SMALL_STATE(213)] = 5654,
  [SMALL_STATE(214)] = 5664,
  [SMALL_STATE(215)] = 5674,
  [SMALL_STATE(216)] = 5684,
  [SMALL_STATE(217)] = 5697,
  [SMALL_STATE(218)] = 5707,
  [SMALL_STATE(219)] = 5717,
  [SMALL_STATE(220)] = 5727,
  [SMALL_STATE(221)] = 5737,
  [SMALL_STATE(222)] = 5747,
  [SMALL_STATE(223)] = 5757,
  [SMALL_STATE(224)] = 5767,
  [SMALL_STATE(225)] = 5777,
  [SMALL_STATE(226)] = 5787,
  [SMALL_STATE(227)] = 5797,
  [SMALL_STATE(228)] = 5805,
  [SMALL_STATE(229)] = 5813,
  [SMALL_STATE(230)] = 5821,
  [SMALL_STATE(231)] = 5831,
  [SMALL_STATE(232)] = 5839,
  [SMALL_STATE(233)] = 5849,
  [SMALL_STATE(234)] = 5859,
  [SMALL_STATE(235)] = 5867,
  [SMALL_STATE(236)] = 5877,
  [SMALL_STATE(237)] = 5884,
  [SMALL_STATE(238)] = 5891,
  [SMALL_STATE(239)] = 5896,
  [SMALL_STATE(240)] = 5903,
  [SMALL_STATE(241)] = 5910,
  [SMALL_STATE(242)] = 5917,
  [SMALL_STATE(243)] = 5922,
  [SMALL_STATE(244)] = 5929,
  [SMALL_STATE(245)] = 5936,
  [SMALL_STATE(246)] = 5943,
  [SMALL_STATE(247)] = 5948,
  [SMALL_STATE(248)] = 5953,
  [SMALL_STATE(249)] = 5958,
  [SMALL_STATE(250)] = 5963,
  [SMALL_STATE(251)] = 5968,
  [SMALL_STATE(252)] = 5973,
  [SMALL_STATE(253)] = 5980,
  [SMALL_STATE(254)] = 5987,
  [SMALL_STATE(255)] = 5994,
  [SMALL_STATE(256)] = 6001,
  [SMALL_STATE(257)] = 6008,
  [SMALL_STATE(258)] = 6015,
  [SMALL_STATE(259)] = 6022,
  [SMALL_STATE(260)] = 6029,
  [SMALL_STATE(261)] = 6034,
  [SMALL_STATE(262)] = 6041,
  [SMALL_STATE(263)] = 6048,
  [SMALL_STATE(264)] = 6055,
  [SMALL_STATE(265)] = 6062,
  [SMALL_STATE(266)] = 6069,
  [SMALL_STATE(267)] = 6074,
  [SMALL_STATE(268)] = 6081,
  [SMALL_STATE(269)] = 6088,
  [SMALL_STATE(270)] = 6095,
  [SMALL_STATE(271)] = 6102,
  [SMALL_STATE(272)] = 6109,
  [SMALL_STATE(273)] = 6113,
  [SMALL_STATE(274)] = 6117,
  [SMALL_STATE(275)] = 6121,
  [SMALL_STATE(276)] = 6125,
  [SMALL_STATE(277)] = 6129,
  [SMALL_STATE(278)] = 6133,
  [SMALL_STATE(279)] = 6137,
  [SMALL_STATE(280)] = 6141,
  [SMALL_STATE(281)] = 6145,
  [SMALL_STATE(282)] = 6149,
  [SMALL_STATE(283)] = 6153,
  [SMALL_STATE(284)] = 6157,
  [SMALL_STATE(285)] = 6161,
  [SMALL_STATE(286)] = 6165,
  [SMALL_STATE(287)] = 6169,
  [SMALL_STATE(288)] = 6173,
  [SMALL_STATE(289)] = 6177,
  [SMALL_STATE(290)] = 6181,
  [SMALL_STATE(291)] = 6185,
  [SMALL_STATE(292)] = 6189,
  [SMALL_STATE(293)] = 6193,
  [SMALL_STATE(294)] = 6197,
  [SMALL_STATE(295)] = 6201,
  [SMALL_STATE(296)] = 6205,
  [SMALL_STATE(297)] = 6209,
  [SMALL_STATE(298)] = 6213,
  [SMALL_STATE(299)] = 6217,
  [SMALL_STATE(300)] = 6221,
  [SMALL_STATE(301)] = 6225,
  [SMALL_STATE(302)] = 6229,
  [SMALL_STATE(303)] = 6233,
  [SMALL_STATE(304)] = 6237,
  [SMALL_STATE(305)] = 6241,
  [SMALL_STATE(306)] = 6245,
  [SMALL_STATE(307)] = 6249,
  [SMALL_STATE(308)] = 6253,
  [SMALL_STATE(309)] = 6257,
  [SMALL_STATE(310)] = 6261,
  [SMALL_STATE(311)] = 6265,
  [SMALL_STATE(312)] = 6269,
  [SMALL_STATE(313)] = 6273,
  [SMALL_STATE(314)] = 6277,
  [SMALL_STATE(315)] = 6281,
  [SMALL_STATE(316)] = 6285,
  [SMALL_STATE(317)] = 6289,
  [SMALL_STATE(318)] = 6293,
  [SMALL_STATE(319)] = 6297,
  [SMALL_STATE(320)] = 6301,
  [SMALL_STATE(321)] = 6305,
  [SMALL_STATE(322)] = 6309,
  [SMALL_STATE(323)] = 6313,
  [SMALL_STATE(324)] = 6317,
  [SMALL_STATE(325)] = 6321,
  [SMALL_STATE(326)] = 6325,
  [SMALL_STATE(327)] = 6329,
  [SMALL_STATE(328)] = 6333,
  [SMALL_STATE(329)] = 6337,
  [SMALL_STATE(330)] = 6341,
  [SMALL_STATE(331)] = 6345,
  [SMALL_STATE(332)] = 6349,
  [SMALL_STATE(333)] = 6353,
  [SMALL_STATE(334)] = 6357,
  [SMALL_STATE(335)] = 6361,
  [SMALL_STATE(336)] = 6365,
  [SMALL_STATE(337)] = 6369,
  [SMALL_STATE(338)] = 6373,
  [SMALL_STATE(339)] = 6377,
  [SMALL_STATE(340)] = 6381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 37),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 9, 0, 48),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 9, 0, 48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 36),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 36),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(239),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(311),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(292),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(225),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(232),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(226),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(245),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(294),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 2, 0, 42), SHIFT_REPEAT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 43),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 43),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 8, 0, 44),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 8, 0, 44),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__plain_comment, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__plain_comment, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 4, 0, 11),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 4, 0, 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 6, 0, 22),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 6, 0, 22),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_comment, 7, 0, 30),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_comment, 7, 0, 30),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(317),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(317),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(340),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(340),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(340),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(340),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(241),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(310),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(295),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(238),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(172),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(255),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(293),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(325),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(32),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 1, 0, 34),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 1, 0, 34),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___body_repeat2, 1, 0, 35),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym___body_repeat2, 1, 0, 35),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_redirect, 4, 0, 29),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_redirect, 4, 0, 29),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 10),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 10),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 6),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 6),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 23),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 23),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 14),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 14),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 31),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 31),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 16),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 16), SHIFT_REPEAT(256),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 16),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 16), SHIFT_REPEAT(269),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 16), SHIFT_REPEAT(254),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 26),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 26),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 37),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 7, 0, 37),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 16),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 16),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 16), SHIFT_REPEAT(269),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 16), SHIFT_REPEAT(254),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(297),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(297),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(335),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(335),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(335),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(335),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 1, 0, 9),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 1, 0, 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 39),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 39),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 1, 0, 9),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 1, 0, 9),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 28),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 28),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 45),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 45),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 24),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 24),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 25),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 25),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 5),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 5),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 32),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 32),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 33),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 33),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 7),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 7),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 41),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 41),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 47),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 47),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 12),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 12),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 15),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 15),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(173),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(326),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(188),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(326),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0), SHIFT_REPEAT(195),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 4, 0, 0), SHIFT(188),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 4, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 8),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 8),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 8),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 8),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3, 0, 0),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 3, 0, 0), SHIFT(326),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1, 1, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 46),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 29),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 40),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1073] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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

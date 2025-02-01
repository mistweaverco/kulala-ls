/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "graphql",

  // extras: $ => [' ', "\t", "\n"],
  extras: ($) => [$.comment, /[\s\uFEFF\u2060\u200B\u00A0]/, $.comma],

  word: ($) => $.Name,

  rules: {
    // The production rules of the context-free grammar
    source_file: ($) => $.Document,

    comma: ($) => ",",

    Document: ($) => repeat1($.Definition),
    Definition: ($) =>
      choice(
        $.ExecutableDefinition,
        $.TypeSystemDefinition,
        $.TypeSystemExtension,
      ),
    ExecutableDefinition: ($) =>
      choice($.OperationDefinition, $.FragmentDefinition),
    OperationDefinition: ($) =>
      choice(
        $.SelectionSet, // TODO I want a lower precedence for this, but doesn't work?
        seq(
          $.OperationType,
          optional($.Name),
          optional($.VariableDefinitions),
          optional($.Directives),
          $.SelectionSet,
        ),
      ),
    OperationType: ($) => choice("query", "mutation", "subscription"),
    SelectionSet: ($) => seq("{", repeat1($.Selection), "}"),
    Selection: ($) => choice($.Field, $.FragmentSpread, $.InlineFragment),
    Field: ($) =>
      seq(
        optional($.Alias),
        $.Name,
        optional($.Arguments),
        optional($.Directives),
        optional($.SelectionSet),
      ),
    Alias: ($) => seq($.Name, ":"),
    Arguments: ($) => seq("(", repeat1($.Argument), ")"),
    Argument: ($) => seq($.Name, ":", $.Value),
    FragmentSpread: ($) => seq("...", $.FragmentName, optional($.Directives)),
    InlineFragment: ($) =>
      seq(
        "...",
        optional($.TypeCondition),
        optional($.Directives),
        $.SelectionSet,
      ),

    FragmentDefinition: ($) =>
      seq(
        "fragment",
        $.FragmentName,
        $.TypeCondition,
        optional($.Directives),
        $.SelectionSet,
      ),
    FragmentName: ($) => $.Name, // TODO But not "on" - Not sure how
    TypeCondition: ($) => seq("on", $.NamedType),

    Value: ($) =>
      choice(
        $.Variable,
        $.IntValue,
        $.FloatValue,
        $.StringValue,
        $.BooleanValue,
        $.NullValue,
        $.EnumValue,
        $.ListValue,
        $.ObjectValue,
      ),

    BooleanValue: ($) => choice("false", "true"),
    NullValue: ($) => "null",
    EnumValue: ($) => $.Name, // TODO but not `true` or `false` or `null`
    ListValue: ($) => seq("[", repeat($.Value), "]"),
    ObjectValue: ($) => seq("{", repeat($.ObjectField), "}"),
    ObjectField: ($) => seq($.Name, ":", $.Value),

    // These three are relatively loosely adapted, might need some work
    IntValue: ($) => /-?(0|[1-9][0-9]*)/,
    FloatValue: ($) =>
      token(
        seq(
          /-?(0|[1-9][0-9]*)/,
          choice(
            /\.[0-9]+/,
            /(e|E)(\+|-)?[0-9]+/,
            seq(/\.[0-9]+/, /(e|E)(\+|-)?[0-9]+/),
          ),
        ),
      ),
    StringValue: ($) =>
      choice(
        seq('"""', /([^"]|\n|""?[^"])*/, '"""'),
        seq('"', /[^"\\\n]*/, '"'),
      ),

    VariableDefinitions: ($) => seq("(", repeat1($.VariableDefinition), ")"),
    VariableDefinition: ($) =>
      seq($.Variable, ":", $.Type, optional($.DefaultValue)),
    Variable: ($) => seq("$", $.Name),
    DefaultValue: ($) => seq("=", $.Value),

    Type: ($) => choice($.NamedType, $.ListType, $.NonNullType),
    NamedType: ($) => $.Name,
    ListType: ($) => seq("[", $.Type, "]"),
    NonNullType: ($) => seq(choice($.NamedType, $.ListType), "!"),

    Directives: ($) => repeat1($.Directive),
    Directive: ($) => seq("@", $.Name, optional($.Arguments)),

    TypeSystemDefinition: ($) =>
      choice($.SchemaDefinition, $.TypeDefinition, $.DirectiveDefinition),

    TypeSystemExtension: ($) => choice($.SchemaExtension, $.TypeExtension),

    SchemaDefinition: ($) =>
      seq(
        "schema",
        optional($.Directives),
        "{",
        repeat1($.OperationTypeDefinition),
        "}",
      ),

    SchemaExtension: ($) =>
      prec.left(
        choice(
          seq(
            "extend",
            "schema",
            optional($.Directives),
            "{",
            repeat1($.OperationTypeDefinition),
            "}",
          ),
          seq("extend", "schema", $.Directives),
        ),
      ),

    TypeExtension: ($) =>
      choice(
        $.ScalarTypeExtension,
        $.ObjectTypeExtension,
        $.InterfaceTypeExtension,
        $.UnionTypeExtension,
        $.EnumTypeExtension,
        $.InputObjectTypeExtension,
      ),
    ScalarTypeExtension: ($) => seq("extend", "scalar", $.Name, $.Directives),
    ObjectTypeExtension: ($) =>
      prec.left(
        choice(
          seq(
            "extend",
            "type",
            $.Name,
            optional($.ImplementsInterfaces),
            optional($.Directives),
            $.FieldsDefinition,
          ),
          seq(
            "extend",
            "type",
            $.Name,
            optional($.ImplementsInterfaces),
            $.Directives,
          ),
          seq("extend", "type", $.Name, $.ImplementsInterfaces),
        ),
      ),
    InterfaceTypeExtension: ($) =>
      prec.left(
        choice(
          seq(
            "extend",
            "interface",
            $.Name,
            optional($.Directives),
            $.FieldsDefinition,
          ),
          seq("extend", "interface", $.Name, $.Directives),
        ),
      ),
    UnionTypeExtension: ($) =>
      choice(
        seq(
          "extend",
          "union",
          $.Name,
          optional($.Directives),
          $.UnionMemberTypes,
        ),
        seq("extend", "union", $.Name, $.Directives),
      ),
    EnumTypeExtension: ($) =>
      prec.left(
        choice(
          seq(
            "extend",
            "enum",
            $.Name,
            optional($.Directives),
            $.EnumValuesDefinition,
          ),
          seq("extend", "enum", $.Name, $.Directives),
        ),
      ),
    InputObjectTypeExtension: ($) =>
      prec.left(
        choice(
          seq(
            "extend",
            "input",
            $.Name,
            optional($.Directives),
            $.InputFieldsDefinition,
          ),
          seq("extend", "input", $.Name, $.Directives),
        ),
      ),

    OperationTypeDefinition: ($) => seq($.OperationType, ":", $.NamedType),

    Description: ($) => $.StringValue,

    TypeDefinition: ($) =>
      choice(
        $.ScalarTypeDefinition,
        $.ObjectTypeDefinition,
        $.InterfaceTypeDefinition,
        $.UnionTypeDefinition,
        $.EnumTypeDefinition,
        $.InputObjectTypeDefinition,
      ),

    ScalarTypeDefinition: ($) =>
      seq(optional($.Description), "scalar", $.Name, optional($.Directives)),
    ObjectTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          optional($.Description),
          "type",
          $.Name,
          optional($.ImplementsInterfaces),
          optional($.Directives),
          optional($.FieldsDefinition),
        ),
      ),

    ImplementsInterfaces: ($) =>
      seq(
        "implements",
        optional("&"),
        $.NamedType,
        repeat(seq("&", $.NamedType)),
      ),

    FieldsDefinition: ($) => seq("{", repeat1($.FieldDefinition), "}"),
    FieldDefinition: ($) =>
      seq(
        optional($.Description),
        $.Name,
        optional($.ArgumentsDefinition),
        ":",
        $.Type,
        optional($.Directive),
      ),

    ArgumentsDefinition: ($) => seq("(", repeat1($.InputValueDefinition), ")"),
    InputValueDefinition: ($) =>
      seq(
        optional($.Description),
        $.Name,
        ":",
        $.Type,
        optional($.DefaultValue),
        optional($.Directives),
      ),

    InterfaceTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          optional($.Description),
          "interface",
          $.Name,
          optional($.Directives),
          optional($.FieldsDefinition),
        ),
      ),

    UnionTypeDefinition: ($) =>
      seq(
        optional($.Description),
        "union",
        $.Name,
        optional($.Directives),
        optional($.UnionMemberTypes),
      ),
    UnionMemberTypes: ($) =>
      seq("=", optional("|"), $.NamedType, repeat(seq("|", $.NamedType))),

    EnumTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          optional($.Description),
          "enum",
          $.Name,
          optional($.Directives),
          optional($.EnumValuesDefinition),
        ),
      ),
    EnumValuesDefinition: ($) => seq("{", repeat1($.EnumValueDefinition), "}"),
    EnumValueDefinition: ($) =>
      seq(optional($.Description), $.EnumValue, optional($.Directives)),
    InputObjectTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          optional($.Description),
          "input",
          $.Name,
          optional($.Directives),
          optional($.InputFieldsDefinition),
        ),
      ),
    InputFieldsDefinition: ($) =>
      seq("{", repeat1($.InputValueDefinition), "}"),

    DirectiveDefinition: ($) =>
      prec.right(
        1,
        seq(
          optional($.Description),
          "directive",
          "@",
          $.Name,
          optional($.ArgumentsDefinition),
          "on",
          $.DirectiveLocations,
        ),
      ),

    DirectiveLocations: ($) =>
      seq(
        optional("|"),
        $.DirectiveLocation,
        repeat(seq("|", $.DirectiveLocation)),
      ),
    DirectiveLocation: ($) =>
      choice($.ExecutableDirectiveLocation, $.TypeSystemDirectiveLocation),

    ExecutableDirectiveLocation: ($) =>
      choice(
        "QUERY",
        "MUTATION",
        "SUBSCRIPTION",
        "FIELD",
        "FRAGMENT_DEFINITION",
        "FRAGMENT_SPREAD",
        "INLINE_FRAGMENT",
        "VARIABLE_DEFINITION",
      ),
    TypeSystemDirectiveLocation: ($) =>
      choice(
        "SCHEMA",
        "SCALAR",
        "OBJECT",
        "FIELD_DEFINITION",
        "ARGUMENT_DEFINITION",
        "INTERFACE",
        "UNION",
        "ENUM",
        "ENUM_VALUE",
        "INPUT_OBJECT",
        "INPUT_FIELD_DEFINITION",
      ),

    comment: ($) => token(seq("# ", /.*/)),

    Name: ($) => /[_A-Za-z][_0-9A-Za-z]*/,
  },
});

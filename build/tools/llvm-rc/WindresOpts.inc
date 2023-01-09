/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_1, {"-" COMMA nullptr})
PREFIX(prefix_2, {"--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-###"[1], _HASH_HASH_HASH, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--codepage="[2], codepage_eq, Joined, INVALID, codepage, nullptr, 0, 0,
       "Default codepage to use", nullptr, nullptr)
OPTION(prefix_2, &"--codepage"[2], codepage, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-c"[1], codepage_short, JoinedOrSeparate, INVALID, codepage, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--define="[2], define_eq, Joined, INVALID, define, nullptr, 0, 0,
       "Define to pass to the preprocessor", nullptr, nullptr)
OPTION(prefix_2, &"--define"[2], define, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-D"[1], define_short, JoinedOrSeparate, INVALID, define, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-F"[1], target_short, JoinedOrSeparate, INVALID, target, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--help"[2], help_long, Flag, INVALID, help, nullptr, 0, 0,
       "Display this message and exit", nullptr, nullptr)
OPTION(prefix_1, &"-h"[1], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--include-dir="[2], include_dir_eq, Joined, INVALID, include_dir, nullptr, 0, 0,
       "Include directory", nullptr, nullptr)
OPTION(prefix_2, &"--include-dir"[2], include_dir, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--include="[2], include_alias_eq, Joined, INVALID, include_dir, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--include"[2], include_alias, Separate, INVALID, include_dir, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--input-format="[2], input_format_eq, Joined, INVALID, input_format, nullptr, 0, 0,
       "Input format", nullptr, nullptr)
OPTION(prefix_2, &"--input-format"[2], input_format, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--input="[2], input_eq, Joined, INVALID, input, nullptr, 0, 0,
       "Input file", nullptr, nullptr)
OPTION(prefix_2, &"--input"[2], input, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-I"[1], include_dir_short, JoinedOrSeparate, INVALID, include_dir, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-i"[1], input_short, JoinedOrSeparate, INVALID, input, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-J"[1], input_format_short, JoinedOrSeparate, INVALID, input_format, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--language="[2], language_eq, Joined, INVALID, language, nullptr, 0, 0,
       "Default language to use (0x0-0xffff)", nullptr, nullptr)
OPTION(prefix_2, &"--language"[2], language, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-l"[1], language_short, JoinedOrSeparate, INVALID, language, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--no-preprocess"[2], no_preprocess, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--output-format="[2], output_format_eq, Joined, INVALID, output_format, nullptr, 0, 0,
       "Output format", nullptr, nullptr)
OPTION(prefix_2, &"--output-format"[2], output_format, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--output="[2], output_eq, Joined, INVALID, output, nullptr, 0, 0,
       "Output file", nullptr, nullptr)
OPTION(prefix_2, &"--output"[2], output, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-O"[1], output_format_short, JoinedOrSeparate, INVALID, output_format, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-o"[1], output_short, JoinedOrSeparate, INVALID, output, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--preprocessor-arg="[2], preprocessor_arg_eq, Joined, INVALID, preprocessor_arg, nullptr, 0, 0,
       "Preprocessor command argument", nullptr, nullptr)
OPTION(prefix_2, &"--preprocessor-arg"[2], preprocessor_arg, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--preprocessor="[2], preprocessor_eq, Joined, INVALID, preprocessor, nullptr, 0, 0,
       "Custom preprocessor command", nullptr, nullptr)
OPTION(prefix_2, &"--preprocessor"[2], preprocessor, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--target="[2], target_eq, Joined, INVALID, target, nullptr, 0, 0,
       "Target BFD format name", nullptr, nullptr)
OPTION(prefix_2, &"--target"[2], target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--undefine="[2], undef_eq, Joined, INVALID, undef, nullptr, 0, 0,
       "Undefine to pass to the preprocessor", nullptr, nullptr)
OPTION(prefix_2, &"--undefine"[2], undef, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--use-temp-file"[2], use_temp_file, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-U"[1], undef_short, JoinedOrSeparate, INVALID, undef, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--verbose"[2], verbose_long, Flag, INVALID, verbose, nullptr, 0, 0,
       "Enable verbose output", nullptr, nullptr)
OPTION(prefix_2, &"--version"[2], version_long, Flag, INVALID, version, nullptr, 0, 0,
       "Display version", nullptr, nullptr)
OPTION(prefix_1, &"-V"[1], version, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-v"[1], verbose, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = sizeof(SimpleEnumValueTables) / sizeof(SimpleEnumValueTable);
#endif // SIMPLE_ENUM_VALUE_TABLE


#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT

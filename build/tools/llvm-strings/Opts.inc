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
PREFIX(prefix_2, {"-" COMMA nullptr})
PREFIX(prefix_1, {"--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--all"[2], all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Silently ignored. Present for GNU strings compatibility", nullptr, nullptr)
OPTION(prefix_2, &"-a"[1], anonymous_2, Flag, INVALID, all, nullptr, 0, 0,
       "Alias for --all", nullptr, nullptr)
OPTION(prefix_1, &"--bytes="[2], bytes_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print sequences of the specified length", nullptr, nullptr)
OPTION(prefix_1, &"--bytes"[2], anonymous_0, Separate, INVALID, bytes_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-f"[1], anonymous_3, Flag, INVALID, print_file_name, nullptr, 0, 0,
       "Alias for --print-file-name", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_4, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_2, &"-n"[1], anonymous_5, JoinedOrSeparate, INVALID, bytes_EQ, nullptr, 0, 0,
       "Alias for --bytes", nullptr, nullptr)
OPTION(prefix_1, &"--print-file-name"[2], print_file_name, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the name of the file before each string", nullptr, nullptr)
OPTION(prefix_1, &"--radix="[2], radix_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print the offset within the file with the specified radix: o (octal), d (decimal), x (hexadecimal)", "<radix>", nullptr)
OPTION(prefix_1, &"--radix"[2], anonymous_1, Separate, INVALID, radix_EQ, nullptr, 0, 0, nullptr, "<radix>", nullptr)
OPTION(prefix_2, &"-t"[1], anonymous_6, JoinedOrSeparate, INVALID, radix_EQ, nullptr, 0, 0,
       "Alias for --radix", "<radix>", nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version", nullptr, nullptr)
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

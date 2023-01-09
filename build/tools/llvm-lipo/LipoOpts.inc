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
PREFIX(prefix_1, {"-" COMMA "--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "action group", action_group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-archs"[1], archs, Flag, action_group, INVALID, nullptr, 0, 0,
       "Display the arch_types present in the input file", nullptr, nullptr)
OPTION(prefix_1, &"-arch"[1], arch, MultiArg, INVALID, INVALID, nullptr, 0, 2,
       "Specifies the architecture and the corresponding input file", nullptr, nullptr)
OPTION(prefix_1, &"-create"[1], create, Flag, action_group, INVALID, nullptr, 0, 0,
       "Create a universal binary output file from the input files. Requires -output option", nullptr, nullptr)
OPTION(prefix_1, &"-extract"[1], extract, Separate, action_group, INVALID, nullptr, 0, 0,
       "Create a universal output file containing only the specified arch_type from the fat input file. Requires -output option", nullptr, nullptr)
OPTION(prefix_1, &"-help"[1], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-info"[1], info, Flag, action_group, INVALID, nullptr, 0, 0,
       "Display descriptions of each input file including filename and arch_types. Groups universal binaries together followed by thin files", nullptr, nullptr)
OPTION(prefix_1, &"-output"[1], output, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Create output file with specified name", nullptr, nullptr)
OPTION(prefix_2, &"-o"[1], o, JoinedOrSeparate, INVALID, output, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-replace"[1], replace, MultiArg, action_group, INVALID, nullptr, 0, 2,
       "Replace the specified arch type with the contents of the input_file in a universal binary. Requires -output option", nullptr, nullptr)
OPTION(prefix_1, &"-segalign"[1], segalign, MultiArg, INVALID, INVALID, nullptr, 0, 2,
       "Specifies the segment alignment for the specified architecture when creating a universal binary file. The alignment is a hexadecimal number that is a power of 2.", nullptr, nullptr)
OPTION(prefix_1, &"-thin"[1], thin, Separate, action_group, INVALID, nullptr, 0, 0,
       "Create a thin output file of specified arch_type from the fat input file. Requires -output option", nullptr, nullptr)
OPTION(prefix_1, &"-verify_arch"[1], verify_arch, RemainingArgs, action_group, INVALID, nullptr, 0, 0,
       "Verify that the specified arch_types are present in the input file", nullptr, nullptr)
OPTION(prefix_1, &"-version"[1], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
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

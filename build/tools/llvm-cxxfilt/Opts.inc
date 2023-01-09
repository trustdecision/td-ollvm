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
OPTION(prefix_1, &"-_"[1], anonymous_3, Flag, INVALID, strip_underscore, nullptr, 0, 0,
       "Alias for --strip-underscore", nullptr, nullptr)
OPTION(prefix_2, &"--format="[2], anonymous_1_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify mangling format. Currently ignored because only 'gnu' is supported", nullptr, nullptr)
OPTION(prefix_2, &"--format"[2], anonymous_0, Separate, INVALID, anonymous_1_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_1, &"-h"[1], anonymous_4, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_2, &"--no-strip-underscore"[2], no_strip_underscore, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't strip the leading underscore", nullptr, nullptr)
OPTION(prefix_1, &"-n"[1], anonymous_5, Flag, INVALID, no_strip_underscore, nullptr, 0, 0,
       "Alias for --no-strip-underscore", nullptr, nullptr)
OPTION(prefix_2, &"--strip-underscore"[2], strip_underscore, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip the leading underscore", nullptr, nullptr)
OPTION(prefix_1, &"-s"[1], anonymous_2, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --format", nullptr, nullptr)
OPTION(prefix_2, &"--types"[2], types, Flag, INVALID, INVALID, nullptr, 0, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"-t"[1], anonymous_6, Flag, INVALID, types, nullptr, 0, 0,
       "Alias for --types", nullptr, nullptr)
OPTION(prefix_2, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
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

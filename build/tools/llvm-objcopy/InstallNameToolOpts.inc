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
PREFIX(prefix_3, {"-" COMMA nullptr})
PREFIX(prefix_1, {"-" COMMA "--" COMMA nullptr})
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
OPTION(prefix_1, &"-add_rpath"[1], add_rpath, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Add new rpath", nullptr, nullptr)
OPTION(prefix_1, &"-change"[1], change, MultiArg, INVALID, INVALID, nullptr, 0, 2,
       "Change dependent shared library install name", nullptr, nullptr)
OPTION(prefix_1, &"-delete_all_rpaths"[1], delete_all_rpaths, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Delete all rpath directives", nullptr, nullptr)
OPTION(prefix_1, &"-delete_rpath"[1], delete_rpath, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Delete specified rpath", nullptr, nullptr)
OPTION(prefix_2, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"-h"[1], h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-id"[1], id, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Change dynamic shared library id", nullptr, nullptr)
OPTION(prefix_1, &"-prepend_rpath"[1], prepend_rpath, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Add new rpath before other rpaths", nullptr, nullptr)
OPTION(prefix_1, &"-rpath"[1], rpath, MultiArg, INVALID, INVALID, nullptr, 0, 2,
       "Change rpath path name", nullptr, nullptr)
OPTION(prefix_2, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
OPTION(prefix_3, &"-V"[1], V, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
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

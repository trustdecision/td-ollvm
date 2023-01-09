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
OPTION(prefix_1, &"--dump-tli"[2], dump_tli, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Dump TLI's list of functions and whether they are available", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display available options", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_1, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_1, &"--libdir="[2], libdir_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Root directory for finding library files", "<directory>", nullptr)
OPTION(prefix_1, &"--libdir"[2], anonymous_2, Separate, INVALID, libdir_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--report="[2], report_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Level of detail to report", nullptr, "summary,discrepancy,full")
OPTION(prefix_1, &"--separate"[2], separate, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report on each library file separately", nullptr, nullptr)
OPTION(prefix_1, &"--triple="[2], triple_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target triple", "<triple>", nullptr)
OPTION(prefix_1, &"--triple"[2], anonymous_0, Separate, INVALID, triple_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
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

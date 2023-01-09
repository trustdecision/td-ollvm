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
PREFIX(prefix_1, {"/" COMMA "-" COMMA nullptr})
PREFIX(prefix_2, {"/?" COMMA "-?" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/DEFINE:"[1], DEFINE, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Not implemented", "symbol", nullptr)
OPTION(prefix_1, &"/FOLDDUPS:"[1], FOLDDUPS, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Not implemented", nullptr, nullptr)
OPTION(prefix_1, &"/HELP"[1], HELP, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display available options", nullptr, nullptr)
OPTION(prefix_1, &"/H"[1], H, Flag, INVALID, HELP, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/MACHINE:"[1], MACHINE, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Machine architecture", "{ARM|ARM64|EBC|IA64|X64|X86}", nullptr)
OPTION(prefix_1, &"/NOLOGO"[1], NOLOGO, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Not implemented", nullptr, nullptr)
OPTION(prefix_1, &"/OUT:"[1], OUT, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Output file", "filename", nullptr)
OPTION(prefix_1, &"/READONLY"[1], READONLY, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Not implemented", nullptr, nullptr)
OPTION(prefix_1, &"/TIMESTAMP:"[1], TIMESTAMP, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Timestamp for coff header, defaults to current time", nullptr, nullptr)
OPTION(prefix_1, &"/VERBOSE"[1], VERBOSE, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use verbose output", nullptr, nullptr)
OPTION(prefix_2, &"/?"[2], HELP_Q, Flag, INVALID, HELP, nullptr, 0, 0, nullptr, nullptr, nullptr)
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

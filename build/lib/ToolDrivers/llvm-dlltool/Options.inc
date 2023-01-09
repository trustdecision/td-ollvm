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
OPTION(prefix_1, &"--as-flags"[2], f_alias, JoinedOrSeparate, INVALID, f, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--as"[2], S_alias, JoinedOrSeparate, INVALID, S, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--dllname"[2], D_long, JoinedOrSeparate, INVALID, D, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-D"[1], D, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Specify the input DLL Name", nullptr, nullptr)
OPTION(prefix_2, &"-d"[1], d, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Input .def File", nullptr, nullptr)
OPTION(prefix_2, &"-f"[1], f, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Assembler Flags", nullptr, nullptr)
OPTION(prefix_1, &"--input-def"[2], d_long, JoinedOrSeparate, INVALID, d, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--kill-at"[2], k_alias, Flag, INVALID, k, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-k"[1], k, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Kill @n Symbol from export", nullptr, nullptr)
OPTION(prefix_2, &"-l"[1], l, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Generate an import lib", nullptr, nullptr)
OPTION(prefix_1, &"--machine"[2], m_long, JoinedOrSeparate, INVALID, m, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-m"[1], m, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Set target machine", nullptr, nullptr)
OPTION(prefix_1, &"--output-lib"[2], l_long, JoinedOrSeparate, INVALID, l, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-S"[1], S, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Assembler", nullptr, nullptr)
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

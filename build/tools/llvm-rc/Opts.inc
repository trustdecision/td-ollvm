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
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/###"[1], _HASH_HASH_HASH, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/?"[1], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help and exit.", nullptr, nullptr)
OPTION(prefix_1, &"/C"[1], codepage, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Set the codepage used for input strings.", nullptr, nullptr)
OPTION(prefix_1, &"/dry-run"[1], dry_run, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't compile the input; only try to parse it.", nullptr, nullptr)
OPTION(prefix_1, &"/D"[1], define, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Define a symbol for the C preprocessor.", nullptr, nullptr)
OPTION(prefix_1, &"/FM"[1], fm, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/FO"[1], fileout, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Change the output file location.", nullptr, nullptr)
OPTION(prefix_1, &"/G1"[1], g1, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/G2"[1], g2, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/GN"[1], gn, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/G"[1], g, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/H"[1], h, Flag, INVALID, help, nullptr, 0, 0,
       "Display this help and exit.", nullptr, nullptr)
OPTION(prefix_1, &"/I"[1], includepath, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Add an include path.", nullptr, nullptr)
OPTION(prefix_1, &"/LN"[1], lang_name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Set the default language name.", nullptr, nullptr)
OPTION(prefix_1, &"/L"[1], lang_id, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Set the default language identifier.", nullptr, nullptr)
OPTION(prefix_1, &"/no-preprocess"[1], no_preprocess, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't try to preprocess the input file.", nullptr, nullptr)
OPTION(prefix_1, &"/NOLOGO"[1], nologo, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/N"[1], add_null, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Null-terminate all strings in the string table.", nullptr, nullptr)
OPTION(prefix_1, &"/Q"[1], q, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/R"[1], r, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/SL"[1], sl, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/U"[1], undef, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Undefine a symbol for the C preprocessor.", nullptr, nullptr)
OPTION(prefix_1, &"/V"[1], verbose, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Be verbose.", nullptr, nullptr)
OPTION(prefix_1, &"/W"[1], w, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/X"[1], noinclude, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignore 'include' variable.", nullptr, nullptr)
OPTION(prefix_1, &"/Y"[1], dupid_nowarn, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Suppress warnings on duplicate resource IDs.", nullptr, nullptr)
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

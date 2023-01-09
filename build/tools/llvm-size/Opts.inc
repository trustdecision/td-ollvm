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
PREFIX(prefix_1, {"--" COMMA nullptr})
PREFIX(prefix_2, {"--" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "kind", grp_mach_o, Group, INVALID, INVALID, nullptr, 0, 0,
       "OPTIONS (Mach-O specific)", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--arch="[2], arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, 0,
       "architecture(s) from a Mach-O file to dump", nullptr, nullptr)
OPTION(prefix_2, &"--arch"[2], anonymous_2, Separate, INVALID, arch_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"-A"[1], anonymous_3, Flag, INVALID, format_EQ, "sysv\0", 0, 0,
       "Alias for --format", nullptr, nullptr)
OPTION(prefix_3, &"-B"[1], anonymous_4, Flag, INVALID, format_EQ, "berkeley\0", 0, 0,
       "Alias for --format", nullptr, nullptr)
OPTION(prefix_1, &"--common"[2], common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print common symbols in the ELF file. When using Berkeley format, this is added to bss", nullptr, nullptr)
OPTION(prefix_3, &"-d"[1], anonymous_5, Flag, INVALID, radix_EQ, "10\0", 0, 0,
       "Alias for --radix=10", nullptr, nullptr)
OPTION(prefix_1, &"--format="[2], format_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify output format", nullptr, nullptr)
OPTION(prefix_1, &"--format"[2], anonymous_0, Separate, INVALID, format_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_3, &"-h"[1], anonymous_6, Flag, INVALID, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_3, &"-l"[1], l, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "When format is darwin, use long format to include addresses and offsets", nullptr, nullptr)
OPTION(prefix_3, &"-m"[1], anonymous_7, Flag, INVALID, format_EQ, "darwin\0", 0, 0,
       "Alias for --format", nullptr, nullptr)
OPTION(prefix_3, &"-o"[1], anonymous_8, Flag, INVALID, radix_EQ, "8\0", 0, 0,
       "Alias for --radix=8", nullptr, nullptr)
OPTION(prefix_1, &"--radix="[2], radix_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print size in radix", nullptr, nullptr)
OPTION(prefix_1, &"--radix"[2], anonymous_1, Separate, INVALID, radix_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--totals"[2], totals, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print totals of all objects - Berkeley format only", nullptr, nullptr)
OPTION(prefix_3, &"-t"[1], anonymous_9, Flag, INVALID, totals, nullptr, 0, 0,
       "Alias for --totals", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version", nullptr, nullptr)
OPTION(prefix_3, &"-x"[1], anonymous_10, Flag, INVALID, radix_EQ, "16\0", 0, 0,
       "Alias for --radix=16", nullptr, nullptr)
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

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
OPTION(nullptr, "kind", grp_obsolete, Group, INVALID, INVALID, nullptr, 0, 0,
       "Obsolete and unsupported flags", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-arch"[1], arch, Separate, INVALID, INVALID, nullptr, 0, 0,
       "select slice of universal Mach-O file", nullptr, nullptr)
OPTION(prefix_1, &"-B"[1], anonymous_1, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "force Thum disassembly (ARM 32-bit objects only)", nullptr, nullptr)
OPTION(prefix_1, &"-C"[1], C, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print linker optimization hints", nullptr, nullptr)
OPTION(prefix_1, &"-D"[1], D, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print shared library id", nullptr, nullptr)
OPTION(prefix_1, &"-d"[1], d, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print data section", nullptr, nullptr)
OPTION(prefix_1, &"-f"[1], f, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print universal headers", nullptr, nullptr)
OPTION(prefix_1, &"-G"[1], G, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print data-in-code table", nullptr, nullptr)
OPTION(prefix_2, &"--help-hidden"[2], help_hidden, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print help for hidden flags", nullptr, nullptr)
OPTION(prefix_2, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print help", nullptr, nullptr)
OPTION(prefix_1, &"-H"[1], anonymous_2, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "print two-level hints table", nullptr, nullptr)
OPTION(prefix_1, &"-h"[1], h, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print mach header", nullptr, nullptr)
OPTION(prefix_1, &"-I"[1], I, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print indirect symbol table", nullptr, nullptr)
OPTION(prefix_1, &"-j"[1], j, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print opcode bytes", nullptr, nullptr)
OPTION(prefix_1, &"-L"[1], L, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print used shared libraries", nullptr, nullptr)
OPTION(prefix_1, &"-l"[1], l, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print load commnads", nullptr, nullptr)
OPTION(prefix_1, &"-mcpu="[1], mcpu_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "select cpu for disassembly", nullptr, nullptr)
OPTION(prefix_1, &"-M"[1], anonymous_3, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "print module table of shared library", nullptr, nullptr)
OPTION(prefix_1, &"-o"[1], o, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print Objective-C segment", nullptr, nullptr)
OPTION(prefix_1, &"-P"[1], P, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print __TEXT,__info_plist section as strings", nullptr, nullptr)
OPTION(prefix_1, &"-p"[1], p, Separate, INVALID, INVALID, nullptr, 0, 0,
       "start disassembly at <function name>", "<function name>", nullptr)
OPTION(prefix_1, &"-Q"[1], anonymous_7, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "llvm-otool cannot use otool-classic's disassembler", nullptr, nullptr)
OPTION(prefix_1, &"-q"[1], anonymous_0, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "use LLVM's disassembler (default)", nullptr, nullptr)
OPTION(prefix_1, &"-R"[1], anonymous_4, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "print reference table of shared library", nullptr, nullptr)
OPTION(prefix_1, &"-r"[1], r, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print relocation entries", nullptr, nullptr)
OPTION(prefix_1, &"-S"[1], anonymous_5, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "print table of contents of library", nullptr, nullptr)
OPTION(prefix_1, &"-s"[1], s, MultiArg, INVALID, INVALID, nullptr, 0, 2,
       "print contents of section", "<segname> <sectname>", nullptr)
OPTION(prefix_1, &"-T"[1], anonymous_6, Flag, grp_obsolete, INVALID, nullptr, HelpHidden, 0,
       "print table of contents of shared library", nullptr, nullptr)
OPTION(prefix_1, &"-t"[1], t, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print text section", nullptr, nullptr)
OPTION(prefix_2, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print version", nullptr, nullptr)
OPTION(prefix_1, &"-V"[1], V, Flag, INVALID, INVALID, nullptr, 0, 0,
       "symbolize disassembled operands (implies -v)", nullptr, nullptr)
OPTION(prefix_1, &"-v"[1], v, Flag, INVALID, INVALID, nullptr, 0, 0,
       "verbose output / disassemble when printing text sections", nullptr, nullptr)
OPTION(prefix_1, &"-X"[1], X, Flag, INVALID, INVALID, nullptr, 0, 0,
       "omit leading addresses or headers", nullptr, nullptr)
OPTION(prefix_1, &"-x"[1], x, Flag, INVALID, INVALID, nullptr, 0, 0,
       "print all text sections", nullptr, nullptr)
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

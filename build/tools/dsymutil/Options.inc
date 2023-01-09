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
PREFIX(prefix_3, {"-" COMMA "--" COMMA nullptr})
PREFIX(prefix_1, {"--" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "Dsymutil", grp_general, Group, INVALID, INVALID, nullptr, 0, 0,
       "Dsymutil Options", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--accelerator="[2], anonymous_12, Joined, INVALID, accelerator, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--accelerator"[2], accelerator, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specify the desired type of accelerator table. Valid options are 'Apple' (.apple_names, .apple_namespaces, .apple_types, .apple_objc), 'Dwarf' (.debug_names), 'Pub' (.debug_pubnames, .debug_pubtypes) and 'Default'", "<accelerator type>", nullptr)
OPTION(prefix_1, &"--arch="[2], anonymous_11, Joined, INVALID, arch, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--arch"[2], arch, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Link DWARF debug information only for specified CPU architecturetypes. This option can be specified multiple times, once for eachdesired architecture. All CPU architectures will be linked bydefault.", "<arch>", nullptr)
OPTION(prefix_1, &"--dump-debug-map"[2], dump_debug_map, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Parse and dump the debug map to standard output. No DWARF link will take place.", nullptr, nullptr)
OPTION(prefix_1, &"--flat"[2], flat, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Produce a flat dSYM file (not a bundle).", nullptr, nullptr)
OPTION(prefix_2, &"-f"[1], anonymous_3, Flag, grp_general, flat, nullptr, 0, 0,
       "Alias for --flat", nullptr, nullptr)
OPTION(prefix_1, &"--gen-reproducer"[2], gen_reproducer, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Generate a reproducer consisting of the input object files.", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Prints this help output.", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_0, Flag, grp_general, help, nullptr, 0, 0,
       "Alias for --help", nullptr, nullptr)
OPTION(prefix_2, &"-j"[1], anonymous_13, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Alias for --num-threads", "<threads>", nullptr)
OPTION(prefix_1, &"--keep-function-for-static"[2], keep_func_for_static, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Make a static variable keep the enclosing function even if it would have been omitted otherwise.", nullptr, nullptr)
OPTION(prefix_1, &"--no-odr"[2], no_odr, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Do not use ODR (One Definition Rule) for type uniquing.", nullptr, nullptr)
OPTION(prefix_1, &"--no-output"[2], no_output, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Do the link in memory, but do not emit the result file.", nullptr, nullptr)
OPTION(prefix_1, &"--no-swiftmodule-timestamp"[2], no_swiftmodule_timestamp, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Don't check timestamp for swiftmodule files.", nullptr, nullptr)
OPTION(prefix_1, &"--num-threads"[2], threads, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specifies the maximum number of simultaneous threads to use when linking multiple architectures.", "<threads>", nullptr)
OPTION(prefix_3, &"-o="[1], anonymous_7, Joined, INVALID, output, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--object-prefix-map="[2], anonymous_9, Joined, INVALID, object_prefix_map, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--object-prefix-map"[2], object_prefix_map, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Remap object file paths (but no source paths) before processing.Use this for Clang objects where the module cache location wasremapped using -fdebug-prefix-map; to help dsymutilfind the Clang module cache.", "<prefix=remapped>", nullptr)
OPTION(prefix_1, &"--oso-prepend-path="[2], anonymous_8, Joined, INVALID, oso_prepend_path, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--oso-prepend-path"[2], oso_prepend_path, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specify a directory to prepend to the paths of object files.", "<path>", nullptr)
OPTION(prefix_1, &"--out="[2], anonymous_6, Joined, INVALID, output, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--out"[2], anonymous_5, Separate, grp_general, output, nullptr, 0, 0,
       "Alias for -o", "<filename>", nullptr)
OPTION(prefix_3, &"-o"[1], output, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specify the output file. Defaults to <input file>.dwarf", "<filename>", nullptr)
OPTION(prefix_1, &"--papertrail"[2], papertrail, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Embed warnings in the linked DWARF debug info.", nullptr, nullptr)
OPTION(prefix_1, &"--remarks-output-format="[2], anonymous_16, Joined, INVALID, remarks_output_format, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--remarks-output-format"[2], remarks_output_format, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specify the format to be used when serializing the linked remarks.", "<format>", nullptr)
OPTION(prefix_1, &"--remarks-prepend-path="[2], anonymous_15, Joined, INVALID, remarks_prepend_path, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--remarks-prepend-path"[2], remarks_prepend_path, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Specify a directory to prepend to the paths of the external remark files.", "<path>", nullptr)
OPTION(prefix_1, &"--statistics"[2], statistics, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Print statistics about the contribution of each object file to the linked debug info. This prints a table after linking with the object file name, the size of the debug info in the object file (in bytes) and the size contributed (in bytes) to the linked dSYM. The table is sorted by the output size listing the object files with the largest contribution first.", nullptr, nullptr)
OPTION(prefix_1, &"--symbol-map="[2], anonymous_10, Joined, INVALID, symbolmap, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--symbol-map"[2], symbolmap, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Updates the existing dSYMs inplace using symbol map specified.", "<bcsymbolmap>", nullptr)
OPTION(prefix_1, &"--symtab"[2], symtab, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Dumps the symbol table found in executable or object file(s) and exits.", nullptr, nullptr)
OPTION(prefix_3, &"-S"[1], assembly, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Output textual assembly instead of a binary dSYM companion file.", nullptr, nullptr)
OPTION(prefix_2, &"-s"[1], anonymous_2, Flag, grp_general, symtab, nullptr, 0, 0,
       "Alias for --symtab", nullptr, nullptr)
OPTION(prefix_1, &"--toolchain"[2], toolchain, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Embed toolchain information in dSYM bundle.", "<toolchain>", nullptr)
OPTION(prefix_1, &"--update"[2], update, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Updates existing dSYM files to contain the latest accelerator tables and other DWARF optimizations.", nullptr, nullptr)
OPTION(prefix_1, &"--use-reproducer="[2], anonymous_14, Joined, INVALID, use_reproducer, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--use-reproducer"[2], use_reproducer, Separate, grp_general, INVALID, nullptr, 0, 0,
       "Use the object files from the given reproducer path.", "<path>", nullptr)
OPTION(prefix_2, &"-u"[1], anonymous_4, Flag, grp_general, update, nullptr, 0, 0,
       "Alias for --update", nullptr, nullptr)
OPTION(prefix_1, &"--verbose"[2], verbose, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Enable verbose mode.", nullptr, nullptr)
OPTION(prefix_1, &"--verify"[2], verify, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Run the DWARF verifier on the linked DWARF debug info.", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Prints the dsymutil version.", nullptr, nullptr)
OPTION(prefix_2, &"-v"[1], anonymous_1, Flag, grp_general, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_3, &"-y"[1], yaml_input, Flag, grp_general, INVALID, nullptr, 0, 0,
       "Treat the input file is a YAML debug map rather than a binary.", nullptr, nullptr)
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

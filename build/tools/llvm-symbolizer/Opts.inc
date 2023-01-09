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
OPTION(nullptr, "kind", grp_mach_o, Group, INVALID, INVALID, nullptr, 0, 0,
       "llvm-symbolizer Mach-O Specific Options", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--addresses"[2], addresses, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Show address before line information", nullptr, nullptr)
OPTION(prefix_1, &"--adjust-vma="[2], adjust_vma_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Add specified offset to object file addresses", "<offset>", nullptr)
OPTION(prefix_1, &"--adjust-vma"[2], anonymous_0, Separate, INVALID, adjust_vma_EQ, nullptr, 0, 0, nullptr, "<offset>", nullptr)
OPTION(prefix_2, &"-a"[1], anonymous_9, Flag, INVALID, addresses, nullptr, 0, 0,
       "Alias for --addresses", nullptr, nullptr)
OPTION(prefix_1, &"--basenames"[2], basenames, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip directory names from paths", nullptr, nullptr)
OPTION(prefix_2, &"-C"[1], anonymous_11, Flag, INVALID, demangle, nullptr, 0, 0,
       "Alias for --demangle", nullptr, nullptr)
OPTION(prefix_1, &"--debug-file-directory="[2], debug_file_directory_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Path to directory where to look for debug files", "<dir>", nullptr)
OPTION(prefix_1, &"--debug-file-directory"[2], anonymous_1, Separate, INVALID, debug_file_directory_EQ, nullptr, 0, 0, nullptr, "<dir>", nullptr)
OPTION(prefix_1, &"--default-arch="[2], default_arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, 0,
       "Default architecture (for multi-arch objects)", nullptr, nullptr)
OPTION(prefix_1, &"--default-arch"[2], anonymous_2, Separate, grp_mach_o, default_arch_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-demangle=false"[1], anonymous_27, Flag, INVALID, no_demangle, nullptr, 0, 0,
       "Alias for --no-demangle", nullptr, nullptr)
OPTION(prefix_2, &"-demangle=true"[1], anonymous_26, Flag, INVALID, demangle, nullptr, 0, 0,
       "Alias for --demangle", nullptr, nullptr)
OPTION(prefix_1, &"--demangle"[2], demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Demangle function names", nullptr, nullptr)
OPTION(prefix_1, &"--dia"[2], use_dia, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use the DIA library to access symbols (Windows only)", nullptr, nullptr)
OPTION(prefix_1, &"--dsym-hint="[2], dsym_hint_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, 0,
       "Path to .dSYM bundles to search for debug info for the object files", "<dir>", nullptr)
OPTION(prefix_1, &"--dsym-hint"[2], anonymous_4, Separate, grp_mach_o, dsym_hint_EQ, nullptr, 0, 0, nullptr, "<dir>", nullptr)
OPTION(prefix_1, &"--dwp="[2], dwp_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Path to DWP file to be use for any split CUs", "<file>", nullptr)
OPTION(prefix_1, &"--dwp"[2], anonymous_3, Separate, INVALID, dwp_EQ, nullptr, 0, 0, nullptr, "<file>", nullptr)
OPTION(prefix_2, &"-e="[1], anonymous_15, Joined, INVALID, obj_EQ, nullptr, 0, 0,
       "Alias for --obj", "<file>", nullptr)
OPTION(prefix_1, &"--exe="[2], anonymous_12, Joined, INVALID, obj_EQ, nullptr, 0, 0,
       "Alias for --obj", "<file>", nullptr)
OPTION(prefix_1, &"--exe"[2], anonymous_13, Separate, INVALID, obj_EQ, nullptr, 0, 0,
       "Alias for --obj", "<file>", nullptr)
OPTION(prefix_2, &"-e"[1], anonymous_14, JoinedOrSeparate, INVALID, obj_EQ, nullptr, 0, 0,
       "Alias for --obj", "<file>", nullptr)
OPTION(prefix_2, &"-f="[1], anonymous_17, Joined, INVALID, functions_EQ, nullptr, 0, 0,
       "Alias for --functions=", nullptr, nullptr)
OPTION(prefix_1, &"--fallback-debug-path="[2], fallback_debug_path_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Fallback path for debug binaries", "<dir>", nullptr)
OPTION(prefix_1, &"--fallback-debug-path"[2], anonymous_5, Separate, INVALID, fallback_debug_path_EQ, nullptr, 0, 0, nullptr, "<dir>", nullptr)
OPTION(prefix_1, &"--functions="[2], functions_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print function name for a given address", nullptr, "none,short,linkage")
OPTION(prefix_1, &"--functions"[2], functions, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print function name for a given address", nullptr, nullptr)
OPTION(prefix_2, &"-f"[1], anonymous_16, Flag, INVALID, functions, nullptr, 0, 0,
       "Alias for --functions", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_18, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--inlines"[2], inlines, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print all inlined frames for a given address", nullptr, nullptr)
OPTION(prefix_1, &"--inlining=false"[2], anonymous_25, Flag, INVALID, no_inlines, nullptr, 0, 0,
       "Alias for --no-inlines", nullptr, nullptr)
OPTION(prefix_1, &"--inlining=true"[2], anonymous_24, Flag, INVALID, inlines, nullptr, 0, 0,
       "Alias for --inlines", nullptr, nullptr)
OPTION(prefix_1, &"--inlining"[2], anonymous_20, Flag, INVALID, inlines, nullptr, 0, 0,
       "Alias for --inlines", nullptr, nullptr)
OPTION(prefix_2, &"-i"[1], anonymous_19, Flag, INVALID, inlines, nullptr, 0, 0,
       "Alias for --inlines", nullptr, nullptr)
OPTION(prefix_1, &"--no-demangle"[2], no_demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't demangle function names", nullptr, nullptr)
OPTION(prefix_1, &"--no-inlines"[2], no_inlines, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not print inlined frames", nullptr, nullptr)
OPTION(prefix_1, &"--no-untag-addresses"[2], no_untag_addresses, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove memory tags from addresses before symbolization", nullptr, nullptr)
OPTION(prefix_1, &"--obj="[2], obj_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Path to object file to be symbolized (if not provided, object file should be specified for each input line)", "<file>", nullptr)
OPTION(prefix_1, &"--obj"[2], anonymous_6, Separate, INVALID, obj_EQ, nullptr, 0, 0, nullptr, "<file>", nullptr)
OPTION(prefix_1, &"--output-style="[2], output_style_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify print style. Supported styles: LLVM, GNU, JSON", "style", "LLVM,GNU,JSON")
OPTION(prefix_1, &"--output-style"[2], anonymous_7, Separate, INVALID, output_style_EQ, nullptr, 0, 0, nullptr, "style", "LLVM,GNU,JSON")
OPTION(prefix_1, &"--pretty-print"[2], pretty_print, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Make the output more human friendly", nullptr, nullptr)
OPTION(prefix_1, &"--print-address"[2], anonymous_10, Flag, INVALID, addresses, nullptr, 0, 0,
       "Alias for --addresses", nullptr, nullptr)
OPTION(prefix_1, &"--print-source-context-lines="[2], print_source_context_lines_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print N lines of source file context", nullptr, nullptr)
OPTION(prefix_1, &"--print-source-context-lines"[2], anonymous_8, Separate, INVALID, print_source_context_lines_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-p"[1], anonymous_21, Flag, INVALID, pretty_print, nullptr, 0, 0,
       "Alias for --pretty-print", nullptr, nullptr)
OPTION(prefix_1, &"--relative-address"[2], relative_address, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Interpret addresses as addresses relative to the image base", nullptr, nullptr)
OPTION(prefix_1, &"--relativenames"[2], relativenames, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip the compilation directory from paths", nullptr, nullptr)
OPTION(prefix_2, &"-s"[1], anonymous_22, Flag, INVALID, basenames, nullptr, 0, 0,
       "Alias for --basenames", nullptr, nullptr)
OPTION(prefix_1, &"--untag-addresses"[2], untag_addresses, Flag, INVALID, INVALID, nullptr, 0, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"--use-symbol-table=true"[2], anonymous_28, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--verbose"[2], verbose, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print verbose line info", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version", nullptr, nullptr)
OPTION(prefix_2, &"-v"[1], anonymous_23, Flag, INVALID, version, nullptr, 0, 0,
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

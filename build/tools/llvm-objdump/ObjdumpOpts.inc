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
       "llvm-objdump MachO Specific Options", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--adjust-vma="[2], adjust_vma_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Increase the displayed address by the specified offset", "offset", nullptr)
OPTION(prefix_1, &"--all-headers"[2], all_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display all available header information, relocation entries and the symbol table", nullptr, nullptr)
OPTION(prefix_1, &"--arch-name="[2], arch_name_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target arch to disassemble for, see --version for available targets", nullptr, nullptr)
OPTION(prefix_1, &"--arch="[2], arch_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, 0,
       "architecture(s) from a Mach-O file to dump", nullptr, nullptr)
OPTION(prefix_1, &"--archive-headers"[2], archive_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display archive header information", nullptr, nullptr)
OPTION(prefix_1, &"--archive-member-offsets"[2], archive_member_offsets, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the offset to each archive member for Mach-O archives (requires --macho and --archive-headers)", nullptr, nullptr)
OPTION(prefix_1, &"--arch"[2], anonymous_28, Separate, grp_mach_o, arch_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-a"[1], anonymous_2, Flag, INVALID, archive_headers, nullptr, 0, 0,
       "Alias for --archive-headers", nullptr, nullptr)
OPTION(prefix_1, &"--bind"[2], bind, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display mach-o binding info", nullptr, nullptr)
OPTION(prefix_2, &"-C"[1], anonymous_3, Flag, INVALID, demangle, nullptr, 0, 0,
       "Alias for --demangle", nullptr, nullptr)
OPTION(prefix_1, &"--data-in-code"[2], data_in_code, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the data in code table for Mach-O objects (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--debug-vars-indent="[2], debug_vars_indent_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Distance to indent the source-level variable display, relative to the start of the disassembly", nullptr, nullptr)
OPTION(prefix_1, &"--debug-vars="[2], debug_vars_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Print the locations (in registers or memory) of source-level variables alongside disassembly. Supported formats: ascii, unicode (default)", nullptr, "unicode,ascii")
OPTION(prefix_1, &"--debug-vars"[2], anonymous_26, Flag, INVALID, debug_vars_EQ, "unicode\0", 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--demangle"[2], demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Demangle symbol names", nullptr, nullptr)
OPTION(prefix_1, &"--dis-symname"[2], dis_symname, Separate, grp_mach_o, INVALID, nullptr, 0, 0,
       "disassemble just this symbol's instructions (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--disassemble-all"[2], disassemble_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disassemble all sections found in the input files", nullptr, nullptr)
OPTION(prefix_1, &"--disassemble-symbols="[2], disassemble_symbols_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "List of symbols to disassemble. Accept demangled names when --demangle is specified, otherwise accept mangled names", nullptr, nullptr)
OPTION(prefix_1, &"--disassemble-zeroes"[2], disassemble_zeroes, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not skip blocks of zeroes when disassembling", nullptr, nullptr)
OPTION(prefix_1, &"--disassembler-options="[2], disassembler_options_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Pass target specific disassembler options", "options", nullptr)
OPTION(prefix_1, &"--disassemble"[2], disassemble, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disassemble all executable sections found in the input files", nullptr, nullptr)
OPTION(prefix_1, &"--dsym="[2], dsym_EQ, Joined, grp_mach_o, INVALID, nullptr, 0, 0,
       "Use .dSYM file for debug info", nullptr, nullptr)
OPTION(prefix_1, &"--dsym"[2], anonymous_27, Separate, grp_mach_o, dsym_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--dwarf="[2], dwarf_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Dump the specified DWARF debug sections. The only supported value is 'frames'", nullptr, "frames")
OPTION(prefix_1, &"--dylib-id"[2], dylib_id, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the shared library's id for the dylib Mach-O file (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--dylibs-used"[2], dylibs_used, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the shared libraries used for linked Mach-O files (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--dynamic-reloc"[2], dynamic_reloc, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the dynamic relocation entries in the file", nullptr, nullptr)
OPTION(prefix_1, &"--dynamic-syms"[2], dynamic_syms, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the contents of the dynamic symbol table", nullptr, nullptr)
OPTION(prefix_2, &"-D"[1], anonymous_5, Flag, INVALID, disassemble_all, nullptr, 0, 0,
       "Alias for --disassemble-all", nullptr, nullptr)
OPTION(prefix_2, &"-d"[1], anonymous_4, Flag, INVALID, disassemble, nullptr, 0, 0,
       "Alias for --disassemble", nullptr, nullptr)
OPTION(prefix_1, &"--exports-trie"[2], exports_trie, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display mach-o exported symbols", nullptr, nullptr)
OPTION(prefix_1, &"--fault-map-section"[2], fault_map_section, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the content of the fault map section", nullptr, nullptr)
OPTION(prefix_1, &"--file-headers"[2], file_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the contents of the overall file header", nullptr, nullptr)
OPTION(prefix_1, &"--full-contents"[2], full_contents, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the content of each section", nullptr, nullptr)
OPTION(prefix_1, &"--full-leading-addr"[2], full_leading_addr, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print full leading address", nullptr, nullptr)
OPTION(prefix_1, &"--function-starts"[2], function_starts, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the function starts table for Mach-O objects (requires --macho)", nullptr, nullptr)
OPTION(prefix_2, &"-f"[1], anonymous_9, Flag, INVALID, file_headers, nullptr, 0, 0,
       "Alias for --file-headers", nullptr, nullptr)
OPTION(prefix_2, &"-g"[1], g, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print line information from debug info if available", nullptr, nullptr)
OPTION(prefix_1, &"--headers"[2], anonymous_18, Flag, INVALID, section_headers, nullptr, 0, 0,
       "Alias for --section-headers", nullptr, nullptr)
OPTION(prefix_1, &"--help-hidden"[2], help_hidden, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Display all available options", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display available options (--help-hidden for more)", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_19, Flag, INVALID, section_headers, nullptr, 0, 0,
       "Alias for --section-headers", nullptr, nullptr)
OPTION(prefix_1, &"--indirect-symbols"[2], indirect_symbols, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print indirect symbol table for Mach-O objects (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--info-plist"[2], info_plist, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the info plist section as strings for Mach-O objects (requires --macho)", nullptr, nullptr)
OPTION(prefix_2, &"-j"[1], anonymous_17, JoinedOrSeparate, INVALID, section_EQ, nullptr, 0, 0,
       "Alias for --section", nullptr, nullptr)
OPTION(prefix_1, &"--lazy-bind"[2], lazy_bind, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display mach-o lazy binding info", nullptr, nullptr)
OPTION(prefix_1, &"--line-numbers"[2], line_numbers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "When disassembling, display source line numbers. Implies --disassemble", nullptr, nullptr)
OPTION(prefix_1, &"--link-opt-hints"[2], link_opt_hints, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the linker optimization hints for Mach-O objects (requires --macho)", nullptr, nullptr)
OPTION(prefix_2, &"-l"[1], anonymous_11, Flag, INVALID, line_numbers, nullptr, 0, 0,
       "Alias for --line-numbers", nullptr, nullptr)
OPTION(prefix_1, &"--macho"[2], macho, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use MachO specific object file parser", nullptr, nullptr)
OPTION(prefix_1, &"--mattr="[2], mattr_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target specific attributes (--mattr=help for details)", "a1,+a2,-a3,...", nullptr)
OPTION(prefix_1, &"--mcpu="[2], mcpu_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target a specific cpu type (--mcpu=help for details)", "cpu-name", nullptr)
OPTION(prefix_2, &"-M"[1], anonymous_7, JoinedOrSeparate, INVALID, disassembler_options_EQ, nullptr, 0, 0,
       "Alias for --disassembler-options=", nullptr, nullptr)
OPTION(prefix_2, &"-m"[1], anonymous_12, Flag, INVALID, macho, nullptr, 0, 0,
       "Alias for --macho", nullptr, nullptr)
OPTION(prefix_1, &"--no-leading-addr"[2], no_leading_addr, Flag, INVALID, INVALID, nullptr, 0, 0,
       "When disassembling, do not print leading addresses", nullptr, nullptr)
OPTION(prefix_1, &"--no-leading-headers"[2], no_leading_headers, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print no leading headers", nullptr, nullptr)
OPTION(prefix_1, &"--no-print-imm-hex"[2], no_print_imm_hex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not use hex format for immediate values (default)", nullptr, nullptr)
OPTION(prefix_1, &"--no-show-raw-insn"[2], no_show_raw_insn, Flag, INVALID, INVALID, nullptr, 0, 0,
       "When disassembling instructions, do not print the instruction bytes.", nullptr, nullptr)
OPTION(prefix_1, &"--no-symbolic-operands"[2], no_symbolic_operands, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "do not symbolic operands when disassembling (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--non-verbose"[2], non_verbose, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the info for Mach-O objects in non-verbose or numeric form (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--objc-meta-data"[2], objc_meta_data, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the Objective-C runtime meta data for Mach-O files (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--prefix-strip="[2], prefix_strip_eq, Joined, INVALID, prefix_strip, nullptr, 0, 0,
       "Strip out initial directories from absolute paths. No effect without --prefix", "prefix", nullptr)
OPTION(prefix_1, &"--prefix-strip"[2], prefix_strip, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, &"--prefix="[2], prefix_eq, Joined, INVALID, prefix, nullptr, 0, 0,
       "Add prefix to absolute paths", "prefix", nullptr)
OPTION(prefix_1, &"--prefix"[2], prefix, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, &"--print-imm-hex=false"[2], anonymous_14, Flag, INVALID, no_print_imm_hex, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--print-imm-hex"[2], print_imm_hex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use hex format for immediate values", nullptr, nullptr)
OPTION(prefix_1, &"--private-headers"[2], private_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display format specific file headers", nullptr, nullptr)
OPTION(prefix_1, &"--private-header"[2], private_header, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display only the first format specific file header", nullptr, nullptr)
OPTION(prefix_2, &"-p"[1], anonymous_15, Flag, INVALID, private_headers, nullptr, 0, 0,
       "Alias for --private-headers", nullptr, nullptr)
OPTION(prefix_1, &"--raw-clang-ast"[2], raw_clang_ast, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Dump the raw binary contents of the clang AST section", nullptr, nullptr)
OPTION(prefix_1, &"--rebase"[2], rebase, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display mach-o rebasing info", nullptr, nullptr)
OPTION(prefix_1, &"--reloc"[2], reloc, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the relocation entries in the file", nullptr, nullptr)
OPTION(prefix_1, &"--rpaths"[2], rpaths, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print the runtime search paths for the Mach-O file (requires --macho)", nullptr, nullptr)
OPTION(prefix_2, &"-R"[1], anonymous_8, Flag, INVALID, dynamic_reloc, nullptr, 0, 0,
       "Alias for --dynamic-reloc", nullptr, nullptr)
OPTION(prefix_2, &"-r"[1], anonymous_13, Flag, INVALID, reloc, nullptr, 0, 0,
       "Alias for --reloc", nullptr, nullptr)
OPTION(prefix_1, &"--section-headers"[2], section_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display summaries of the headers for each section.", nullptr, nullptr)
OPTION(prefix_1, &"--section="[2], section_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Operate on the specified sections only. With --macho dump segment,section", nullptr, nullptr)
OPTION(prefix_1, &"--section"[2], anonymous_16, Separate, INVALID, section_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--show-lma"[2], show_lma, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display LMA column when dumping ELF section headers", nullptr, nullptr)
OPTION(prefix_1, &"--source"[2], source, Flag, INVALID, INVALID, nullptr, 0, 0,
       "When disassembling, display source interleaved with the disassembly. Implies --disassemble", nullptr, nullptr)
OPTION(prefix_1, &"--start-address="[2], start_address_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Set the start address for disassembling, printing relocations and printing symbols", "address", nullptr)
OPTION(prefix_1, &"--stop-address="[2], stop_address_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Set the stop address for disassembling, printing relocations and printing symbols", "address", nullptr)
OPTION(prefix_1, &"--symbol-description"[2], symbol_description, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Add symbol description for disassembly. This option is for XCOFF files only.", nullptr, nullptr)
OPTION(prefix_1, &"--symbolize-operands"[2], symbolize_operands, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Symbolize instruction operands when disassembling", nullptr, nullptr)
OPTION(prefix_1, &"--syms"[2], syms, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the symbol table", nullptr, nullptr)
OPTION(prefix_2, &"-S"[1], anonymous_20, Flag, INVALID, source, nullptr, 0, 0,
       "Alias for --source", nullptr, nullptr)
OPTION(prefix_2, &"-s"[1], anonymous_10, Flag, INVALID, full_contents, nullptr, 0, 0,
       "Alias for --full-contents", nullptr, nullptr)
OPTION(prefix_1, &"--triple="[2], triple_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target triple to disassemble for, see --version for available targets", nullptr, nullptr)
OPTION(prefix_1, &"--triple"[2], anonymous_23, Separate, INVALID, triple_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-T"[1], anonymous_22, Flag, INVALID, dynamic_syms, nullptr, 0, 0,
       "Alias for --dynamic-syms", nullptr, nullptr)
OPTION(prefix_2, &"-t"[1], anonymous_21, Flag, INVALID, syms, nullptr, 0, 0,
       "Alias for --syms", nullptr, nullptr)
OPTION(prefix_1, &"--universal-headers"[2], universal_headers, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Print Mach-O universal headers (requires --macho)", nullptr, nullptr)
OPTION(prefix_1, &"--unwind-info"[2], unwind_info, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display unwind information", nullptr, nullptr)
OPTION(prefix_2, &"-u"[1], anonymous_24, Flag, INVALID, unwind_info, nullptr, 0, 0,
       "Alias for --unwind-info", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version of this program", nullptr, nullptr)
OPTION(prefix_2, &"-v"[1], anonymous_0, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_1, &"--weak-bind"[2], weak_bind, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display mach-o weak binding info", nullptr, nullptr)
OPTION(prefix_1, &"--wide"[2], wide, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignored for compatibility with GNU objdump", nullptr, nullptr)
OPTION(prefix_2, &"-w"[1], anonymous_25, Flag, INVALID, wide, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--x86-asm-syntax=att"[2], x86_asm_syntax_att, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Emit AT&T-style disassembly", nullptr, nullptr)
OPTION(prefix_1, &"--x86-asm-syntax=intel"[2], x86_asm_syntax_intel, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Emit Intel-style disassembly", nullptr, nullptr)
OPTION(prefix_2, &"-x"[1], anonymous_1, Flag, INVALID, all_headers, nullptr, 0, 0,
       "Alias for --all-headers", nullptr, nullptr)
OPTION(prefix_2, &"-z"[1], anonymous_6, Flag, INVALID, disassemble_zeroes, nullptr, 0, 0,
       "Alias for --disassemble-zeroes", nullptr, nullptr)
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

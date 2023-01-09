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
OPTION(nullptr, "kind", grp_coff, Group, INVALID, INVALID, nullptr, 0, 0,
       "OPTIONS (PE/COFF specific)", nullptr, nullptr)
OPTION(nullptr, "kind", grp_elf, Group, INVALID, INVALID, nullptr, 0, 0,
       "OPTIONS (ELF specific)", nullptr, nullptr)
OPTION(nullptr, "kind", grp_mach_o, Group, INVALID, INVALID, nullptr, 0, 0,
       "OPTIONS (Mach-O specific)", nullptr, nullptr)
OPTION(nullptr, "kind", grp_xcoff, Group, INVALID, INVALID, nullptr, 0, 0,
       "OPTIONS (XCOFF specific)", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--addrsig"[2], addrsig, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display address-significance table", nullptr, nullptr)
OPTION(prefix_1, &"--all"[2], all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Equivalent to setting: --file-header, --program-headers, --section-headers, --symbols, --relocations, --dynamic-table, --notes, --version-info, --unwind, --section-groups and --histogram", nullptr, nullptr)
OPTION(prefix_1, &"--arch-specific"[2], arch_specific, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display architecture-specific information", nullptr, nullptr)
OPTION(prefix_1, &"--auxiliary-header"[2], auxiliary_header, Flag, grp_xcoff, INVALID, nullptr, 0, 0,
       "display the auxiliary header", nullptr, nullptr)
OPTION(prefix_2, &"-A"[1], anonymous_18, Flag, INVALID, arch_specific, nullptr, 0, 0,
       "Alias for --arch-specific", nullptr, nullptr)
OPTION(prefix_2, &"-a"[1], anonymous_19, Flag, INVALID, all, nullptr, 0, 0,
       "Alias for --all", nullptr, nullptr)
OPTION(prefix_1, &"--bb-addr-map"[2], bb_addr_map, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the BB address map section", nullptr, nullptr)
OPTION(prefix_1, &"--cg-profile"[2], cg_profile, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display call graph profile section", nullptr, nullptr)
OPTION(prefix_1, &"--codeview-ghash"[2], codeview_ghash, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Enable global hashing for CodeView type stream de-duplication", nullptr, nullptr)
OPTION(prefix_1, &"--codeview-merged-types"[2], codeview_merged_types, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display the merged CodeView type stream", nullptr, nullptr)
OPTION(prefix_1, &"--codeview-subsection-bytes"[2], codeview_subsection_bytes, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Dump raw contents of codeview debug sections and records", nullptr, nullptr)
OPTION(prefix_1, &"--codeview"[2], codeview, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display CodeView debug information", nullptr, nullptr)
OPTION(prefix_1, &"--coff-basereloc"[2], coff_basereloc, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display .reloc section", nullptr, nullptr)
OPTION(prefix_1, &"--coff-debug-directory"[2], coff_debug_directory, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display debug directory", nullptr, nullptr)
OPTION(prefix_1, &"--coff-directives"[2], coff_directives, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display .drectve section", nullptr, nullptr)
OPTION(prefix_1, &"--coff-exports"[2], coff_exports, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display export table", nullptr, nullptr)
OPTION(prefix_1, &"--coff-imports"[2], coff_imports, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display import table", nullptr, nullptr)
OPTION(prefix_1, &"--coff-load-config"[2], coff_load_config, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display load config", nullptr, nullptr)
OPTION(prefix_1, &"--coff-resources"[2], coff_resources, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display .rsrc section", nullptr, nullptr)
OPTION(prefix_1, &"--coff-tls-directory"[2], coff_tls_directory, Flag, grp_coff, INVALID, nullptr, 0, 0,
       "Display TLS directory", nullptr, nullptr)
OPTION(prefix_2, &"-C"[1], anonymous_20, Flag, INVALID, demangle, nullptr, 0, 0,
       "Alias for --demangle", nullptr, nullptr)
OPTION(prefix_1, &"--demangle"[2], demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Demangle symbol names", nullptr, nullptr)
OPTION(prefix_1, &"--dependent-libraries"[2], dependent_libraries, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the dependent libraries section", nullptr, nullptr)
OPTION(prefix_1, &"--dt"[2], anonymous_4, Flag, INVALID, dyn_syms, nullptr, 0, 0,
       "Alias for --dyn-syms", nullptr, nullptr)
OPTION(prefix_1, &"--dyn-relocations"[2], dyn_relocations, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the dynamic relocation entries in the file", nullptr, nullptr)
OPTION(prefix_1, &"--dyn-symbols"[2], anonymous_8, Flag, INVALID, dyn_syms, nullptr, 0, 0,
       "Alias for --dyn-syms", nullptr, nullptr)
OPTION(prefix_1, &"--dyn-syms"[2], dyn_syms, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the dynamic symbol table", nullptr, nullptr)
OPTION(prefix_1, &"--dynamic-table"[2], dynamic_table, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display the dynamic section table", nullptr, nullptr)
OPTION(prefix_1, &"--dynamic"[2], anonymous_9, Flag, INVALID, dynamic_table, nullptr, 0, 0,
       "Alias for --dynamic-table", nullptr, nullptr)
OPTION(prefix_2, &"-d"[1], anonymous_21, Flag, grp_elf, dynamic_table, nullptr, 0, 0,
       "Alias for --dynamic-table", nullptr, nullptr)
OPTION(prefix_1, &"--elf-cg-profile"[2], anonymous_10, Flag, INVALID, cg_profile, nullptr, HelpHidden, 0,
       "Alias for --cg-profile", nullptr, nullptr)
OPTION(prefix_1, &"--elf-hash-histogram"[2], anonymous_11, Flag, INVALID, histogram, nullptr, HelpHidden, 0,
       "Alias for --histogram", nullptr, nullptr)
OPTION(prefix_1, &"--elf-linker-options"[2], elf_linker_options, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display the .linker-options section", nullptr, nullptr)
OPTION(prefix_1, &"--elf-output-style="[2], elf_output_style_EQ, Joined, grp_elf, INVALID, nullptr, 0, 0,
       "Specify ELF dump style: LLVM, GNU, JSON", nullptr, nullptr)
OPTION(prefix_1, &"--elf-output-style"[2], anonymous_2, Separate, grp_elf, elf_output_style_EQ, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--elf-section-groups"[2], anonymous_12, Flag, INVALID, section_groups, nullptr, HelpHidden, 0,
       "Alias for --section-groups", nullptr, nullptr)
OPTION(prefix_1, &"--expand-relocs"[2], expand_relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Expand each shown relocation to multiple lines", nullptr, nullptr)
OPTION(prefix_2, &"-e"[1], anonymous_22, Flag, INVALID, headers, nullptr, 0, 0,
       "Alias for --headers", nullptr, nullptr)
OPTION(prefix_1, &"--file-headers"[2], anonymous_13, Flag, INVALID, file_header, nullptr, HelpHidden, 0,
       "Alias for --file-header", nullptr, nullptr)
OPTION(prefix_1, &"--file-header"[2], file_header, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display file header", nullptr, nullptr)
OPTION(prefix_1, &"--gnu-hash-table"[2], gnu_hash_table, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display the GNU hash table for dynamic symbols", nullptr, nullptr)
OPTION(prefix_2, &"-g"[1], anonymous_23, Flag, grp_elf, section_groups, nullptr, 0, 0,
       "Alias for --section-groups", nullptr, nullptr)
OPTION(prefix_1, &"--hash-symbols"[2], hash_symbols, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display the dynamic symbols derived from the hash section", nullptr, nullptr)
OPTION(prefix_1, &"--hash-table"[2], hash_table, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display .hash section", nullptr, nullptr)
OPTION(prefix_1, &"--headers"[2], headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Equivalent to setting: --file-header, --program-headers, --section-headers", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display this help", nullptr, nullptr)
OPTION(prefix_1, &"--hex-dump="[2], hex_dump_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Display the specified section(s) as hexadecimal bytes", "<name or index>", nullptr)
OPTION(prefix_1, &"--hex-dump"[2], anonymous_0, Separate, INVALID, hex_dump_EQ, nullptr, 0, 0, nullptr, "<name or index>", nullptr)
OPTION(prefix_1, &"--histogram"[2], histogram, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display bucket list histogram for hash sections", nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], anonymous_24, Flag, INVALID, file_header, nullptr, 0, 0,
       "Alias for --file-header", nullptr, nullptr)
OPTION(prefix_2, &"-I"[1], anonymous_25, Flag, grp_elf, histogram, nullptr, 0, 0,
       "Alias for --histogram", nullptr, nullptr)
OPTION(prefix_2, &"-l"[1], anonymous_26, Flag, INVALID, program_headers, nullptr, 0, 0,
       "Alias for --program-headers", nullptr, nullptr)
OPTION(prefix_1, &"--macho-data-in-code"[2], macho_data_in_code, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display Data in Code command", nullptr, nullptr)
OPTION(prefix_1, &"--macho-dysymtab"[2], macho_dysymtab, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display Dysymtab command", nullptr, nullptr)
OPTION(prefix_1, &"--macho-indirect-symbols"[2], macho_indirect_symbols, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display indirect symbols", nullptr, nullptr)
OPTION(prefix_1, &"--macho-linker-options"[2], macho_linker_options, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display linker options", nullptr, nullptr)
OPTION(prefix_1, &"--macho-segment"[2], macho_segment, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display Segment command", nullptr, nullptr)
OPTION(prefix_1, &"--macho-version-min"[2], macho_version_min, Flag, grp_mach_o, INVALID, nullptr, 0, 0,
       "Display version min command", nullptr, nullptr)
OPTION(prefix_1, &"--needed-libs"[2], needed_libs, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display the needed libraries", nullptr, nullptr)
OPTION(prefix_1, &"--no-demangle"[2], no_demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not demangle symbol names (default)", nullptr, nullptr)
OPTION(prefix_1, &"--notes"[2], notes, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display notes", nullptr, nullptr)
OPTION(prefix_2, &"-n"[1], anonymous_27, Flag, INVALID, notes, nullptr, 0, 0,
       "Alias for --notes", nullptr, nullptr)
OPTION(prefix_1, &"--pretty-print"[2], pretty_print, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Pretty print JSON output", nullptr, nullptr)
OPTION(prefix_1, &"--program-headers"[2], program_headers, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display program headers", nullptr, nullptr)
OPTION(prefix_2, &"-p"[1], anonymous_28, JoinedOrSeparate, INVALID, string_dump_EQ, nullptr, 0, 0,
       "Alias for --string-dump", "<name or index>", nullptr)
OPTION(prefix_1, &"--raw-relr"[2], raw_relr, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Do not decode relocations in SHT_RELR section, display raw contents", nullptr, nullptr)
OPTION(prefix_1, &"--relocations"[2], anonymous_14, Flag, INVALID, relocs, nullptr, 0, 0,
       "Alias for --relocs", nullptr, nullptr)
OPTION(prefix_1, &"--relocs"[2], relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the relocation entries in the file", nullptr, nullptr)
OPTION(prefix_2, &"-r"[1], anonymous_29, Flag, INVALID, relocs, nullptr, 0, 0,
       "Alias for --relocs", nullptr, nullptr)
OPTION(prefix_1, &"--sd"[2], anonymous_5, Flag, INVALID, section_data, nullptr, 0, 0,
       "Alias for --section-data", nullptr, nullptr)
OPTION(prefix_1, &"--section-data"[2], section_data, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display section data for each section shown. This option has no effect for GNU style output", nullptr, nullptr)
OPTION(prefix_1, &"--section-details"[2], section_details, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the section details", nullptr, nullptr)
OPTION(prefix_1, &"--section-groups"[2], section_groups, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display section groups", nullptr, nullptr)
OPTION(prefix_1, &"--section-headers"[2], section_headers, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display section headers", nullptr, nullptr)
OPTION(prefix_1, &"--section-mapping=false"[2], section_mapping_EQ_false, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Don't display the section to segment mapping", nullptr, nullptr)
OPTION(prefix_1, &"--section-mapping"[2], section_mapping, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the section to segment mapping", nullptr, nullptr)
OPTION(prefix_1, &"--section-relocations"[2], section_relocations, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display relocations for each section shown. This option has no effect for GNU style output", nullptr, nullptr)
OPTION(prefix_1, &"--section-symbols"[2], section_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display symbols for each section shown. This option has no effect for GNU style output", nullptr, nullptr)
OPTION(prefix_1, &"--sections"[2], anonymous_15, Flag, INVALID, section_headers, nullptr, 0, 0,
       "Alias for --section-headers", nullptr, nullptr)
OPTION(prefix_1, &"--segments"[2], anonymous_16, Flag, grp_elf, program_headers, nullptr, 0, 0,
       "Alias for --program-headers", nullptr, nullptr)
OPTION(prefix_1, &"--sr"[2], anonymous_7, Flag, INVALID, section_relocations, nullptr, 0, 0,
       "Alias for --section-relocations", nullptr, nullptr)
OPTION(prefix_1, &"--stack-sizes"[2], stack_sizes, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display contents of all stack sizes sections. This option has no effect for GNU style output", nullptr, nullptr)
OPTION(prefix_1, &"--stackmap"[2], stackmap, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display contents of stackmap section", nullptr, nullptr)
OPTION(prefix_1, &"--string-dump="[2], string_dump_EQ, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Display the specified section(s) as a list of strings", "<name or index>", nullptr)
OPTION(prefix_1, &"--string-dump"[2], anonymous_1, Separate, INVALID, string_dump_EQ, nullptr, 0, 0, nullptr, "<name or index>", nullptr)
OPTION(prefix_1, &"--string-table"[2], string_table, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the string table (only for XCOFF now)", nullptr, nullptr)
OPTION(prefix_1, &"--st"[2], anonymous_6, Flag, INVALID, section_symbols, nullptr, 0, 0,
       "Alias for --section-symbols", nullptr, nullptr)
OPTION(prefix_1, &"--symbols"[2], symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the symbol table. Also display the dynamic symbol table when using GNU output style for ELF", nullptr, nullptr)
OPTION(prefix_1, &"--syms"[2], anonymous_17, Flag, INVALID, symbols, nullptr, 0, 0,
       "Alias for --symbols", nullptr, nullptr)
OPTION(prefix_2, &"-S"[1], anonymous_30, Flag, INVALID, section_headers, nullptr, 0, 0,
       "Alias for --section-headers", nullptr, nullptr)
OPTION(prefix_2, &"-s"[1], anonymous_31, Flag, INVALID, symbols, nullptr, 0, 0,
       "Alias for --symbols", nullptr, nullptr)
OPTION(prefix_2, &"-t"[1], anonymous_32, Flag, INVALID, section_details, nullptr, 0, 0,
       "Alias for --section-details", nullptr, nullptr)
OPTION(prefix_1, &"--unwind"[2], unwind, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display unwind information", nullptr, nullptr)
OPTION(prefix_2, &"-u"[1], anonymous_33, Flag, INVALID, unwind, nullptr, 0, 0,
       "Alias for --unwind", nullptr, nullptr)
OPTION(prefix_1, &"--version-info"[2], version_info, Flag, grp_elf, INVALID, nullptr, 0, 0,
       "Display version sections", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version", nullptr, nullptr)
OPTION(prefix_2, &"-V"[1], anonymous_34, Flag, grp_elf, version_info, nullptr, 0, 0,
       "Alias for --version-info", nullptr, nullptr)
OPTION(prefix_1, &"--wide"[2], wide, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignored for GNU readelf compatibility", nullptr, nullptr)
OPTION(prefix_2, &"-W"[1], anonymous_3, Flag, INVALID, wide, nullptr, 0, 0,
       "Ignored for GNU readelf compatibility", nullptr, nullptr)
OPTION(prefix_2, &"-x"[1], anonymous_35, JoinedOrSeparate, INVALID, hex_dump_EQ, nullptr, 0, 0,
       "Alias for --hex-dump", "<name or index>", nullptr)
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

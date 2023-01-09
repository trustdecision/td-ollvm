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
OPTION(prefix_1, &"--add-gnu-debuglink="[2], add_gnu_debuglink_eq, Joined, INVALID, add_gnu_debuglink, nullptr, 0, 0,
       "Add a .gnu_debuglink for <debug-file>", "debug-file", nullptr)
OPTION(prefix_1, &"--add-gnu-debuglink"[2], add_gnu_debuglink, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "debug-file", nullptr)
OPTION(prefix_1, &"--add-section="[2], add_section_eq, Joined, INVALID, add_section, nullptr, 0, 0,
       "Make a section named <section> with the contents of <file>.", "section=file", nullptr)
OPTION(prefix_1, &"--add-section"[2], add_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=file", nullptr)
OPTION(prefix_1, &"--add-symbol="[2], add_symbol_eq, Joined, INVALID, add_symbol, nullptr, 0, 0,
       "Add new symbol <name> to .symtab. Accepted flags: global, local, weak, default, hidden, protected, file, section, object, function, indirect-function. Accepted but ignored for compatibility: debug, constructor, warning, indirect, synthetic, unique-object, before.", "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, &"--add-symbol"[2], add_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, &"--adjust-start"[2], adjust_start, JoinedOrSeparate, INVALID, change_start, nullptr, 0, 0,
       "Alias for --change-start", nullptr, nullptr)
OPTION(prefix_1, &"--allow-broken-links"[2], allow_broken_links, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow the tool to remove sections even if it would leave invalid section references. The appropriate sh_link fields will be set to zero.", nullptr, nullptr)
OPTION(prefix_1, &"--binary-architecture="[2], binary_architecture_eq, Joined, INVALID, binary_architecture, nullptr, 0, 0,
       "Ignored for compatibility", nullptr, nullptr)
OPTION(prefix_1, &"--binary-architecture"[2], binary_architecture, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-B"[1], B, JoinedOrSeparate, INVALID, binary_architecture, nullptr, 0, 0,
       "Alias for --binary-architecture", nullptr, nullptr)
OPTION(prefix_1, &"--change-start="[2], change_start_eq, Joined, INVALID, change_start, nullptr, 0, 0,
       "Add <incr> to the start address. Can be specified multiple times, all values will be applied cumulatively.", "incr", nullptr)
OPTION(prefix_1, &"--change-start"[2], change_start, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "incr", nullptr)
OPTION(prefix_1, &"--compress-debug-sections="[2], compress_debug_sections_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Compress DWARF debug sections using specified style. Supported styles: 'zlib-gnu' and 'zlib'", "[ zlib | zlib-gnu ]", nullptr)
OPTION(prefix_1, &"--compress-debug-sections"[2], compress_debug_sections, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--decompress-debug-sections"[2], decompress_debug_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Decompress DWARF debug sections.", nullptr, nullptr)
OPTION(prefix_1, &"--disable-deterministic-archives"[2], disable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable deterministic mode when operating on archives (use real values for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_1, &"--discard-all"[2], discard_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all local symbols except file and section symbols. Also remove all debug sections", nullptr, nullptr)
OPTION(prefix_1, &"--discard-locals"[2], discard_locals, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove compiler-generated local symbols, (e.g. symbols starting with .L)", nullptr, nullptr)
OPTION(prefix_1, &"--dump-section="[2], dump_section_eq, Joined, INVALID, dump_section, nullptr, 0, 0,
       "Dump contents of section named <section> into file <file>", "section=file", nullptr)
OPTION(prefix_1, &"--dump-section"[2], dump_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=file", nullptr)
OPTION(prefix_2, &"-D"[1], D, Flag, INVALID, enable_deterministic_archives, nullptr, 0, 0,
       "Alias for --enable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_1, &"--enable-deterministic-archives"[2], enable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable deterministic mode when operating on archives (use zero for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_1, &"--extract-dwo"[2], extract_dwo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all sections that are not DWARF .dwo sections from file", nullptr, nullptr)
OPTION(prefix_1, &"--extract-main-partition"[2], extract_main_partition, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Extract main partition from the input file", nullptr, nullptr)
OPTION(prefix_1, &"--extract-partition="[2], extract_partition_eq, Joined, INVALID, extract_partition, nullptr, 0, 0,
       "Extract named partition from input file", "name", nullptr)
OPTION(prefix_1, &"--extract-partition"[2], extract_partition, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name", nullptr)
OPTION(prefix_2, &"-F"[1], F, JoinedOrSeparate, INVALID, target, nullptr, 0, 0,
       "Alias for --target", nullptr, nullptr)
OPTION(prefix_1, &"--globalize-symbol="[2], globalize_symbol_eq, Joined, INVALID, globalize_symbol, nullptr, 0, 0,
       "Mark <symbol> as global", "symbol", nullptr)
OPTION(prefix_1, &"--globalize-symbols="[2], globalize_symbols_eq, Joined, INVALID, globalize_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them global.", "filename", nullptr)
OPTION(prefix_1, &"--globalize-symbols"[2], globalize_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--globalize-symbol"[2], globalize_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_2, &"-G"[1], G, JoinedOrSeparate, INVALID, keep_global_symbol, nullptr, 0, 0,
       "Alias for --keep-global-symbol", nullptr, nullptr)
OPTION(prefix_2, &"-g"[1], g, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--input-target="[2], input_target_eq, Joined, INVALID, input_target, nullptr, 0, 0,
       "Format of the input file", nullptr, "binary")
OPTION(prefix_1, &"--input-target"[2], input_target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_2, &"-I"[1], I, JoinedOrSeparate, INVALID, input_target, nullptr, 0, 0,
       "Alias for --input-target", nullptr, nullptr)
OPTION(prefix_2, &"-j"[1], j, JoinedOrSeparate, INVALID, only_section, nullptr, 0, 0,
       "Alias for --only-section", nullptr, nullptr)
OPTION(prefix_1, &"--keep-file-symbols"[2], keep_file_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove file symbols", nullptr, nullptr)
OPTION(prefix_1, &"--keep-global-symbol="[2], keep_global_symbol_eq, Joined, INVALID, keep_global_symbol, nullptr, 0, 0,
       "Convert all symbols except <symbol> to local. May be repeated to convert all except a set of symbols to local.", "symbol", nullptr)
OPTION(prefix_1, &"--keep-global-symbols="[2], keep_global_symbols_eq, Joined, INVALID, keep_global_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and runs as if --keep-global-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, &"--keep-global-symbols"[2], keep_global_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--keep-global-symbol"[2], keep_global_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--keep-section="[2], keep_section_eq, Joined, INVALID, keep_section, nullptr, 0, 0,
       "Keep <section>", "section", nullptr)
OPTION(prefix_1, &"--keep-section"[2], keep_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, &"--keep-symbol="[2], keep_symbol_eq, Joined, INVALID, keep_symbol, nullptr, 0, 0,
       "Do not remove symbol <symbol>", "symbol", nullptr)
OPTION(prefix_1, &"--keep-symbols="[2], keep_symbols_eq, Joined, INVALID, keep_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and runs as if --keep-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, &"--keep-symbols"[2], keep_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--keep-symbol"[2], keep_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--keep-undefined"[2], keep_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove undefined symbols", nullptr, nullptr)
OPTION(prefix_2, &"-K"[1], K, JoinedOrSeparate, INVALID, keep_symbol, nullptr, 0, 0,
       "Alias for --keep-symbol", nullptr, nullptr)
OPTION(prefix_1, &"--localize-hidden"[2], localize_hidden, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark all symbols that have hidden or internal visibility as local", nullptr, nullptr)
OPTION(prefix_1, &"--localize-symbol="[2], localize_symbol_eq, Joined, INVALID, localize_symbol, nullptr, 0, 0,
       "Mark <symbol> as local", "symbol", nullptr)
OPTION(prefix_1, &"--localize-symbols="[2], localize_symbols_eq, Joined, INVALID, localize_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them local.", "filename", nullptr)
OPTION(prefix_1, &"--localize-symbols"[2], localize_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--localize-symbol"[2], localize_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_2, &"-L"[1], L, JoinedOrSeparate, INVALID, localize_symbol, nullptr, 0, 0,
       "Alias for --localize-symbol", nullptr, nullptr)
OPTION(prefix_1, &"--new-symbol-visibility="[2], new_symbol_visibility_eq, Joined, INVALID, new_symbol_visibility, nullptr, 0, 0,
       "Visibility of symbols generated for binary input or added with --add-symbol unless otherwise specified. The default value is 'default'.", nullptr, nullptr)
OPTION(prefix_1, &"--new-symbol-visibility"[2], new_symbol_visibility, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-N"[1], N, JoinedOrSeparate, INVALID, strip_symbol, nullptr, 0, 0,
       "Alias for --strip-symbol", nullptr, nullptr)
OPTION(prefix_1, &"--only-keep-debug"[2], only_keep_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Produce a debug file as the output that only preserves contents of sections useful for debugging purposes", nullptr, nullptr)
OPTION(prefix_1, &"--only-section="[2], only_section_eq, Joined, INVALID, only_section, nullptr, 0, 0,
       "Remove all but <section>", "section", nullptr)
OPTION(prefix_1, &"--only-section"[2], only_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, &"--output-target="[2], output_target_eq, Joined, INVALID, output_target, nullptr, 0, 0,
       "Format of the output file", nullptr, "binary")
OPTION(prefix_1, &"--output-target"[2], output_target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_2, &"-O"[1], O, JoinedOrSeparate, INVALID, output_target, nullptr, 0, 0,
       "Alias for --output-target", nullptr, nullptr)
OPTION(prefix_1, &"--prefix-alloc-sections="[2], prefix_alloc_sections_eq, Joined, INVALID, prefix_alloc_sections, nullptr, 0, 0,
       "Add <prefix> to the start of every allocated section name", "prefix", nullptr)
OPTION(prefix_1, &"--prefix-alloc-sections"[2], prefix_alloc_sections, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, &"--prefix-symbols="[2], prefix_symbols_eq, Joined, INVALID, prefix_symbols, nullptr, 0, 0,
       "Add <prefix> to the start of every symbol name", "prefix", nullptr)
OPTION(prefix_1, &"--prefix-symbols"[2], prefix_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, &"--preserve-dates"[2], preserve_dates, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Preserve access and modification timestamps", nullptr, nullptr)
OPTION(prefix_2, &"-p"[1], p, Flag, INVALID, preserve_dates, nullptr, 0, 0,
       "Alias for --preserve-dates", nullptr, nullptr)
OPTION(prefix_1, &"--redefine-sym="[2], redefine_symbol_eq, Joined, INVALID, redefine_symbol, nullptr, 0, 0,
       "Change the name of a symbol old to new", "old=new", nullptr)
OPTION(prefix_1, &"--redefine-syms="[2], redefine_symbols_eq, Joined, INVALID, redefine_symbols, nullptr, 0, 0,
       "Reads a list of symbol pairs from <filename> and runs as if --redefine-sym=<old>=<new> is set for each one. <filename> contains two symbols per line separated with whitespace and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, &"--redefine-syms"[2], redefine_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--redefine-sym"[2], redefine_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "old=new", nullptr)
OPTION(prefix_1, &"--regex"[2], regex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Permit regular expressions in name comparison", nullptr, nullptr)
OPTION(prefix_1, &"--remove-section="[2], remove_section_eq, Joined, INVALID, remove_section, nullptr, 0, 0,
       "Remove <section>", "section", nullptr)
OPTION(prefix_1, &"--remove-section"[2], remove_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, &"--rename-section="[2], rename_section_eq, Joined, INVALID, rename_section, nullptr, 0, 0,
       "Renames a section from old to new, optionally with specified flags. Flags supported for GNU compatibility: alloc, load, noload, readonly, exclude, debug, code, data, rom, share, contents, merge, strings.", "old=new[,flag1,...]", nullptr)
OPTION(prefix_1, &"--rename-section"[2], rename_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "old=new[,flag1,...]", nullptr)
OPTION(prefix_2, &"-R"[1], R, JoinedOrSeparate, INVALID, remove_section, nullptr, 0, 0,
       "Alias for --remove-section", nullptr, nullptr)
OPTION(prefix_1, &"--set-section-alignment="[2], set_section_alignment_eq, Joined, INVALID, set_section_alignment, nullptr, 0, 0,
       "Set alignment for a given section.", "section=align", nullptr)
OPTION(prefix_1, &"--set-section-alignment"[2], set_section_alignment, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=align", nullptr)
OPTION(prefix_1, &"--set-section-flags="[2], set_section_flags_eq, Joined, INVALID, set_section_flags, nullptr, 0, 0,
       "Set section flags for a given section. Flags supported for GNU compatibility: alloc, load, noload, readonly, exclude, debug, code, data, rom, share, contents, merge, strings.", "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, &"--set-section-flags"[2], set_section_flags, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, &"--set-start="[2], set_start_eq, Joined, INVALID, set_start, nullptr, 0, 0,
       "Set the start address to <addr>. Overrides any previous --change-start or --adjust-start values.", "addr", nullptr)
OPTION(prefix_1, &"--set-start"[2], set_start, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "addr", nullptr)
OPTION(prefix_1, &"--split-dwo="[2], split_dwo_eq, Joined, INVALID, split_dwo, nullptr, 0, 0,
       "Equivalent to extract-dwo on the input file to <dwo-file>, then strip-dwo on the input file", "dwo-file", nullptr)
OPTION(prefix_1, &"--split-dwo"[2], split_dwo, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "dwo-file", nullptr)
OPTION(prefix_1, &"--strip-all-gnu"[2], strip_all_gnu, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Compatible with GNU's --strip-all", nullptr, nullptr)
OPTION(prefix_1, &"--strip-all"[2], strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove non-allocated sections outside segments. .gnu.warning* and .ARM.attribute sections are not removed", nullptr, nullptr)
OPTION(prefix_1, &"--strip-debug"[2], strip_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all debug sections", nullptr, nullptr)
OPTION(prefix_1, &"--strip-dwo"[2], strip_dwo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all DWARF .dwo sections from file", nullptr, nullptr)
OPTION(prefix_1, &"--strip-non-alloc"[2], strip_non_alloc, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all non-allocated sections outside segments", nullptr, nullptr)
OPTION(prefix_1, &"--strip-sections"[2], strip_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all section headers and all sections not in segments", nullptr, nullptr)
OPTION(prefix_1, &"--strip-symbol="[2], strip_symbol_eq, Joined, INVALID, strip_symbol, nullptr, 0, 0,
       "Strip <symbol>", "symbol", nullptr)
OPTION(prefix_1, &"--strip-symbols="[2], strip_symbols_eq, Joined, INVALID, strip_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and removes them.", "filename", nullptr)
OPTION(prefix_1, &"--strip-symbols"[2], strip_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--strip-symbol"[2], strip_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--strip-unneeded-symbol="[2], strip_unneeded_symbol_eq, Joined, INVALID, strip_unneeded_symbol, nullptr, 0, 0,
       "Remove symbol <symbol> if it is not needed by relocations", "symbol", nullptr)
OPTION(prefix_1, &"--strip-unneeded-symbols="[2], strip_unneeded_symbols_eq, Joined, INVALID, strip_unneeded_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and removes them if they are not needed by relocations", "filename", nullptr)
OPTION(prefix_1, &"--strip-unneeded-symbols"[2], strip_unneeded_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--strip-unneeded-symbol"[2], strip_unneeded_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--strip-unneeded"[2], strip_unneeded, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all symbols not needed by relocations", nullptr, nullptr)
OPTION(prefix_1, &"--subsystem="[2], subsystem_eq, Joined, INVALID, subsystem, nullptr, 0, 0,
       "Set PE subsystem and version", "name[:version]", nullptr)
OPTION(prefix_1, &"--subsystem"[2], subsystem, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name[:version]", nullptr)
OPTION(prefix_2, &"-S"[1], S, Flag, INVALID, strip_all, nullptr, 0, 0,
       "Alias for --strip-all", nullptr, nullptr)
OPTION(prefix_1, &"--target="[2], target_eq, Joined, INVALID, target, nullptr, 0, 0,
       "Format of the input and output file", nullptr, "binary")
OPTION(prefix_1, &"--target"[2], target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_1, &"--update-section="[2], update_section_eq, Joined, INVALID, update_section, nullptr, 0, 0,
       "Add section <name> with contents from a file <file>.", "name=file", nullptr)
OPTION(prefix_1, &"--update-section"[2], update_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name=file", nullptr)
OPTION(prefix_2, &"-U"[1], U, Flag, INVALID, disable_deterministic_archives, nullptr, 0, 0,
       "Alias for --disable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
OPTION(prefix_2, &"-V"[1], V, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_1, &"--weaken-symbol="[2], weaken_symbol_eq, Joined, INVALID, weaken_symbol, nullptr, 0, 0,
       "Mark <symbol> as weak", "symbol", nullptr)
OPTION(prefix_1, &"--weaken-symbols="[2], weaken_symbols_eq, Joined, INVALID, weaken_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them weak.", "filename", nullptr)
OPTION(prefix_1, &"--weaken-symbols"[2], weaken_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, &"--weaken-symbol"[2], weaken_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--weaken"[2], weaken, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark all global symbols as weak", nullptr, nullptr)
OPTION(prefix_1, &"--wildcard"[2], wildcard, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow wildcard syntax for symbol-related flags. Incompatible with --regex. Allows using '*' to match any number of characters, '?' to match any single character, '' to escape special characters, and '[]' to define character classes. Wildcards beginning with '!' will prevent a match, for example \"-N '*' -N '!x'\" will strip all symbols except for \"x\".", nullptr, nullptr)
OPTION(prefix_2, &"-W"[1], W, JoinedOrSeparate, INVALID, weaken_symbol, nullptr, 0, 0,
       "Alias for --weaken-symbol", nullptr, nullptr)
OPTION(prefix_2, &"-w"[1], w, Flag, INVALID, wildcard, nullptr, 0, 0,
       "Alias for --wildcard", nullptr, nullptr)
OPTION(prefix_2, &"-X"[1], X, Flag, INVALID, discard_locals, nullptr, 0, 0,
       "Alias for --discard-locals", nullptr, nullptr)
OPTION(prefix_2, &"-x"[1], x, Flag, INVALID, discard_all, nullptr, 0, 0,
       "Alias for --discard-all", nullptr, nullptr)
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

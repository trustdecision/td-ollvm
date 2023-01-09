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
OPTION(prefix_1, &"--allow-broken-links"[2], allow_broken_links, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow the tool to remove sections even if it would leave invalid section references. The appropriate sh_link fields will be set to zero.", nullptr, nullptr)
OPTION(prefix_1, &"--disable-deterministic-archives"[2], disable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable deterministic mode when operating on archives (use real values for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_1, &"--discard-all"[2], discard_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all local symbols except file and section symbols. Also remove all debug sections", nullptr, nullptr)
OPTION(prefix_1, &"--discard-locals"[2], discard_locals, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove compiler-generated local symbols, (e.g. symbols starting with .L)", nullptr, nullptr)
OPTION(prefix_2, &"-D"[1], D, Flag, INVALID, enable_deterministic_archives, nullptr, 0, 0,
       "Alias for --enable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_2, &"-d"[1], d, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_1, &"--enable-deterministic-archives"[2], enable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable deterministic mode when operating on archives (use zero for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_2, &"-g"[1], g, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_1, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"-h"[1], h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"--keep-file-symbols"[2], keep_file_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove file symbols", nullptr, nullptr)
OPTION(prefix_1, &"--keep-section="[2], keep_section_eq, Joined, INVALID, keep_section, nullptr, 0, 0,
       "Keep <section>", "section", nullptr)
OPTION(prefix_1, &"--keep-section"[2], keep_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, &"--keep-symbol="[2], keep_symbol_eq, Joined, INVALID, keep_symbol, nullptr, 0, 0,
       "Do not remove symbol <symbol>", "symbol", nullptr)
OPTION(prefix_1, &"--keep-symbol"[2], keep_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--keep-undefined"[2], keep_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove undefined symbols", nullptr, nullptr)
OPTION(prefix_2, &"-K"[1], K, JoinedOrSeparate, INVALID, keep_symbol, nullptr, 0, 0,
       "Alias for --keep-symbol", nullptr, nullptr)
OPTION(prefix_1, &"--no-strip-all"[2], no_strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable --strip-all", nullptr, nullptr)
OPTION(prefix_2, &"-N"[1], N, JoinedOrSeparate, INVALID, strip_symbol, nullptr, 0, 0,
       "Alias for --strip-symbol", nullptr, nullptr)
OPTION(prefix_1, &"--only-keep-debug"[2], only_keep_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Produce a debug file as the output that only preserves contents of sections useful for debugging purposes", nullptr, nullptr)
OPTION(prefix_2, &"-o"[1], output, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Write output to <file>", "<file>", nullptr)
OPTION(prefix_1, &"--preserve-dates"[2], preserve_dates, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Preserve access and modification timestamps", nullptr, nullptr)
OPTION(prefix_2, &"-p"[1], p, Flag, INVALID, preserve_dates, nullptr, 0, 0,
       "Alias for --preserve-dates", nullptr, nullptr)
OPTION(prefix_1, &"--regex"[2], regex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Permit regular expressions in name comparison", nullptr, nullptr)
OPTION(prefix_1, &"--remove-section="[2], remove_section_eq, Joined, INVALID, remove_section, nullptr, 0, 0,
       "Remove <section>", "section", nullptr)
OPTION(prefix_1, &"--remove-section"[2], remove_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_2, &"-R"[1], R, JoinedOrSeparate, INVALID, remove_section, nullptr, 0, 0,
       "Alias for --remove-section", nullptr, nullptr)
OPTION(prefix_1, &"--strip-all-gnu"[2], strip_all_gnu, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Compatible with GNU's --strip-all", nullptr, nullptr)
OPTION(prefix_1, &"--strip-all"[2], strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove non-allocated sections outside segments. .gnu.warning* and .ARM.attribute sections are not removed", nullptr, nullptr)
OPTION(prefix_1, &"--strip-debug"[2], strip_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all debug sections", nullptr, nullptr)
OPTION(prefix_1, &"--strip-sections"[2], strip_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all section headers and all sections not in segments", nullptr, nullptr)
OPTION(prefix_1, &"--strip-symbol="[2], strip_symbol_eq, Joined, INVALID, strip_symbol, nullptr, 0, 0,
       "Strip <symbol>", "symbol", nullptr)
OPTION(prefix_1, &"--strip-symbol"[2], strip_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, &"--strip-unneeded"[2], strip_unneeded, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all symbols not needed by relocations", nullptr, nullptr)
OPTION(prefix_2, &"-S"[1], S, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_2, &"-s"[1], s, Flag, INVALID, strip_all, nullptr, 0, 0,
       "Alias for --strip-all", nullptr, nullptr)
OPTION(prefix_2, &"-T"[1], strip_swift_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove Swift symbols", nullptr, nullptr)
OPTION(prefix_2, &"-U"[1], U, Flag, INVALID, disable_deterministic_archives, nullptr, 0, 0,
       "Alias for --disable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_1, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
OPTION(prefix_2, &"-V"[1], V, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_1, &"--wildcard"[2], wildcard, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow wildcard syntax for symbol-related flags. Incompatible with --regex. Allows using '*' to match any number of characters, '?' to match any single character, '' to escape special characters, and '[]' to define character classes. Wildcards beginning with '!' will prevent a match, for example \"-N '*' -N '!x'\" will strip all symbols except for \"x\".", nullptr, nullptr)
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

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
PREFIX(prefix_2, {"--" COMMA "-" COMMA nullptr})
PREFIX(prefix_1, {"/" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "<ml options>", ml_Group, Group, INVALID, INVALID, nullptr, 0, 0,
       "ML.EXE COMPATIBILITY OPTIONS", nullptr, nullptr)
OPTION(nullptr, "unsupported", unsupported_Group, Group, INVALID, INVALID, nullptr, 0, 0,
       "UNSUPPORTED ML.EXE COMPATIBILITY OPTIONS", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/?"[1], help, Flag, ml_Group, INVALID, nullptr, 0, 0,
       "Display available options", nullptr, nullptr)
OPTION(prefix_2, &"--as-lex"[2], as_lex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Lex tokens from a .asm file without assembling", nullptr, nullptr)
OPTION(prefix_1, &"/AT"[1], tiny_model_support, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Bl"[1], alternate_linker, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/coff"[1], coff_object_file, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Cp"[1], preserve_identifier_case, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Cu"[1], uppercase_identifiers, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Cx"[1], preserve_extern_case, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/c"[1], assemble_only, Flag, ml_Group, INVALID, nullptr, 0, 0,
       "Assemble only; do not link", nullptr, nullptr)
OPTION(prefix_1, &"/D"[1], define, JoinedOrSeparate, ml_Group, INVALID, nullptr, 0, 0,
       "Define <macro> to <value> (or blank if <value> omitted)", "<macro>=<value>", nullptr)
OPTION(prefix_1, &"/EP"[1], output_preprocessed, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/ERRORREPORT"[1], errorreport, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_2, &"--fatal-warnings"[2], fatal_warnings, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Treat warnings as errors", nullptr, nullptr)
OPTION(prefix_1, &"/Fe"[1], executable_file, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_2, &"--filetype="[2], filetype, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Emit a file with the given type", nullptr, "obj,s,null")
OPTION(prefix_1, &"/FI"[1], code_listing_file, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Fm"[1], linker_map_file, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Fo"[1], output_file, JoinedOrSeparate, ml_Group, INVALID, nullptr, 0, 0,
       "Names the output file", nullptr, nullptr)
OPTION(prefix_1, &"/FPi"[1], fp_emulator_fixups, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/FR"[1], extended_source_browser_file, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Fr"[1], source_browser_file, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/F"[1], stacksize, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Gc"[1], pascal_conventions, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Gd"[1], c_conventions, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_2, &"--gmtime"[2], gmtime, Flag, INVALID, utc, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/GZ"[1], stdcall_conventions, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/help"[1], help_long, Flag, ml_Group, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/H"[1], extern_name_limit, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/I"[1], include_path, JoinedOrSeparate, ml_Group, INVALID, nullptr, 0, 0,
       "Sets path for include files", nullptr, nullptr)
OPTION(prefix_2, &"--m"[2], bitness, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Target platform (x86 or x86-64)", nullptr, "32,64")
OPTION(prefix_1, &"/nologo"[1], nologo, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/omf"[1], omf_object_file, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_2, &"--output-att-asm"[2], output_att_asm, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use ATT syntax for output assembly", nullptr, nullptr)
OPTION(prefix_2, &"--preserve-comments"[2], preserve_comments, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Preserve comments in output assembly", nullptr, nullptr)
OPTION(prefix_2, &"--print-imm-hex"[2], print_imm_hex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Prefer hex format for immediate values in output assembly", nullptr, nullptr)
OPTION(prefix_1, &"/safeseh"[1], safeseh, Flag, ml_Group, INVALID, nullptr, 0, 0,
       "Mark resulting object files as either containing no exception handlers or containing exception handlers that are all declared with .SAFESEH. Only available in 32-bit.", nullptr, nullptr)
OPTION(prefix_2, &"--save-temp-labels"[2], save_temp_labels, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't discard temporary labels", nullptr, nullptr)
OPTION(prefix_1, &"/Sa"[1], full_listing, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Sf"[1], first_pass_listing, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_2, &"--show-encoding"[2], show_encoding, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Show instruction encodings in output assembly", nullptr, nullptr)
OPTION(prefix_2, &"--show-inst-operands"[2], show_inst_operands, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Show instructions operands as parsed", nullptr, nullptr)
OPTION(prefix_2, &"--show-inst"[2], show_inst, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Show internal instruction representation in output assembly", nullptr, nullptr)
OPTION(prefix_1, &"/SI"[1], listing_width, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Sn"[1], listing_without_symbols, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Sp"[1], listing_page_length, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Ss"[1], listing_subtitle, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/St"[1], listing_title, Separate, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Sx"[1], listing_false_conditionals, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Ta"[1], assembly_file, JoinedOrSeparate, ml_Group, INVALID, nullptr, 0, 0,
       "Assemble source file with name not ending with the .asm extension", nullptr, nullptr)
OPTION(prefix_2, &"--timestamp="[2], timestamp, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify the assembly timestamp (used for @Date and @Time built-ins)", nullptr, nullptr)
OPTION(prefix_2, &"--utc"[2], utc, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Render @Date and @Time built-ins in GMT/UTC", nullptr, nullptr)
OPTION(prefix_1, &"/WX"[1], error_on_warning, Flag, ml_Group, fatal_warnings, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/W"[1], warning_level, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/w"[1], extra_warnings, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/X"[1], ignore_include_envvar, Flag, ml_Group, INVALID, nullptr, 0, 0,
       "Ignore the INCLUDE environment variable", nullptr, nullptr)
OPTION(prefix_1, &"/Zd"[1], line_number_info, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Zf"[1], export_all_symbols, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Zi"[1], codeview_info, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Zm"[1], enable_m510_option, Flag, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Zp"[1], structure_packing, Joined, unsupported_Group, INVALID, nullptr, HelpHidden, 0,
       "", nullptr, nullptr)
OPTION(prefix_1, &"/Zs"[1], parse_only, Flag, ml_Group, filetype, "null\0", 0, 0,
       "Run a syntax-check only", nullptr, nullptr)
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

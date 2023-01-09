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
OPTION(nullptr, "unsupported", unsupported, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/?"[1], help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/canonicalize:"[1], canonicalize, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/category"[1], category, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/check_for_duplicates:"[1], check_for_duplicates, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/dll:"[1], dll, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "dll", nullptr)
OPTION(prefix_1, &"/hashupdate:"[1], hash_update, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/hashupdate"[1], hash_update_flag, Flag, unsupported, hash_update, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/help"[1], help_long, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/h"[1], h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"/identity:"[1], identity, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "identity", nullptr)
OPTION(prefix_1, &"/inputresource:"[1], input_resource, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/makecdfs:"[1], make_cdfs, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/managedassemblyname:"[1], managed_assembly_name, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "assembly", nullptr)
OPTION(prefix_1, &"/manifest"[1], manifest, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Used to specify each manifest that need to be processed", "manifest", nullptr)
OPTION(prefix_1, &"/nodependency"[1], no_dependency, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/nologo"[1], no_logo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "No effect as this tool never writes copyright data.  Included for parity", nullptr, nullptr)
OPTION(prefix_1, &"/notify_update"[1], notify_update, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Exit with a special exit code if the output file has changed", nullptr, nullptr)
OPTION(prefix_1, &"/out:"[1], out, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Name of the output manifest.  If this is skipped and only one manifest is being operated upon by the tool, that manifest is modified in place", "manifest", nullptr)
OPTION(prefix_1, &"/outputresource:"[1], output_resource, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/outputresource"[1], output_resource_flag, Flag, unsupported, output_resource, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/replacements:"[1], replacements, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/rgs:"[1], rgs, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "script", nullptr)
OPTION(prefix_1, &"/tlb:"[1], tlb, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/updateresource:"[1], update_resource, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "file", nullptr)
OPTION(prefix_1, &"/validate_file_hashes:"[1], validate_file_hashes, Joined, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", "", nullptr)
OPTION(prefix_1, &"/validate_manifest"[1], validate_manifest, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
OPTION(prefix_1, &"/verbose"[1], verbose, Flag, unsupported, INVALID, nullptr, 0, 0,
       "Not supported", nullptr, nullptr)
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

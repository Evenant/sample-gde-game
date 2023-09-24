
def main():
    import os
    try:
        os.mkdir(MODULE_NAME)
    finally:
        open(f"{MODULE_NAME}/sconscript.py", "wt", encoding="utf8").write(FILE_SCONSCRIPT)
        open(f"{MODULE_NAME}/register_types.h", "wt", encoding="utf8").write(FILE_REGTYPES_HEADER)
        open(f"{MODULE_NAME}/register_types.cpp", "wt", encoding="utf8").write(FILE_REGTYPES_SOURCE)
        open(f"{MODULE_NAME}/{MODULE_NAME}.hpp", "wt", encoding="utf8").write(FILE_HEADER)
        open(f"{MODULE_NAME}/{MODULE_NAME}.cpp", "wt", encoding="utf8").write(FILE_SOURCE)
        open(f"{MODULE_NAME}/{MODULE_NAME}.gdextension", "wt", encoding="utf8").write(FILE_GDEXTENSION)

import sys
MODULE_NAME=sys.argv[1]

FILE_GDEXTENSION=f"""[configuration]

entry_symbol = "entry_{MODULE_NAME}"
compatibility_minimum = 4.1

[libraries]

macos.debug = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.macos.template_debug.framework"
macos.release = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.macos.template_release.framework"
windows.debug.x86_32 = "res://modules/{MODULE_NAME}/{MODULE_NAME}.windows.template_debug.x86_32.dll"
windows.release.x86_32 = "res://modules/{MODULE_NAME}/{MODULE_NAME}.windows.template_release.x86_32.dll"
windows.debug.x86_64 = "res://modules/{MODULE_NAME}/{MODULE_NAME}.windows.template_debug.x86_64.dll"
windows.release.x86_64 = "res://modules/{MODULE_NAME}/{MODULE_NAME}.windows.template_release.x86_64.dll"
linux.debug.x86_64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_debug.x86_64.so"
linux.release.x86_64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_release.x86_64.so"
linux.debug.arm64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_debug.arm64.so"
linux.release.arm64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_release.arm64.so"
linux.debug.rv64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_debug.rv64.so"
linux.release.rv64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.linux.template_release.rv64.so"
android.debug.x86_64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.android.template_debug.x86_64.so"
android.release.x86_64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.android.template_release.x86_64.so"
android.debug.arm64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.android.template_debug.arm64.so"
android.release.arm64 = "res://modules/{MODULE_NAME}/lib{MODULE_NAME}.android.template_release.arm64.so"

"""
FILE_SCONSCRIPT=f"""
Import("env")

import os

MODULE_NAME="{MODULE_NAME}"

source_files = []
for fd in os.listdir():
    if fd.endswith(".c") or \\
        fd.endswith(".cpp"):
        source_files.append(fd)

lib = env.SharedLibrary(f"{"{"}env['LIBPREFIX']{"}"}{"{"}MODULE_NAME{"}"}{"{"}env['suffix']{"}"}{"{"}env['SHLIBSUFFIX']{"}"}", source=source_files)

Return("lib")
"""

FILE_SOURCE=f"""
#include "{MODULE_NAME}.hpp"
#include "godot_cpp/classes/engine.hpp"

using namespace godot;
{MODULE_NAME}::{MODULE_NAME}()
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"}

{MODULE_NAME}::~{MODULE_NAME}()
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"}
void {MODULE_NAME}::_bind_methods()
{"{"}
    /* Add a property
        ClassDB::bind_method(D_METHOD("get_property"), &GDExample::get_property);
        ClassDB::bind_method(D_METHOD("set_property", "p_amplitude"), &GDExample::set_property);
        ClassDB::add_property("GDExample", PropertyInfo(Variant::?, "property"), "set_property", "get_property");
    */

   /* Add a method

   */

{"}"}

void {MODULE_NAME}::_process(double delta)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_physics_process(double delta)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_enter_tree()
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_exit_tree()
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_ready()
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};

void {MODULE_NAME}::_input(const Ref<InputEvent> &event)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_shortcut_input(const Ref<InputEvent> &event)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_unhandled_input(const Ref<InputEvent> &event)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
void {MODULE_NAME}::_unhandled_key_input(const Ref<InputEvent> &event)
{"{"}
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {"{"}
        // Code to run in editor
    {"}"}
    else
    {"{"}
        // Code to run in game
    {"}"}

    // Code to run in both editor and game
{"}"};
"""
FILE_HEADER=f"""#ifndef {MODULE_NAME}_HPP
#define {MODULE_NAME}_HPP

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/input_event.hpp"
namespace godot
{"{"}

class {MODULE_NAME} : public Node
{"{"}
    GDCLASS({MODULE_NAME}, Node);

    {MODULE_NAME}();
    ~{MODULE_NAME}();

    public:

	// Your methods here

    private:
    static void _bind_methods();

    public:
	// Godot virtual methods
    
    void _process(double delta) override;
	void _physics_process(double delta) override;
	void _enter_tree() override;
	void _exit_tree() override;
	void _ready() override;
	void _input(const Ref<InputEvent> &event) override;
	void _shortcut_input(const Ref<InputEvent> &event) override;
	void _unhandled_input(const Ref<InputEvent> &event) override;
	void _unhandled_key_input(const Ref<InputEvent> &event) override;
{"}"};

{"}"}
#endif
"""

FILE_REGTYPES_SOURCE=f"""#include "register_types.h"

#include "{MODULE_NAME}.hpp"

#include <gdextension_interface.h>
#include "godot_cpp/core/defs.hpp"
#include "godot_cpp/core/class_db.hpp"
#include <godot_cpp/godot.hpp>

using namespace godot;

void initialize_{MODULE_NAME}(ModuleInitializationLevel p_level) {"{"}
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {"{"}
        return;
    {"}"}

    ClassDB::register_class<{MODULE_NAME}>();
{"}"}

void deinitialize_{MODULE_NAME}(ModuleInitializationLevel p_level) {"{"}
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {"{"}
        return;
    {"}"}
{"}"}

extern "C" {"{"}
// Initialization.
GDExtensionBool GDE_EXPORT entry_{MODULE_NAME}(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {"{"}
    godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

    init_obj.register_initializer(initialize_{MODULE_NAME});
    init_obj.register_terminator(deinitialize_{MODULE_NAME});
    init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

    return init_obj.init();
{"}"}
{"}"}
"""
FILE_REGTYPES_HEADER=f"""#ifndef {MODULE_NAME}_REGISTER_TYPES_H
#define {MODULE_NAME}_REGISTER_TYPES_H

void initialize_{MODULE_NAME}();
void deinitialize_{MODULE_NAME}();

#endif"""

if __name__ == "__main__":
    main()
#include "register_types.h"

#include "Entity.hpp"

#include <gdextension_interface.h>
#include "godot_cpp/core/defs.hpp"
#include "godot_cpp/core/class_db.hpp"
#include <godot_cpp/godot.hpp>

using namespace godot;

void initialize_Entity(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    ClassDB::register_class<Entity>();
}

void deinitialize_Entity(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
}

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT entry_Entity(GDExtensionInterfaceGetProcAddress p_get_proc_address, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
    godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

    init_obj.register_initializer(initialize_Entity);
    init_obj.register_terminator(deinitialize_Entity);
    init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

    return init_obj.init();
}
}
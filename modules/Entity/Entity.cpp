
#include "Entity.hpp"
#include "godot_cpp/classes/engine.hpp"

using namespace godot;
Entity::Entity()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
}

Entity::~Entity()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
}
void Entity::_bind_methods()
{
    /* Add a property
        ClassDB::bind_method(D_METHOD("get_property"), &GDExample::get_property);
        ClassDB::bind_method(D_METHOD("set_property", "p_amplitude"), &GDExample::set_property);
        ClassDB::add_property("GDExample", PropertyInfo(Variant::?, "property"), "set_property", "get_property");
    */

   /* Add a method

   */

}

void Entity::_process(double delta)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_physics_process(double delta)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_enter_tree()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_exit_tree()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_ready()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};

void Entity::_input(const Ref<InputEvent> &event)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_shortcut_input(const Ref<InputEvent> &event)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_unhandled_input(const Ref<InputEvent> &event)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};
void Entity::_unhandled_key_input(const Ref<InputEvent> &event)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
    }

    // Code to run in both editor and game
};

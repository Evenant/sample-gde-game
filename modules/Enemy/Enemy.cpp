
#include "Enemy.hpp"
#include "godot_cpp/classes/engine.hpp"

using namespace godot;
Enemy::Enemy()
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

Enemy::~Enemy()
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
void Enemy::_bind_methods()
{
    /* Add a property
        ClassDB::bind_method(D_METHOD("get_property"), &GDExample::get_property);
        ClassDB::bind_method(D_METHOD("set_property", "p_amplitude"), &GDExample::set_property);
        ClassDB::add_property("GDExample", PropertyInfo(Variant::?, "property"), "set_property", "get_property");
    */

   /* Add a method

   */

}

void Enemy::_process(double delta)
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
void Enemy::_physics_process(double delta)
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
void Enemy::_enter_tree()
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
void Enemy::_exit_tree()
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
void Enemy::_ready()
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

void Enemy::_input(const Ref<InputEvent> &event)
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
void Enemy::_shortcut_input(const Ref<InputEvent> &event)
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
void Enemy::_unhandled_input(const Ref<InputEvent> &event)
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
void Enemy::_unhandled_key_input(const Ref<InputEvent> &event)
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

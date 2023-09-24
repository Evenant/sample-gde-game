
#include "Player.hpp"
#include "godot_cpp/classes/engine.hpp"

using namespace godot;
Player::Player()
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

Player::~Player()
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
void Player::_bind_methods()
{
    /* Add a property
        ClassDB::bind_method(D_METHOD("get_property"), &GDExample::get_property);
        ClassDB::bind_method(D_METHOD("set_property", "p_amplitude"), &GDExample::set_property);
        ClassDB::add_property("GDExample", PropertyInfo(Variant::?, "property"), "set_property", "get_property");
    */

   /* Add a method

   */

}

void Player::_process(double delta)
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
void Player::_physics_process(double delta)
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
void Player::_enter_tree()
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
void Player::_exit_tree()
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
void Player::_ready()
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

void Player::_input(const Ref<InputEvent> &event)
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
void Player::_shortcut_input(const Ref<InputEvent> &event)
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
void Player::_unhandled_input(const Ref<InputEvent> &event)
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
void Player::_unhandled_key_input(const Ref<InputEvent> &event)
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


#include "Game.hpp"
#include "godot_cpp/classes/engine.hpp"

using namespace godot;

static Game* singleton = nullptr;

Game::Game()
{
    // Code to run in both editor and game

    if (!singleton)
    {
        singleton=this;
    }

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

Game::~Game()
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

bool Game::is_singleton(Game* comp)
{
    return (comp == singleton);
}
void Game::_bind_methods()
{
    /* Add a property
        ClassDB::bind_method(D_METHOD("get_property"), &GDExample::get_property);
        ClassDB::bind_method(D_METHOD("set_property", "p_amplitude"), &GDExample::set_property);
        ClassDB::add_property("GDExample", PropertyInfo(Variant::?, "property"), "set_property", "get_property");
    */

   /* Add a method

   */

}

void Game::_process(double delta)
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
void Game::_physics_process(double delta)
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
void Game::_enter_tree()
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
void Game::_exit_tree()
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
void Game::_ready()
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        // Code to run in game
        
        _world=get_node<Node3D>("World");

        _ui=get_node<Control>("UI");

        
    }

    // Code to run in both editor and game
};

void Game::_input(const Ref<InputEvent> &event)
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
void Game::_shortcut_input(const Ref<InputEvent> &event)
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
void Game::_unhandled_input(const Ref<InputEvent> &event)
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
void Game::_unhandled_key_input(const Ref<InputEvent> &event)
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


#include "Game.hpp"
#include "godot_cpp/classes/engine.hpp"
#include "godot_cpp/classes/resource_loader.hpp"
#include "godot_cpp/classes/input_event_key.hpp"
#include "godot_cpp/classes/packed_scene.hpp"
#include <iostream>

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

  ClassDB::bind_method(D_METHOD("load_final"), &Game::load_final);
  ClassDB::bind_method(D_METHOD("load_ui"), &Game::load_ui);
  ClassDB::bind_method(D_METHOD("load_world"), &Game::load_world);

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

        if (!_fully_loaded)
            return;
        
        if (is_world_paused())
            return;
        
        _block->set_rotation_degrees(_block->get_rotation_degrees() + Vector3(0,10, 0));
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

void Game::set_world_paused(bool value)
{
    _pregame_label->set_visible(value);
    if (value)
    {
        _world->set_process_mode(ProcessMode::PROCESS_MODE_DISABLED);
    }
    else
    {
        _world->set_process_mode(ProcessMode::PROCESS_MODE_ALWAYS);
    }
}

bool Game::is_world_paused()
{
    return (_world->get_process_mode() == ProcessMode::PROCESS_MODE_DISABLED);
}
void Game::debug_print(const String& message)
{
    if (!_debug_display)
        return;
    
    _debug_display->set_text(_debug_display->get_text() + message);
}
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

        _block = _world->get_node<CSGBox3D>("Rotate");

        _ui=get_node<Control>("UI");
        
        _debug_display=_ui->get_node<RichTextLabel>("Debug");

        _pregame_label = _ui->get_node<Label>("PregameLabel");

        debug_print("Game Loaded\n");

        call_deferred("load_ui");
    }

    // Code to run in both editor and game
};

void Game::load_ui()
{
    debug_print("Loading UI\n");
    _pregame_label->set_text(loading_ui);

    call_deferred("load_world");
}

void Game::load_world()
{
    debug_print("UI Loaded\n");

    debug_print("Loading World\n");
    _pregame_label->set_text(loading_world);

    Ref<PackedScene> map = ResourceLoader::get_singleton()->load("res://models/map.tscn");
    Node* n = map->instantiate();
    n->connect("ready", Callable(this, "load_final"));
    add_child(n);
}

void Game::load_final()
{
    debug_print("World Loaded\n");
    _pregame_label->set_text(esc_to_play);
    _fully_loaded=true;
}
void Game::_input(const Ref<InputEvent> &event)
{
    // Code to run in both editor and game

    if (Engine::get_singleton()->is_editor_hint())
    {
        // Code to run in editor
    }
    else
    {
        if (!_fully_loaded)
            return;
        
        if (event->get_class() != InputEventKey::get_class_static())
            return;
        
        const Ref<InputEventKey>& key_event = event;

        if (key_event->get_keycode() == Key::KEY_ESCAPE && !key_event->is_echo() && key_event->is_pressed())
            set_world_paused(!is_world_paused());
        else if (key_event->get_keycode() == Key::KEY_QUOTELEFT && !key_event->is_echo() && key_event->is_pressed() && key_event->is_shift_pressed())
            _debug_display->set_visible(!_debug_display->is_visible());
        
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

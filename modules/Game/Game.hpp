#ifndef Game_HPP
#define Game_HPP

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/node3d.hpp"
#include "godot_cpp/classes/csg_box3d.hpp"
#include "godot_cpp/classes/control.hpp"
#include "godot_cpp/classes/label.hpp"
#include "godot_cpp/classes/rich_text_label.hpp"
#include "godot_cpp/classes/input_event.hpp"
namespace godot
{

class Game : public Node
{
    GDCLASS(Game, Node);

    Game();
    ~Game();

    public:

	static constexpr const char* loading_world = "Loading World";
	static constexpr const char* loading_ui = "Loading UI";
	static constexpr const char* esc_to_play = "Press ESC to play (and ESC again to pause)";

	// Your methods here
	Game* get_singleton();
	static bool is_singleton(Game*);

	bool is_world_paused();
	void set_world_paused(bool);

	void load_ui();
	void load_world();
	void load_final();

	void debug_print(const String&);

	private:
	Node3D* _world;
	Control* _ui;
	Label* _pregame_label;
	RichTextLabel* _debug_display;
	CSGBox3D* _block;
	bool _fully_loaded;

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
};

}
#endif

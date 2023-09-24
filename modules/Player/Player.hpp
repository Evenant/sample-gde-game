#ifndef Player_HPP
#define Player_HPP

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/input_event.hpp"
namespace godot
{

class Player : public Node
{
    GDCLASS(Player, Node);

    Player();
    ~Player();

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
};

}
#endif

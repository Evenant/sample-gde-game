#ifndef Entity_HPP
#define Entity_HPP

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/character_body3d.hpp"
#include "godot_cpp/classes/input_event.hpp"
namespace godot
{

class Entity : public CharacterBody3D
{
    GDCLASS(Entity, CharacterBody3D);

    Entity();
    ~Entity();

    public:

	// Your methods here

	static constexpr int COLLISION_TERRAIN = 1;
	static constexpr int COLLISION_PLAYER = COLLISION_TERRAIN*2;
	static constexpr int COLLISION_ENEMY = COLLISION_PLAYER*2;

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

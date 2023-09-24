env = Environment()

godot_env = env.SConscript("godot_cpp/SConstruct", exports=["env"])

env.SConscript(["Game/sconscript.py",
    "Player/sconscript.py",
    "Enemy/sconscript.py",
    ],
    exports=["env"])
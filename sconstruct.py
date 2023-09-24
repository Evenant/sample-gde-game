env = Environment()

env.SConscript("godot_cpp/SConstruct", exports=["env"])

env.SConscript("modules/sconscript.py",
    exports=["env"],
    variant_dir="bin",
    duplicate=False
)
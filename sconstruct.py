env = Environment()

env.SConscript("godot_cpp/SConstruct", exports=["env"])
env["LIBPREFIX"] = "../" + env["LIBPREFIX"]
env.Append(CPPPATH="#modules")
env.SConscript("modules/sconscript.py",
    exports=["env"]
)
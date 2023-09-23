env = Environment()

godot_env = env.SConscript("godot_cpp/SConstruct", exports=["env"])
"""
env.Append(LIBS=godot_env["LIBS"])
env.Append(CPPPATH=godot_env["CPPPATH"])
env.Append(CFLAGS=godot_env["CFLAGS"])
env.Append(CCFLAGS=godot_env["CCFLAGS"])
env.Append(CXXFLAGS=godot_env["CXXFLAGS"])
env.Append(CXX=godot_env["CXX"])
env.Append(CC=godot_env["CC"])
"""
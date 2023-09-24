Import("env")

SCONSCRIPTS =("Game/sconscript.py",
    "Player/sconscript.py",
    "Enemy/sconscript.py",
    "Entity/sconscript.py",
)

env.SConscript(SCONSCRIPTS,
    exports=["env"])
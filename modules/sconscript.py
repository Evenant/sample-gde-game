Import("env")

import os
from genericpath import isfile, isdir

SCONSCRIPTS =("Game/sconscript.py",
    "Entity/sconscript.py",
    "Player/sconscript.py",
    "Enemy/sconscript.py",
)

for fd in os.listdir():
    if not isdir(fd):
        continue
    
    if not isfile(f"{fd}/sconscript.py"):
        continue
    env.SConscript(f"{fd}/sconscript.py",
        exports="env")
    
    srcfiles = []
    for f in os.listdir(fd):
        if not isfile(f):
            continue
        
        if f.endswith(".c") or f.endswith(".cpp"):
            srcfiles.append(f)
    
    env.SharedLibrary(fd, srcfiles, )

env.SConscript(SCONSCRIPTS,
    exports=["env"])
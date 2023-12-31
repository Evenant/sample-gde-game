
Import("env")

import os

MODULE_NAME="Game"

source_files = []
for fd in os.listdir():
    if fd.endswith(".c") or \
        fd.endswith(".cpp"):
        source_files.append(fd)

env.SharedLibrary(f"{env['LIBPREFIX']}{MODULE_NAME}{env['suffix']}{env['SHLIBSUFFIX']}", source=source_files)

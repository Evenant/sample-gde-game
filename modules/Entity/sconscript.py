
Import("env")

import os

MODULE_NAME="Entity"

source_files = []
for fd in os.listdir():
    if fd.endswith(".c") or \
        fd.endswith(".cpp"):
        source_files.append(fd)

lib = env.SharedLibrary(f"{env['LIBPREFIX']}{MODULE_NAME}{env['suffix']}{env['SHLIBSUFFIX']}", source=source_files)

Return("lib")

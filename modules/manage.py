DESCRIPTION = """
Specifically to manage a folder of GDExtension modules.
"""

import sys
import os
from genericpath import isfile, isdir

HELP_TEXT=f"""python {sys.argv[0]} <COMMAND> [ARGS]
Available Commands:
list
new
delete
"""

# main function
def main(command:str|None, args:list):
    if command is None:
        print(HELP_TEXT)
        return None
    
    if command == "list":
        print("Modules:")
        for fd in os.listdir():
            if not isdir(fd):
                continue

            if isfile(f"{fd}/sconscript.py") and \
                isfile(f"{fd}/register_types.h") and \
                isfile(f"{fd}/register_types.cpp"):
                print(fd)
    
    elif command == "new":
        




if __name__ == "__main__":
    main()
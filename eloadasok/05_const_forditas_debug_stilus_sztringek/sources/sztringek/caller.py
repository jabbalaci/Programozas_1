#!/usr/bin/env python3

"""
Meghív egy külső programot és lekérdezi annak a kilépési kódját.
"""

import shlex
from subprocess import Popen, PIPE


def get_exitcode(cmd):
    """
    Külső program meghívása egy alprocesszben.

    Visszatérési érték: a meghívott program kilépési kódja.
    """
    args = shlex.split(cmd)

    proc = Popen(args, stdout=PIPE, stderr=PIPE)
    proc.communicate()
    exitcode = proc.returncode
    #
    return exitcode


def main():
    cmd = "./a.out"
    print("./a.out meghívása...")
    exitcode = get_exitcode(cmd)
    print("az ./a.out program kilépési kódja:", exitcode)

##############################################################################

if __name__ == "__main__":
    main()

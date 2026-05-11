#!/usr/bin/env python3

import sys


def hello(nev):
    if nev == "Batman":
        print("Denevérveszély!")
    else:
        print(f"Hello {nev}!")


def main():
    if len(sys.argv) == 1:
        print("Hiba! Kell egy paraméter!")
        exit(1)
    #
    name = sys.argv[1]
    hello(name)

##############################################################################

main()

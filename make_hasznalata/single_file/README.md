Egyetlen .c file fordítása
==========================

Ha a projektünk egyetlen `.c` file-ból áll,
akkor használjuk a mellékelt `Makefile` konfigurációs
állományt, majd:

    $ make main

Ez megkeresi a `main.c` forrást, s előállít egy `main`
nevű futtatható állományt.

Hasonlóképpen:

    $ make hello

Ez megkeresi a `hello.c` forrást, s előállít egy `hello`
nevű futtatható állományt.

Vagyis a `make` után a forrásállomány nevét a `.c` kiterjesztés
nélkül adjuk meg!

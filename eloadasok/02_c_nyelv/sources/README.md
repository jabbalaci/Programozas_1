Az előadáson bemutatott példák.

Fordítás / futtatás
===================

## 1. lehetőség:

    $ gcc alap.c
    $ ./a.out

Ha nem adjuk meg a kimenet nevét, akkor egy `a.out` nevű futtatható állomány lesz
a fordítás eredménye.

## 2. lehetőség:

    $ gcc alap.c -o alap
    $ ./alap

A `-o` kapcsoló után meg lehet adni a lefordított bináris állomány nevét.
A példában a fordítás után egy `alap` nevű futtatható állomány jön létre.

## 3. lehetőség:

    $ make alap
    $ ./alap

A `make alap` parancs egy `alap.c` nevű forrást keres, azt fordítja le,
s a kimenet neve `alap` lesz. Hasonlóan, egy `make akarmi` esetén a
bemenet egy `akarmi.c` forrás lenne, a kimenet pedig egy `akarmi` nevű
futtatható állomány.

Fontos! A make parancs igényel egy `Makefile` nevű konfigurációs állományt.
Jelen esetben ez csatolva lett. A make most azért működik a fentebb leírtak
szerint, mert a `Makefile`-ban ezt a viselkedést állítottuk be.

## Na jó, de akkor melyiket használjam?

A 3. módszernek az az előnye, hogy a gcc fordítót számos olyan
kapcsolóval hívja meg, amik extra ellenőrzést biztosítanak. Az első
két esetben a fordító elnézőbb a hibákkal szemben, míg a 3. esetben
szigorúbban jár el. Amíg tanuljuk a C nyelvet, addig érdemes a 3. módszert
használni, ui. így könnyebben fel tudjuk fedezni a hibákat.

Például a `make alap` a következőképpen hívja meg a gcc fordítót:

    $ gcc -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow alap.c -o alap

Ha a programunk írása közben hibát vétettünk és ezt jelzi a fordító,
akkor ennek örüljünk és köszönjük meg a fordítónak. Inkább fordítás
közben derüljenek ki a hibák, semmint futás közben, esetleg éles
környezetben.

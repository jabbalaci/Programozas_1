/**
 * Példaprogram a `prog1.h` használatára.
 *
 * Fordítás:
 *
 *     $ gcc string2.c prog1.c -o string2
 *
 * Ha a get_string() függvényt is használjuk,
 * akkor a prog1.c -t is le kell fordítani.
 */

#include "prog1.h"
#include <stdio.h>

int main()
{
    string s = get_string("Mi a neved?\n");

    printf("Hello %s!\n", s);

    return 0;
}

/**
 * Példaprogram a `prog1.h` használatára.
 *
 * Fordítás:
 *
 *     $ gcc pelda1.c -o pelda1
 *
 * Ha csak a `string` típust használjuk,
 * akkor elegendő ezt a file-t lefordítani.
 */

#include "prog1.h"
#include <stdio.h>

int main()
{
    string s = "World";

    printf("Hello %s!\n", s);

    return 0;
}

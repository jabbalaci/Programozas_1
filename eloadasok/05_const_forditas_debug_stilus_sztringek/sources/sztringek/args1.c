#include "prog1.h"
#include <stdio.h>

// írjuk ki argc értékét, majd
// írassuk ki a parancssori argumentumokat (mindet)

int main(int argc, string argv[])
{
    printf("argc: %d\n", argc);
    puts("");

    for (int i = 0; i < argc; ++i)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}

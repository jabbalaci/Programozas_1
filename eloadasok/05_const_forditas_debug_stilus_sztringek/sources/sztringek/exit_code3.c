#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Hiba! Adj meg egy paramétert!\n");
        exit(1);    // program befejeztetése az adott hibakóddal
    }

    printf("hello %s\n", argv[1]);

    return 0;
}

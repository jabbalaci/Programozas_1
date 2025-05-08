#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int *b;

    a = malloc(sizeof(int));

    *a = 20;
    *b = 13;    // Súlyos hiba!

    return 0;
}

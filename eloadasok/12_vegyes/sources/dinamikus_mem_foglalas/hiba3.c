#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;

    int *p = &x;

    free(p);    // Hiba!

    puts("END");

    return 0;
}

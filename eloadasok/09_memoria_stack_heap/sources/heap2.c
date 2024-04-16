#include <stdio.h>
#include <stdlib.h>

const long BYTE = 1;
const long KB = 1024 * BYTE;
const long MB = 1024 * KB;
const long GB = 1024 * MB;

void f0()
{
    char *p = malloc(10 * MB);
    if (p == NULL)
    {
        fprintf(stderr, "Hiba! Nem sikerült a mem.-foglalás!\n");
        exit(1);
    }

    // dolgozunk vele

    free(p);

    puts("# end of f0()");
}

int main()
{
    int x, y;

    f0();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(10 * sizeof(int));

    free(p);
    free(p);    // Hiba!

    puts("END");

    return 0;
}

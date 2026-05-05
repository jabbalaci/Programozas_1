#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(10 * sizeof(int));

    free(p);

    p[0] = 2020;            // Hiba!
    printf("%d\n", p[0]);

    puts("END");

    return 0;
}

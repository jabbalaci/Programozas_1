#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = malloc(10 * sizeof(char));
    strcpy(p, "hello");
    //          ^

    p = p + 1;
    puts(p);

    free(p);    // Hiba! p nem a dinamikusan lefoglalt terület *elejére* mutat!

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Ez az stdout-ra ment.\n");

    fprintf(stderr, "Ez viszont az stderr-re lett kiküldve.\n");

    return 0;
}

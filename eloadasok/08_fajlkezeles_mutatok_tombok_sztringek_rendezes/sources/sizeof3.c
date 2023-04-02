#include <stdio.h>

int main()
{
    int n = 15;

    int *p = &n;

    char c = 'H';
    char *cp = &c;

    printf("Egy mutató mérete byte-ban: %d\n", sizeof(p));
    printf("Egy mutató mérete byte-ban: %d\n", sizeof(cp));

    // printf("A mutatott objektum mérete byte-ban: %d\n", sizeof(*p));

    return 0;
}

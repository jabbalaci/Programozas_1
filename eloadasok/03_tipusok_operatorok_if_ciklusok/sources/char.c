#include <stdio.h>

int main()
{
    char c = 'A';

    printf("%c\n", c);

    printf("%c, %d\n", c, c);

    printf("%c, %d\n", c, (int)c);

    // -----

    int code = 65;

    printf("%c\n", code);

    return 0;
}

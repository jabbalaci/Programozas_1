#include <stdio.h>

int main()
{
    const char* s = "hello";

    s[0] = 'H';    // hiba

    printf("%s\n", s);

    return 0;
}

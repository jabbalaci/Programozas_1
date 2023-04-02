#include <stdio.h>

int main()
{
    // char s[] = "hello";
    char s[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

    s[0] = 'H';    // OK

    printf("%s\n", s);

    return 0;
}

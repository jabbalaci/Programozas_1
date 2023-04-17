#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "Anna";

    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    puts("");
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", *(s+2));
    printf("%c\n", s[3]);

    return 0;
}

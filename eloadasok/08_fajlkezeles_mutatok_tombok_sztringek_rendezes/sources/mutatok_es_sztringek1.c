#include <stdio.h>
#include <string.h>

// typedef char * string;

int my_strlen(char *text)
{
    /*
        v    v
        hello
    */
    char *p = text;

    while (*p != '\0') {
        ++p;
    }

    return p - text;
}

int main()
{
    char* s = "hello";

    printf("%s\n", s);
    printf("%c\n", s[0]);

    char *p1 = s;
    char *p2 = s + 4;
    puts("");
    printf("%c\n", *p1);
    printf("%c\n", *p2);
    puts("");
    printf("A távolság: %d\n", p2 - p1);

    int hossz = my_strlen(s);
    printf("A sztring hossza: %d\n", hossz);

    return 0;
}

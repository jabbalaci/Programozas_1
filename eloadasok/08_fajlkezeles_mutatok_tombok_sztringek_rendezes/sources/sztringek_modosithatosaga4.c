#include <stdio.h>
#include <string.h>

#define MAX 200

void insert_text(char s[])
{
    strcpy(s, "Hello world!");
}

int main()
{
    char text[MAX];

    insert_text(text);

    printf("%s\n", text);

    return 0;
}

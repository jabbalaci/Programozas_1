#include "prog1.h"
#include <stdio.h>

int main()
{
    string s = get_string("Input: ");
    printf("Output: ");

    for (int i = 0; s[i] != '\0'; ++i)
    {
        printf("%c ", s[i]);
    }
    puts("");

    return 0;
}

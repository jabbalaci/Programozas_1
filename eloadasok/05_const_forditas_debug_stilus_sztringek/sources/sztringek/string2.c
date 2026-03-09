#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Input: ");
    printf("Output: ");

    for (int i = 0; i < strlen(s); ++i)
    {
        printf("%c ", s[i]);
    }
    puts("");

    return 0;
}

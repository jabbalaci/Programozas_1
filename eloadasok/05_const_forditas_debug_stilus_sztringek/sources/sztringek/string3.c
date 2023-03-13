#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Input: ");
    printf("Output: ");

    int hossz = strlen(s);
    for (int i = 0; i < hossz; ++i)
    {
        printf("%c ", s[i]);
    }
    puts("");

    return 0;
}

#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// a kisbetűket alakítsuk át nagybetűssé

int main()
{
    string s = get_string("Elotte: ");
    printf("Utana: ");

    for (int i = 0, hossz = strlen(s); i < hossz; ++i)
    {
        // s[i]: aktuális karakter
        printf("%c", toupper(s[i]));
    }
    puts("");

    return 0;
}

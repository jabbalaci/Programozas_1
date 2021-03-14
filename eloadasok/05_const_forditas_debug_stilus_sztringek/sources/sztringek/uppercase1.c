#include "prog1.h"
#include <stdio.h>
#include <string.h>

// a kisbetűket alakítsuk át nagybetűssé

int main()
{
    string s = get_string("Elotte: ");
    printf("Utana: ");

    for (int i = 0, hossz = strlen(s); i < hossz; ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // nagybetűsítsük
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    puts("");

    return 0;
}

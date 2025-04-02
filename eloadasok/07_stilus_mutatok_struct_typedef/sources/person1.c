#include "prog1.h"
#include <stdio.h>
#include <string.h>

#define N 4

int main()
{
    string names[N] = { "Emma", "Anna", "Cecil", "Eva" };
    string tel[N] = { "20/123-4567", "30/123-4568", "30/123-4569", "70/123-4560" };

    // Mi Anna telefonszáma?

    for (int i = 0; i < N; ++i)
    {
        if (strcmp(names[i], "Anna") == 0)
        {
            // megvan Anna az i. pozíción
            string t = tel[i];
            printf("Anna telefonszáma: %s\n", t);
            break;
        }
    }

    return 0;
}

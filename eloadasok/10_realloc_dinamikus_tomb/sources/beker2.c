#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    puts("Adj meg számokat 0 végjelig!");
    puts("");

    int *szamok = NULL;
    int elemszam = 0;

    while (1)
    {
        int szam;

        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }
        // else
        szamok = realloc(szamok, (elemszam + 1) * sizeof(int));
        szamok[elemszam] = szam;
        ++elemszam;
    }

    for (int i = 0; i < elemszam; ++i)
    {
        printf("%d ", szamok[i]);
    }
    puts("");

    free(szamok);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    puts("Adj meg számokat 0 végjelig!");
    puts("");

    while (1)
    {
        int szam;

        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0) {
            break;
        }
    }

    return 0;
}

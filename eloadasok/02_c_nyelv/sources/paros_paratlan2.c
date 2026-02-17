#include <stdio.h>

int main()
{
    int szam;
    printf("szam: ");
    scanf("%d", &szam);

    if (szam % 2 == 0)
    {
        printf("paros\n");
    }
    else if (szam % 2 == 1)
    {
        printf("paratlan\n");
    }

    return 0;
}

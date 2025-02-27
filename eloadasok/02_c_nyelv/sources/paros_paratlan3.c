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
    else
    {
        printf("paratlan\n");
    }

    return 0;
}

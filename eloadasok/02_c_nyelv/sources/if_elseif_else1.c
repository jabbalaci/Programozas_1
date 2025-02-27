// if - else-if - else

#include <stdio.h>

int main()
{
    // x beolvasása
    int x;
    printf("x: ");
    scanf("%d", &x);

    // y beolvasása
    int y;
    printf("y: ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x kisebb mint y\n");
    }
    else if (x > y)
    {
        printf("x nagyobb mint y\n");
    }
    else
    {
        printf("x egyenlo y-nal\n");
    }

    return 0;
}

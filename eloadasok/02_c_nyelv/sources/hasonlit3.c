// if - else-if

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    if (x < y)
    {
        printf("x kisebb mint y\n");
    }
    else if (x > y)
    {
        printf("x nagyobb mint y\n");
    }
    else if (x == y)
    {
        printf("x egyenlo y-nal\n");
    }

    return 0;
}

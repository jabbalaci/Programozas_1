#include <stdio.h>

/*
    Írjon függvényt, ami egy egész számról eldönti, hogy páros-e.
*/

int paros_e(int n)
{
    if (n % 2 == 0)
    {
        puts("páros");
    }
    else
    {
        puts("páratlan");
    }
}

int main()
{
    int x = 25;

    paros_e(x);

    return 0;
}

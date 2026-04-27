#include <stdio.h>

/*
    Írjon függvényt, ami egy egész számról eldönti, hogy páros-e.
*/

int paros_e(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x = 25;

    if (paros_e(x))
    {
        puts("páros");
    }
    else
    {
        puts("páratlan");
    }

    return 0;
}

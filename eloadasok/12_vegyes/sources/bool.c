#include <stdio.h>
#include <stdbool.h>

/*
    Írjon függvényt, ami egy egész számról eldönti, hogy páros-e.
*/

bool paros_e(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x = 26;

    bool found = false;

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

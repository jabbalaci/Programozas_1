#include <stdio.h>

int ertek = 0;

int plus_one()
{
    ++ertek;
    return ertek;
}

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n", plus_one());
    }

    return 0;
}

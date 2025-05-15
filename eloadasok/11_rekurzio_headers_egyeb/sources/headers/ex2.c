#include "mymath.h"
#include <stdio.h>

int main()
{
    int total = 0;

    for (int i = 2; i < 200; ++i)
    {
        if (is_prime(i))
        {
            total += i;
        }
    }
    printf("%d\n", total);

    return 0;
}

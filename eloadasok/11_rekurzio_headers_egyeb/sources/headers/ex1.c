#include "mymath.h"
#include <stdio.h>

int main()
{
    for (int i = 2; i < 100; ++i)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    puts("");

    return 0;
}

#include "mymath.h"
#include <math.h>

int is_prime(int n)
{
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }

    int i = 3;
    double maxi = sqrt(n) + 1.0;
    while ((double)i <= maxi)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i += 2;
    }

    return 1;
}

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    int i = 3;
    double maxi = sqrt(n) + 1.0;
    while ((double)i <= maxi)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 2;
    }

    return true;
}

int get_next_prime()
{
    static int number = 1;

    while (true)
    {
        ++number;
        if (is_prime(number)) {
            break;
        }
    }

    return number;
}

int main()
{
    printf("%d\n", get_next_prime());    // 2
    printf("%d\n", get_next_prime());    // 3
    printf("%d\n", get_next_prime());    // 5

    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", get_next_prime());
    }

    return 0;
}

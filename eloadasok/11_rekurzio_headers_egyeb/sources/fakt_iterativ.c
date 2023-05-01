#include <stdio.h>

int fakt(int n)
{
    int x = 1;

    for (int i = 1; i <= n; ++i) {
        x *= i;
    }

    return x;
}

int main()
{
    int result = fakt(5);

    printf("%d\n", result);

    return 0;
}

#include <stdio.h>

int terulet(const int a, const int b)
{
    return a * b;
}

int main()
{
    const int a = 3;
    const int b = 2;

    const int t = terulet(a, b);
    printf("terület: %d\n", t);

    return 0;
}

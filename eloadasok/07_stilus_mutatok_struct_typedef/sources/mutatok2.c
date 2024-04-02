#include <stdio.h>

int main()
{
    const int x = 1;

    printf("x értéke (előtte): %d\n", x);

    int *p = &x;         // p most x-re mutat

    *p = 5;                             // a p mutatón keresztül módosítjuk x értékét
    printf("x értéke (utána): %d\n", x);

    return 0;
}

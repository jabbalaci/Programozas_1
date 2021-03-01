#include <stdio.h>

// Próbáljuk lefordítani. Mi a hiba?

int main()
{
    int n1 = 2;
    int n2 = 8;

    printf("Eredmény: %d\n", add_two_ints(n1, n2));

    return 0;
}

int add_two_ints(int a, int b)
{
    return a + b;
}

#include <stdio.h>

int add_two_ints(int a, int b)
{
    return a + b;
}

int main()
{
    int n1 = 2;
    int n2 = 8;

    int result = add_two_ints(n1, n2);
    printf("Eredmény: %d\n", result);

    return 0;
}

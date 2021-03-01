#include <stdio.h>

// Ez csak egy példa arra, hogy egy függvényt többféleképpen is
// implementálhatunk. Az itt bemutatott módszer nem szép, a
// gyakorlatban két számot NE így adjunk össze!

int add_two_ints(int a, int b)
{
    int sum = 0;
    while (a > 0) {
        ++sum;
        --a;
    }
    while (a < 0) {
        --sum;
        ++a;
    }
    while (b > 0) {
        ++sum;
        --b;
    }
    while (b < 0) {
        --sum;
        ++b;
    }
    return sum;
}

int main()
{
    int n1 = 16;
    int n2 = -4;

    int result = add_two_ints(n1, n2);
    printf("Eredmény: %d\n", result);

    return 0;
}

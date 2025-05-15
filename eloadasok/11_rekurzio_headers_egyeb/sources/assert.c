#include <stdio.h>
#include <assert.h>

int terulet(int a, int b)
{
    assert(a >= 0);
    assert(b >= 0);
    //
    return a * b;
}

int main()
{
    int a = 5;
    int b = 10;

    int t = terulet(a, b);
    printf("terület: %d\n", t);

    return 0;
}

#include <stdio.h>
#include <assert.h>

int fakt(int n)
{
    assert(n >= 0);
    //
    if (n == 0 || n == 1) {
        return 1;
    }
    // else
    return n * fakt(n-1);
}

int main()
{
    int result = fakt(5);

    printf("%d\n", result);

    return 0;
}

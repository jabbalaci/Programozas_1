#include <stdio.h>

int identity(int x)
{
    return x;
}

// pure
int add(int x, int y)
{
    return x + y;
}

int main()
{
    printf("%d\n", add(2, 2));
    printf("%d\n", add(2, 2));
    printf("%d\n", add(2, 2));

    return 0;
}

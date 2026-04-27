#include <stdio.h>

int ertek = 0;

int add(int x, int y)
{
    return ertek + x + y;
}

int main()
{
    printf("%d\n", add(2, 2));
    printf("%d\n", add(2, 2));

    ertek = 1;
    printf("%d\n", add(2, 2));
    printf("%d\n", add(2, 2));

    return 0;
}

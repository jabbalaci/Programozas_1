#include <stdio.h>

int add(int x, int y, int *z)
{
    *z = x + y;
    return *z;
}

int main()
{
    int osszeg = 0;

    printf("Előtte: %d\n", osszeg);
    printf("Összeg: %d\n", add(2, 2, &osszeg));
    printf("Utána: %d\n", osszeg);

    return 0;
}

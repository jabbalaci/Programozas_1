#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x = 1;
    int y = 3;

    printf("(előtte) x: %d, y: %d\n", x, y);    // x: 1, y: 3

    swap(&x, &y);

    printf("(utána) x: %d, y: %d\n", x, y);     // x: 3, y: 1

    return 0;
}

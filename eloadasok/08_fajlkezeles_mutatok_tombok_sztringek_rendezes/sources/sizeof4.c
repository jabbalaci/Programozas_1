#include <stdio.h>

int main()
{
    int tomb[] = { 45, 47, 35, 3, 77, 3, 67, 99, 101 };
    int n = sizeof(tomb) / sizeof(tomb[0]);

    printf("A tömb elemeinek száma: %d\n", n);

    return 0;
}

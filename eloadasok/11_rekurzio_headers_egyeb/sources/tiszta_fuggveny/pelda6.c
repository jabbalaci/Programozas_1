#include <stdio.h>

int sum(int n, const int tomb[])
{
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += tomb[i];
    }
    // tomb[0] = 10;
    return total;
}

int main()
{
    int tomb[5] = { 1, 2, 3, 4, 5 };

    int osszeg = sum(5, tomb);
    printf("%d\n", osszeg);

    printf("%d\n", tomb[0]);

    return 0;
}

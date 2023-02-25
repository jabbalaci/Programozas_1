#include <stdio.h>

// cast-olás: explicit típuskényszerítés
//
// (típus)kifejezés

int main()
{
    int a = 20;
    int b = 3;

    printf("1) %d\n", 20 / 3);

    printf("2) %lf\n", 20.0 / 3.0);

    printf("3) %lf\n", 20.0 / 3);

    printf("4) %lf\n", 20 / 3.0);

    printf("5) %f\n", 20.0 / 3.0);

    printf("6) %f\n", (float)a / (float)b);

    printf("7) %f\n", (float)a / b);

    printf("8) %f\n", a / (float)b);

    return 0;
}

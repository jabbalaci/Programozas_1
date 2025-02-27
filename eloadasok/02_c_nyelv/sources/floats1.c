// fix méreten lebegőpontos számokat nem mindig lehet teljesen precízen tárolni

#include <stdio.h>

// a példa kedvéért:
//
// x legyen 0.1
// y legyen 0.2

int main()
{
    // x beolvasása
    float x;
    printf("x: ");
    scanf("%f", &x);

    // y beolvasása
    float y;
    printf("y: ");
    scanf("%f", &y);

    printf("x: %f, y: %f\n", x, y);    // ellenőrzés, eddig minden OK?
    printf("\n");

    float result = x + y;
    printf("Eredmeny: %f\n", result);

    return 0;
}

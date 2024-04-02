#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;
    int z[10];

    int *p;                                // p egy olyan mutató, ami int -ekre mutathat

    printf("x értéke: %d\n", x);
    printf("x címe: %p\n", &x);
    p = &x;                             // p most x-re mutat
    printf("p értéke: %p\n", p);        // p most x-re mutat

    *p = 5;                             // a p mutatón keresztül módosítjuk x értékét
    printf("x értéke: %d\n", x);

    p = &z[0];
    *p = 99;                            // a p mutatón keresztül módosítjuk a z tömb legelső elemét

    return 0;
}

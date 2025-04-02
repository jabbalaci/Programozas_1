#include <stdio.h>

/*
    Legyen adott 2 pont:

    A (1, 2)
    B (6, 5)

    Rekord (struktúra) átadása paraméterként: érték szerint történik.

*/

typedef struct {
    int x;
    int y;
} Pont;

void kiir(Pont p1)
{
    p1.x = 200;
    printf("A pont koordinátái: %d, %d\n", p1.x, p1.y);
}

int main()
{
    Pont a;
    a.x = 1;
    a.y = 2;

    kiir(a);

    printf("Az A pont koordinátái: %d, %d\n", a.x, a.y);

    return 0;
}

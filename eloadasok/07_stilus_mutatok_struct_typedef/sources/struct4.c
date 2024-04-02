#include <stdio.h>

/*
    Legyen adott 2 pont:

    A (1, 2)
    B (6, 5)

*/

typedef struct {
    int x;
    int y;
} Pont;

int main()
{
    Pont a;
    a.x = 1;
    a.y = 2;

    printf("Az A pont koordinátái: %d, %d\n", a.x, a.y);

    return 0;
}

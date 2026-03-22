#include <stdio.h>

/*
    Legyen adott 2 pont:

    A (1, 2)
    B (6, 5)

*/

struct pont {
    int x;
    int y;
};

typedef struct pont Pont;

int main()
{
    Pont a;
    a.x = 1;
    a.y = 2;

    printf("Az A pont koordinátái: %d, %d\n", a.x, a.y);

    return 0;
}

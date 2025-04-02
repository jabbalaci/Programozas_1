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

int main()
{
    struct pont a;
    a.x = 1;
    a.y = 2;

    struct pont b;
    b.x = 6;
    b.y = 5;

    printf("Az A pont koordinátái: %d, %d\n", a.x, a.y);

    return 0;
}

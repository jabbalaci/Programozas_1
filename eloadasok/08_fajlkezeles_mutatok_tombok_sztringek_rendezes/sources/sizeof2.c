#include <stdio.h>

typedef struct {
    int x;
    int y;
} Pont;

int main()
{
    printf("A Pont struktúra mérete byte-ban: %d\n", sizeof(Pont));

    return 0;
}

#include <stdio.h>

typedef enum {
    RED = 10,
    GREEN,
    BLUE
} Color;

typedef enum {
    UP = 1,
    DOWN,
    LEFT,
    RIGHT
} Direction;

int main()
{
    Direction dir = LEFT;

    printf("%d\n", dir);    // 3

    return 0;
}

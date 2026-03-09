#include "prog1.h"
#include <stdio.h>

int main()
{
    string nevek[4];
    nevek[0] = "Anna";
    nevek[1] = "Bea";
    nevek[2] = "Cecil";
    nevek[3] = "David";

    printf("%s\n", nevek[0]);
    printf("%c%c%c%c\n", nevek[0][0], nevek[0][1], nevek[0][2], nevek[0][3]);
    // printf("%c%c%c%c%d\n", nevek[0][0], nevek[0][1], nevek[0][2], nevek[0][3], nevek[0][4]);

    return 0;
}

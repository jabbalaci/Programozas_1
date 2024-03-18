#include "prog1.h"
#include <stdio.h>

int main()
{
    string nevek[4];
    nevek[0] = "Anna";
    nevek[1] = "Bea";
    nevek[2] = "Cecil";
    nevek[3] = "David";

    printf("%s\n", nevek[0][6]);    // Veszélyes művelet! Csak példa!

    return 0;
}

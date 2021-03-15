#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Generáljunk egy véletlenszámot egy [also, felso]
    zárt intervallumon.
*/

int randint(int also, int felso)                // also: 70, felso: 72
{
    int veletlen = rand();                      // pl. 3568
    int intervallum = felso - also + 1;         // 72 - 70 + 1 = 3

    veletlen = veletlen % intervallum;          // 3568 % 3 = 1
    veletlen = also + veletlen;                 // 70 + 1 = 71

    return veletlen;                            // 71
}

int main()
{
    srand(time(NULL));

    printf("%d\n", randint(70, 72));

    return 0;
}

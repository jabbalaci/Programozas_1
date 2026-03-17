#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Generáljunk egy véletlenszámot egy [also, felso]
    zárt intervallumon.
*/

int randint(int also, int felso)
{
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = veletlen % intervallum;
    veletlen = also + veletlen;

    return veletlen;
}

int main()
{
    srand(time(NULL));

    printf("%d\n", randint(70, 72));

    return 0;
}

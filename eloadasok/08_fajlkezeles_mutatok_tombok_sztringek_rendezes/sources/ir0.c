#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    string fajlnev = "out.txt";

    FILE *fp = fopen(fajlnev, "w");

    if (fp == NULL)
    {
        printf("Hiba a %s fajl megnyitasakor!\n", fajlnev);
        exit(1);
    }

    printf("Hello World!\n");
    printf("2 + 2 = %d\n", 2 + 2);
    printf("pí értéke: %lf\n", M_PI);
    char c = 'a';
    printf("az abece legelso betuje: %c\n", c);

    fclose(fp);

    return 0;
}

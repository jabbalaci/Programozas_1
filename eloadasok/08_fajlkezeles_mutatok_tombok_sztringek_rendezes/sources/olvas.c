#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main()
{
    string fajlnev = "szoveg.txt";
    char sor[MAX];

    FILE *fp = fopen(fajlnev, "r");

    if (fp == NULL)
    {
        printf("Hiba a %s file megnyitasakor!\n", fajlnev);
        exit(1);
    }

    while (fgets(sor, MAX, fp) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';
        printf("%s\n", sor);
    }

    fclose(fp);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    1) sztring -> szám: atoi, atof

    2) szám -> sztring
*/

int main()
{
    char text[100];

    strcpy(text, "2020");

    printf("%s\n", text);

    int ev = atoi(text);
    printf("Év: %d\n", ev);

    fprintf(stdout, "Év: %d\n", ev);

    ev = 2525;
    sprintf(text, "Year %d", ev);
    puts(text);

    printf("%d", ev);
    sprintf(text, "%d", ev);
    puts(text);

    return 0;
}

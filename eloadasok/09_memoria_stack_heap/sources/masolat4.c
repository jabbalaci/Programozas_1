#include "prog1.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*
    - bekérünk egy sztringet
    - készítsünk erről egy másolatot, amit lássunk el nagy kezdőbetűvel
    - pl.: anna
           Anna
*/

int main()
{
    char *s = get_string("Név: ");

    char *t = strdup(s);

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 100

/*
    Írjunk függvényt, ami visszaadja a "Bea" sztringet.
*/

void insert_name(int n, char s[])
{
    strcpy(s, "Bea");
}

int main()
{
    char szoveg[MAX];
    int meret = MAX;

    insert_name(meret, szoveg);

    printf("%s\n", szoveg);

    return 0;
}

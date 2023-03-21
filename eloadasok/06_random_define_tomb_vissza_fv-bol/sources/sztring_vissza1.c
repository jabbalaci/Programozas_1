#include <stdio.h>

#define MAX 100

/*
    Írjunk függvényt, ami visszaadja a "Bea" sztringet.
*/

void insert_name(int n, char s[])
{
    s[0] = 'B';
    s[1] = 'e';
    s[2] = 'a';
    s[3] = '\0';
}

int main()
{
    char szoveg[MAX];
    int meret = MAX;

    insert_name(meret, szoveg);

    printf("%s\n", szoveg);

    return 0;
}

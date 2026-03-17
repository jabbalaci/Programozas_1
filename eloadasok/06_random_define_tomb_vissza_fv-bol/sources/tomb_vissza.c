#include <stdio.h>

/*

    3 - a tömböt a hívó függvényben deklarálom, s átadom egy másik fv.-nek
        (vagy eljárásnak), ami közvetlenül módosítja a tömböt

*/

void array_10(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        tomb[i] = i + 1;
    }
}

int main()
{
    // Kell nekem egy tömb, ami egészeket tartalmaz 1-től 10-ig (a 10-et is).

    int szamok[10];
    int meret = 10;

    array_10(meret, szamok);

    for (int i = 0; i < meret; ++i)
    {
        printf("%d\t", szamok[i]);
    }
    puts("");

    return 0;
}

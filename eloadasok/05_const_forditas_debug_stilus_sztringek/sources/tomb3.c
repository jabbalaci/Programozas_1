#include <stdio.h>

int sum(const int n, const int tomb[])
{
    int osszeg = 0;
    for (int i = 0; i < n; ++i)
    {
        osszeg += tomb[i];
    }

    return osszeg;
}

int main()
{
    int szamok[4] = { 1, 4, 8, 3 };
    int meret = 4;

    const int osszeg = sum(meret, szamok);

    // osszeg = 20;    // Hiba!

    printf("osszeg: %d\n", osszeg);

    return 0;
}

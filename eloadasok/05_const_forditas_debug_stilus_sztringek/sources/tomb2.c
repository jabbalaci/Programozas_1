#include <stdio.h>

int sum(int n, const int tomb[])
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

    int osszeg = sum(meret, szamok);
    printf("osszeg: %d\n", osszeg);
    //
    printf("%d\n", szamok[0]);
    printf("%d\n", szamok[1]);
    printf("%d\n", szamok[2]);
    printf("%d\n", szamok[3]);

    return 0;
}

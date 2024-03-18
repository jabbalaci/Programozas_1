#include <stdio.h>

void szoroz_10_zel(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        tomb[i] *= 10;    // tomb[i] = tomb[i] * 10;
    }
}

int main()
{
    int szamok[4] = { 1, 4, 8, 3 };
    int meret = 4;

    szoroz_10_zel(meret, szamok);
    printf("%d\n", szamok[0]);
    printf("%d\n", szamok[1]);
    printf("%d\n", szamok[2]);
    printf("%d\n", szamok[3]);

    return 0;
}

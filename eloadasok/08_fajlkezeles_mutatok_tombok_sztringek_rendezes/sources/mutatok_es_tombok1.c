#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tomb[i]);
        // printf("%d ", *(tomb + i));
    }
    puts("");
}

int main()
{
    int szamok[] = { 45, 84, 36, 57, 65, 43, 45, 43, 56, 17 };
    int n = sizeof(szamok) / sizeof(szamok[0]);

    int *p = &szamok[0];

    printf("%d\n", *(p + 2));
    printf("%d\n", p[2]);

    printf("%d\n", *p);
    p += 2;
    printf("%d\n", *p);

    // int *p = &szamok[0];
    // int *p = szamok;
    p = szamok;
    printf("%d\n", *p);

    puts("");
    kiir(n, szamok);
    puts("");

    int *p1 = szamok;
    int *p2 = szamok + 2;
    printf("A távolság: %d\n", p2 - p1);

    return 0;
}

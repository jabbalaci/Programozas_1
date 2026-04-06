#include <stdio.h>

// egyszerű kiválasztásos rendezés (egyszerű, de lassú)
// helyben rendez
void tomb_rendez(int n, int tomb[])
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (tomb[j] < tomb[i])
            {
                int temp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = temp;
            }
        }
    }
}

void tomb_kiiratasa(int n, int tomb[])
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int main()
{
    int szamok[] = { 45, 84, 36, 57, 65, 43, 45, 43, 56, 17 };
    int n = sizeof(szamok) / sizeof(szamok[0]);

    tomb_kiiratasa(n, szamok);
    tomb_rendez(n, szamok);
    tomb_kiiratasa(n, szamok);

    return 0;
}

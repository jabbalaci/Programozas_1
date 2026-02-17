// egymásba ágyazott ciklusok, ciklus a ciklusban

#include <stdio.h>

int main()
{
    int magassag = 10;
    int szelesseg = 2;

    for (int i = 0; i < magassag; ++i)
    {
        for (int j = 0; j < szelesseg; ++j)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

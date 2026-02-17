// karakter beolvasása, elágazás

#include <stdio.h>

int main()
{
    // karakter beolvasása
    char c;
    printf("Akarod folytatni?\n");
    scanf("%c", &c);

    if (c == 'i')
    {
        printf("folytatas...\n");
    }
    else if (c == 'n')
    {
        printf("stop\n");
    }
    else
    {
        printf("nem ertem :(\n");
    }

    return 0;
}

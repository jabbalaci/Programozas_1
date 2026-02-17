// logikai VAGY

#include <stdio.h>

int main()
{
    // karakter beolvasása
    char c;
    printf("Akarod folytatni?\n");
    scanf("%c", &c);

    if (c == 'i' || c == 'I')
    {
        printf("folytatas...\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("stop\n");
    }
    else
    {
        printf("nem ertem :(\n");
    }

    return 0;
}

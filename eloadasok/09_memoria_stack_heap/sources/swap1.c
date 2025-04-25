#include <stdio.h>

/*
    Ez a verzió NEM jó. Ezzel nem tudjuk megcserélni a main()
    függvényben a két változó értékét.
*/

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    printf("# a: %d, b: %d\n", a, b);
}

int main()
{
    int x = 1;
    int y = 3;

    printf("(előtte) x: %d, y: %d\n", x, y);    // x: 1, y: 3

    swap(x, y);

    printf("(utána) x: %d, y: %d\n", x, y);     // mit szeretnénk elérni:
                                                // x: 3, y: 1

    return 0;
}

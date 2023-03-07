#include <stdio.h>

int main()
{
    int counter;

    for (int i = 0; i < 10; ++i)
    {
        // Hiba! Úgy növeljük az értékét, hogy nem adtunk
        // neki kezdőértéket!
        counter += 1;
    }

    printf("%d\n", counter);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define EPSILON 0.0000001

bool fequal(double x, double y)
{
    if (fabs(x - y) < EPSILON)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float x = 0.1 + 0.2;
    float y = 0;

    for (int i = 0; i < 100; ++i)
    {
        y += 0.003;
    }

    printf("x: %.20lf\n", x);
    printf("y: %.20lf\n", y);

    if (fequal(x, y))
    {
        puts("egyenlők");
    }
    else
    {
        puts("NEM egyenlők");
    }

    return 0;
}

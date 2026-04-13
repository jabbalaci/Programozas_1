#include <stdio.h>

// struktúrák és mutatók

typedef struct {
    int x;
    int y;
    char leiras[500];
} Pont;

void kiir(const Pont *p)
{
    // printf("kiir: P(%d, %d)\n", (*p).x, (*p).y);
    // p->x = 15;
    printf("kiir: P(%d, %d)\n", p->x, p->y);
}

void kiir2(Pont pont)
{
    printf("kiir2: P(%d, %d)\n", pont.x, pont.y);
}

int main()
{
    Pont a;
    a.x = 1;
    a.y = 2;

    printf("P(%d, %d)\n", a.x, a.y);

    kiir(&a);

    printf("utána: P(%d, %d)\n", a.x, a.y);

    // kiir2(a);

    return 0;
}

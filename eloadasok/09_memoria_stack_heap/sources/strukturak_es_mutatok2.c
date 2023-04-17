#include <stdio.h>
#include <stdlib.h>

// struktúrák és mutatók

typedef struct {
    int x;
    int y;
} Pont;

Pont * origo()
{
    Pont *p = malloc(sizeof(Pont));
    p->x = 0;
    p->y = 0;

    return p;
}

int main()
{
    Pont *kozeppont = origo();

    printf("P(%d, %d)\n", kozeppont->x, kozeppont->y);

    free(kozeppont);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
    malloc
    calloc
*/

int main()
{
    int n = 10;
    int *tomb = calloc(n, sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", tomb[i]);
    }

    free(tomb);

    puts("END");

    return 0;
}

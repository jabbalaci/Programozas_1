#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 3; ++i)
    {
        printf("%d\t", rand());
    }
    puts("");

    return 0;
}

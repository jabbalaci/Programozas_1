#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(42);

    for (int i = 0; i < 3; ++i)
    {
        printf("%d\t", rand());
    }
    puts("");

    return 0;
}

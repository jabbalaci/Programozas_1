#include <stdio.h>

void hello(int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("hello\n");
    }
}

int main()
{
    hello(2);
    printf("----------\n");
    hello(4);

    return 0;
}

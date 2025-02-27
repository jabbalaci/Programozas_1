#include <stdio.h>

void hello()
{
    printf("hello\n");
}

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        hello();
    }

    return 0;
}

// eljárás ellátása paraméterrel

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
    hello(5);

    return 0;
}

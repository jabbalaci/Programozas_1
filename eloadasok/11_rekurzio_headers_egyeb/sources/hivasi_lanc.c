#include <stdio.h>

void b()
{
    puts("b()");
}

void a()
{
    puts("a()");
    b();
}

int main()
{
    puts("main()");
    a();

    return 0;
}

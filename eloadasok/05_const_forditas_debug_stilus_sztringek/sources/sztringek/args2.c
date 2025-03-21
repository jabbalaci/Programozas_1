#include "prog1.h"
#include <stdio.h>

// $ ./a.out
// hello world
// $ ./a.out Laci
// hello Laci

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello %s\n", argv[1]);
    }
    else
    {
        printf("hello world\n");
    }

    return 0;
}

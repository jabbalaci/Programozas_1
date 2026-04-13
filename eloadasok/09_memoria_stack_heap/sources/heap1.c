#include <stdio.h>

const long BYTE = 1;
const long KB = 1024 * BYTE;
const long MB = 1024 * KB;
const long GB = 1024 * MB;

void f0()
{
    char tomb[10 * MB];
    puts("# end of f0()");
}

int main()
{
    int x, y;

    f0();

    return 0;
}

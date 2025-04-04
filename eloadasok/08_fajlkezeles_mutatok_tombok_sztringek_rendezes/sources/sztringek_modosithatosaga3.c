#include <stdio.h>

const char* hello()
{
    const char *s = "hello world";
    return s;
}

int main()
{
    const char* result = hello();

    // result[0] = 'H';

    printf("%s\n", result);

    return 0;
}

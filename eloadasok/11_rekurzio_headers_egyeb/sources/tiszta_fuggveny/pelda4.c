#include <stdio.h>

int add(int x, int y)
{
    int result = x + y;
    fprintf(stdout, "Az összeg: %d\n", result);
    return result;
}

int main()
{
    return 0;
}

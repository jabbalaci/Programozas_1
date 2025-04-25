// http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare

#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[0] = 0;
    free(x);
}

int main(void)
{
    f();
    return 0;
}

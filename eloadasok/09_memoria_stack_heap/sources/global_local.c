#include <stdio.h>

#define MAX 10

const double PI = 3.14159;

int counter = 0;

void f2()
{
    counter = 42;
}

void f1()
{
    int counter = 5;
    printf("f1: %d\n", counter);
}

void f0()
{
    printf("f0: %d\n", counter);
}

int main()
{
    printf("MAX értéke: %d\n", MAX);
    printf("PI értéke: %lf\n", PI);
    f0();
    f1();
    f2();
    printf("main: %d\n", counter);

    return 0;
}

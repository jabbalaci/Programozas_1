#include <stdio.h>

int main()
{
    int x = 5;
    char c = 'H';
    float f = 1.0f;         // f postfix: float literál
    double pi = 3.14159;

    printf("x változó mérete byte-ban: %d\n", sizeof(x));
    printf("c változó mérete byte-ban: %d\n", sizeof(c));
    printf("f változó mérete byte-ban: %d\n", sizeof(f));
    printf("pi változó mérete byte-ban: %d\n", sizeof(pi));

    puts("");
    printf("int típus mérete byte-ban: %d\n", sizeof(int));
    printf("char típus byte-ban: %d\n", sizeof(char));
    printf("float típus mérete byte-ban: %d\n", sizeof(float));
    printf("double típus mérete byte-ban: %d\n", sizeof(double));

    return 0;
}

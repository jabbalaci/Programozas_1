#include <stdio.h>

/*
    statikus változók
*/

int next_five()
{
    static int number = 0;

    number += 5;
    return number;
}

int main()
{
    printf("%d\n", next_five());    // 5
    printf("%d\n", next_five());    // 10
    printf("%d\n", next_five());    // 15

    return 0;
}

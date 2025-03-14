#include <stdio.h>

int main()
{
    int t1[3] = { 1, 2, 3 };
    int t2[3];

    // t2 = t1;

    for (int i = 0; i < 3; ++i)
    {
        t2[i] = t1[i];
    }


    return 0;
}

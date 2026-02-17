// aritmetikai művelet (szorzás)

#include <stdio.h>

int main()
{
    int ev;
    printf("Hany eves vagy?\n");
    scanf("%d", &ev);

    int napok = ev * 365;
    printf("Akkor legalabb %d napos vagy.\n", napok);

    return 0;
}

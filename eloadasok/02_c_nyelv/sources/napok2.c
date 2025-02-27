#include <stdio.h>

int main()
{
    int ev;
    printf("Hany eves vagy?\n");
    scanf("%d", &ev);

    printf("Akkor legalabb %d napos vagy.\n", ev * 365);

    return 0;
}

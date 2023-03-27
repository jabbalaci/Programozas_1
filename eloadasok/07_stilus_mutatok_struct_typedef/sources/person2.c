#include "prog1.h"
#include <stdio.h>
#include <string.h>

#define N 4

typedef struct {
    string name;
    string tel;
} Person;

int main()
{
    Person people[N];
    people[0].name = "Emma";
    people[0].tel = "20/123-4567";
    people[1].name = "Anna";
    people[1].tel = "30/123-4568";
    people[2].name = "Cecil";
    people[2].tel = "30/123-4569";
    people[3].name = "Eva";
    people[3].tel = "70/123-4560";

    // Mi Anna telefonszáma?

    for (int i = 0; i < N; ++i)
    {
        Person p = people[i];
        if (strcmp(p.name, "Anna") == 0)
        {
            // megvan Anna
            printf("Anna telefonszáma (2. módszer): %s\n", p.tel);
            break;
        }
    }

    return 0;
}

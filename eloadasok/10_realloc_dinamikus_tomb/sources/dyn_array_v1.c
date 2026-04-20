#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *elems;    // a dinamikusan lefoglalt tömbre mutat
    int length;    // a betett elemek száma
    int capacity;  // a tömb fizikai kapacitása
                   // capacity >= length
} DynArray;

void mem_error_exit()
{
    fprintf(stderr, "Error: cannot allocate memory\n");
    exit(1);
}

DynArray * da_create()
{
    DynArray *result = malloc(sizeof(DynArray));
    if (result == NULL) {
        mem_error_exit();
    }

    int initial_capacity = 2;

    result->elems = malloc(initial_capacity * sizeof(int));
    if (result->elems == NULL) {
        mem_error_exit();
    }
    result->length = 0;
    result->capacity = initial_capacity;

    return result;
}

void da_append(DynArray *self, int data)
{
    if (self->length == self->capacity)
    {
        int new_capacity = 2 * self->capacity;
        self->elems = realloc(self->elems, new_capacity * sizeof(int));
        if (self->elems == NULL) {
            mem_error_exit();
        }
        self->capacity = new_capacity;
    }
    //
    self->elems[self->length] = data;
    self->length += 1;
}

void * da_destroy(DynArray *self)
{
    free(self->elems);
    free(self);
    //
    return NULL;
}

int main()
{
    DynArray *li = da_create();

    // li.append(1);
    da_append(li, 1);
    da_append(li, 2);
    da_append(li, 3);
    for (int i = 4; i <= 20; ++i) {
        da_append(li, i);
    }

    for (int i = 0; i < li->length; ++i) {
        printf("%d ", li->elems[i]);
    }
    puts("");

    li = da_destroy(li);

    printf("%p\n", li);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        free(list);
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // Equilivalente a:
    // *list = 1;
    // *(list + 1) = 2;
    // *(list + 2) = 2;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
}
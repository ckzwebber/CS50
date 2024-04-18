#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start, end, new, dead, years;

    do
    {
        start = get_int("Valor inicial da população de Lhamas: ");
    }
    while (start < 9);

    do
    {
        end = get_int("Valor final da população de Lhamas: ");
    }
    while (end < start);

    years = 0;

    do
    {
        new = start / 3;
        dead = start / 4;
        start = start + new;
        start = start - dead;
        years = years + 1;
    }
    while (start < end);

    printf("Anos: %i\n", years);
}
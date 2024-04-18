#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 50)
    {
        printf("Olá!\n");
        i++;
    }

    for (int x = 0; x < 50; x++)
    {
        printf("Tchau!\n");
    }
}
#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

float media(int lenght, int array[]);

int main(void)
{

    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i ++)
    {
        scores[i] = get_int("Nota: ");
    }
    printf("Sua nota foi de: %f\n", media(TOTAL, scores));
}

float media(int lenght, int array[])
{
    int soma = 0;
    for (int i = 0; i < lenght; i++)
    {
        soma = soma + array[i];
    }
    return soma / (float) lenght;
}
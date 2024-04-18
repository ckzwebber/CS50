#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;

    do
    {
        altura = get_int("Digite a altura: ");
    }
    while (altura < 1 || altura > 8);

    for (int linha = 0; linha < altura; linha++)
    {
        for (int dots = 0; dots < altura - linha - 1; dots++)
        {
            printf(" ");
        }
        for (int hash = 0; hash <= linha; hash++)
        {
            printf("#");
        }
        printf(" ");
        for (int hash = 0; hash <= linha; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}

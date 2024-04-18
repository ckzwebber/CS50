#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pegue x e y
    int x = get_int("Digite um número: ");
    int y = get_int("Digite outro número: ");

    //Comparação
    if (x < y)
    {
        //printf(x + "%i é menor que %i" + y);
        printf("y é maior que x.\n");
    }
    else if (x > y)
    {
        //printf(x + "%i é maior que %i" + y);
        printf("x é maior que y.\n");
    }
    else
    {
        //printf(x + "%i e " + y + "%i são iguais");
        printf("Os dois números são iguais.\n");
    }
}
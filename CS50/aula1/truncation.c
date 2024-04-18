#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Obtendo os números do usuario
    int x = get_int("Digite um número: ");
    int y = get_int("Digite outro número ");

    //Dvividindo x por y
    float z = (float) x / (float) y;
    printf("A divisão desses números é: %f\n", z);
}
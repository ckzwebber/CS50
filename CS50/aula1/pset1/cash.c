#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int penny, nickel, dime, quarter, moedas;
    penny = 1;
    nickel = 5;
    dime = 10;
    quarter = 25;
    moedas = 0;

    float troco;

    do {
        troco = get_float("O quanto o caixa está te devendo? ");
    } while (troco < 0);

    troco = troco * 100;
    troco = roundf(troco);

    if (troco >= quarter)
    {
        do {
            troco = troco - quarter;
            moedas = moedas + 1;
        }   while (troco >= quarter);
    }

    if (troco >= dime) {
        do {
            troco = troco - dime;
            moedas = moedas + 1;
        } while (troco >= dime);
    }

    if (troco >= nickel)
    {
        do {
            troco = troco - nickel;
            moedas = moedas + 1;
        } while (troco >= nickel);
    }

    if (troco >= penny)
    {
        do {
            troco = troco - penny;
            moedas = moedas + 1;
        } while (troco >= penny);
    }

    printf("%i\n", moedas);
}
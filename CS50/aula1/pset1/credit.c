#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int flagx, flagy, soma, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, digit12, digit13,
        digit14, digit15, digit16;

    long cartao;

    do
    {
        cartao = get_long("Número do cartão: ");
    }
    while (cartao < 0);

    flagx = ((cartao % 10000000000000000) / 1000000000000000);
    flagy = ((cartao % 1000000000000000) / 100000000000000);

    digit1 = ((cartao % 100) / 10) * 2;
    digit2 = ((cartao % 10000) / 1000) * 2;
    digit3 = ((cartao % 1000000) / 100000) * 2;
    digit4 = ((cartao % 100000000) / 10000000) * 2;
    digit5 = ((cartao % 10000000000) / 1000000000) * 2;
    digit6 = ((cartao % 1000000000000) / 100000000000) * 2;
    digit7 = ((cartao % 100000000000000) / 10000000000000) * 2;
    digit8 = ((cartao % 10000000000000000) / 1000000000000000) * 2;
    digit1 = (digit1 % 100) / 10 + (digit1 % 10);
    digit2 = (digit2 % 100) / 10 + (digit2 % 10);
    digit3 = (digit3 % 100) / 10 + (digit3 % 10);
    digit4 = (digit4 % 100) / 10 + (digit4 % 10);
    digit5 = (digit5 % 100) / 10 + (digit5 % 10);
    digit6 = (digit6 % 100) / 10 + (digit6 % 10);
    digit7 = (digit7 % 100) / 10 + (digit7 % 10);
    digit8 = (digit8 % 100) / 10 + (digit8 % 10);

    digit9 = ((cartao % 10) / 1);
    digit10 = ((cartao % 1000) / 100);
    digit11 = ((cartao % 100000) / 10000);
    digit12 = ((cartao % 10000000) / 1000000);
    digit13 = ((cartao % 1000000000) / 100000000);
    digit14 = ((cartao % 100000000000) / 10000000000);
    digit15 = ((cartao % 10000000000000) / 1000000000000);
    digit16 = ((cartao % 1000000000000000) / 100000000000000);

    soma = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11 + digit12 + digit13 +
           digit14 + digit15 + digit16;

    if (soma == 0 || soma == 10 || soma == 20 || soma == 30 || soma == 40 || soma == 50)
    {
        if (flagx == 3 || flagy == 4 || flagy == 7)
        {
            printf("AMEX\n");
        }

        if (flagx == 5 || flagy == 1 || flagy == 2 || flagy == 3 || flagy == 4 || flagy == 5)
        {
            printf("MASTERCARD\n");
        }

        if (flagx == 4)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
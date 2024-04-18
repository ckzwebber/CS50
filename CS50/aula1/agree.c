#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Você aceita? ");
    
    if (c == 's' || c == 'S')
    {
        printf("Aceitado.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Negado.\n");
    }
}
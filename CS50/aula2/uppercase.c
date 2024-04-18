#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char c = get_char("A to a, or a to A? ");

    //Maiuscula para miniscula
    if (c == 'A')
    {
        string s = get_string("Antes: ");
        printf("Depois: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - 32);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    //Minuscula para maiuscula
    else
    {
        string s = get_string("Antes: ");
        printf("Depois: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", s[i] + 32);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
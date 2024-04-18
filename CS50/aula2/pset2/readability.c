#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int letters, words, sentences, resul;
    float index, ml, ms;
    string text;

    text = get_string("Texto: ");

    letters = 0;
    words = 1;
    sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
        else if (isspace(text[i]))
        {
            words += 1;
        }
        else if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentences += 1;
        }
    }

    ml = (float) letters / (float) words * 100;
    ms = (float) sentences / (float) words * 100;

    index = 0.0588 * ml - 0.296 * ms - 15.8;

    resul = round(index);

    if (resul < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (resul >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade: %i\n", resul);
    }

}
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "RON") == 0)
        {
            printf("Achado\n");
            return 0;
        }
        printf("Não achado\n");
        return 1;
    }
}
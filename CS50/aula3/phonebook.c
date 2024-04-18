#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

const int NUMBER = 2;

int main(void)
{
    person people[NUMBER];

    for (int i = 0; i < NUMBER; i++)
    {
        people[i].name = get_string("Qual é o seu nome? ");
        people[i].number = get_string("Qual é o seu número? ");
    }

    people[1].number = "2-2222-2222";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Achado %s\n", people[i].number);
            return 0;
        }
    }
    printf("Não achado\n");
    return 1;
}
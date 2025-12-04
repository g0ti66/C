#include <stdio.h>

int main()
{

    int age;

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Vous êtes mineur !\n");
    }

    else if (age == 18)
    {
        printf("Vous êtes enfin majeur !");
    }

    else
    {
        printf("Vous êtes majeur !");
    }

    return 0;
}
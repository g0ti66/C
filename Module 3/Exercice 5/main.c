#include <stdio.h>

int main()
{
    int boisson;

    printf("Voici la carte :\n");
    printf("\t0 : Rien\n");
    printf("\t1 : Coca\n");
    printf("\t2 : Café\n");
    printf("\t3 : Bière\n");

    printf("\n");

    printf("Que voulez-vous boire ? ");
    scanf("%d", &boisson);

    printf("\n");

    if (boisson == 0)
    {
        printf("Au revoir !");
    }
    else if (boisson == 1)
    {
        printf("Voici votre coca !");
    }
    else if (boisson == 2)
    {
        printf("Voici votre café !");
    }
    else if (boisson == 3)
    {
        int age;

        printf("Quel est votre âge ? ");
        scanf("%d", &age);

        if (age >= 18)
        {
            printf("Voici votre bière !\n");
        }
        else
        {
            printf("Vous n'avez pas le droit à de la bière !\n");
        }
    }
    else
    {
        printf("Chiffre invalide !");
    }

    return 0;
}
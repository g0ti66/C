#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int saisie_user;

    bool a_trouve = false;

    srand(time(NULL));
    int nb_a_deviner = rand() % 100 + 1;

    printf("Veuillez entrer un nombre entre 1 et 100 :\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("Votre saisie : ");
        scanf("%d", &saisie_user);

        while (saisie_user < 1 || saisie_user > 100)
        {
            printf("Erreur, veuillez entrer un nombre entre 1 et 100 : ");
            scanf("%d", &saisie_user);
        }

        if (saisie_user < nb_a_deviner)
        {
            printf("C'est plus !\n");
            printf("Il vous reste %d tentatives\n", i);
            printf("\n");
        }
        else if (saisie_user > nb_a_deviner)
        {
            printf("C'est moins !\n");
            printf("Il vous reste %d tentatives\n", i);
            printf("\n");
        }
        else
        {
            a_trouve = true;
            break;
        }  
    }
    
    if (a_trouve)
    {
        printf("Bravo ! Vous avez gagn%c !\n", 130);
    }
    else
    {
        printf("Vous avez perdu ! La r%cponse %ctait %d !\n", 130, 130, nb_a_deviner);
    }
    
    return 0;
}
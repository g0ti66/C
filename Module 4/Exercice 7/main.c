#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 3;

    int user;

    int pointsGagnants = 3;
    
    int pointUser = 0;
    int pointOrdinateur = 0;

    // Générer un nombre aléatoire
    srand(time(NULL));

    printf("D%cbut de partie :\n", 130);

    while (pointUser < pointsGagnants && pointOrdinateur < pointsGagnants)
    {
        int ordi = (rand() % (MAX - MIN + 1)) + MIN;

        printf("Que voulez-vous jouer ?\n");
        printf("\t1. Pierre\n");
        printf("\t2. Papier\n");
        printf("\t3. Ciseaux\n");

        printf("Votre saisie : ");
        scanf("%d", &user);

        while (user < 1 || user > 3)
        {
            printf("Erreur de saisie, veuillez saisir un num%cro correct :", 130);
            scanf("%d", &user);
        }
        
        if (user == 1)
        {
            if (ordi == 1)
            {
                printf("Joueur joue Pierre et ordinateur joue Pierre : %cgalit%c\n", 130, 130);

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else if (ordi == 2)
            {
                printf("Joueur joue Pierre et ordinateur joue Papier : Point pour ordinateur\n");

                pointOrdinateur++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else
            {
                printf("Joueur joue Pierre et ordinateur joue Ciseaux : Point pour joueur\n");

                pointUser++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }  
        }
        else if (user == 2)
        {
            if (ordi == 1)
            {
                printf("Joueur joue Papier et ordinateur joue Pierre : Point pour joueur\n");

                pointUser++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else if (ordi == 2)
            {
                printf("Joueur joue Papier et ordinateur joue Papier : %cgalit%c\n", 130, 130);

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else
            {
                printf("Joueur joue Papier et ordinateur joue Ciseaux : Point pour ordinateur\n");

                pointOrdinateur++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }  
        }
        else
        {
            if (ordi == 1)
            {
                printf("Joueur joue Ciseaux et ordinateur joue Pierre : Point pour ordinateur\n");

                pointOrdinateur++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else if (ordi == 2)
            {
                printf("Joueur joue Ciseaux et ordinateur joue Papier : Point pour joueur\n");

                pointUser++;

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }
            else
            {
                printf("Joueur joue Ciseaux et ordinateur joue Ciseaux : %cgalit%c\n", 130, 130);

                printf("Ordi : %d\n", pointOrdinateur);
                printf("Joueur : %d\n", pointUser);

                printf("\n");
            }     
        }   
    }
    
    if (pointUser == pointsGagnants)
    {
        printf("Joueur a gagn%c la partie !\n", 130);
    }
    else
    {
        printf("Ordinateur a gagn%c la partie !\n", 130);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int date;
    printf("Entrer une date (Format jjmmaaaa) : ");
    scanf("%d", &date);
    
    int jour = date / 1000000;
    int mois = date / 10000 % 100;
    int annee = date % 10000;
    
    if (jour < 1 || jour > 31)
    {
        printf("Erreur de saisie\n");
        return 1;
    }
    else if (mois == 2 && jour > 29)
    {
        printf("Erreur de saisie\n");
        return 1;  
    }
    else if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30)
    {
        printf("Erreur de saisie\n");
        return 1;
    }
    else
    {
        switch (mois)
        {
        case 1:
            printf("%d janvier %d\n", jour, annee);
            break;
        case 2:
            printf("%d février %d\n", jour, annee);
            break;
        case 3:
            printf("%d mars %d\n", jour, annee);
            break;
        case 4:
            printf("%d avril %d\n", jour, annee);
            break;
        case 5:
            printf("%d mai %d\n", jour, annee);
            break;
        case 6:
            printf("%d juin %d\n", jour, annee);
            break;
        case 7:
            printf("%d juillet %d\n", jour, annee);
            break;
        case 8:
            printf("%d août %d\n", jour, annee);
            break;
        case 9:
            printf("%d septembre %d\n", jour, annee);
            break;
        case 10:
            printf("%d octobre %d\n", jour, annee);
            break;
        case 11:
            printf("%d novembre %d\n", jour, annee);
            break;
        case 12:
            printf("%d décembre %d\n", jour, annee);
            break;
        default:
        printf("Erreur de saisie\n");
            break;
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int nbJour;

    printf("Veuillez enter un numéro de jour de la semaine : ");
    scanf("%d", &nbJour);

    switch (nbJour)
    {
    case 1:
        printf("Lundi");
        break;
    case 2:
        printf("Mardi");
        break;
    case 3:
        printf("Mercredi");
        break;
    case 4:
        printf("Jeudi");
        break;
    case 5:
        printf("Vendredi");
        break;
    case 6:
        printf("Samedi");
        break;
    case 7:
        printf("Dimanche");
        break;
    default:
        printf("Erreur");
        break;
    }

    return 0;
}
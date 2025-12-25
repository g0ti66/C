#include <stdio.h>
#include <stdbool.h>

int main()
{
    int nb;
    bool estPremier = true;

    printf("Entrez un nombre : ");
    scanf("%d", &nb);

    while (nb <= 1)
    {
        printf("Erreur, veuillez saisir un nombre sup%crieur a 1 : ", 130);
        scanf("%d", &nb);
    }
    

    for (int i = 2; i < nb; i++)
    {
        if (nb % i == 0)
        {
            estPremier = false;
            break;
        }
    }

    if (estPremier)
    {
        printf("%d est premier !\n", nb);
    }
    else
    {
        printf("%d n'est pas premier !\n", nb);
    }
    
    return 0;
}
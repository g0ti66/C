#include <stdio.h>

int main()
{
    int montantEuros;
    float tauxDeChange = 1.20;

    printf("Entrez un montant en euros : ");
    scanf("%d", &montantEuros);

    printf("Le taux de change de l'euros en dollars est de %.2f.\n", tauxDeChange);

    float montantDollars = montantEuros * tauxDeChange;

    printf("Vous avez %.2f dollars.\n", montantDollars);

    return 0;
}
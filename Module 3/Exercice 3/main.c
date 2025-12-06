#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbUn;
    int nbDeux;

    printf("Veuillez saisir un premier nombre : ");
    scanf("%d", &nbUn);

    printf("Veuillez saisir un deuxième nombre : ");
    scanf("%d", &nbDeux);

    printf("\n");

    if (nbUn == nbDeux)
    {
        printf("Les deux nombres sont égaux !\n");
    }
    else
    {
        int pas = abs(nbUn - nbDeux);
        if (nbUn < nbDeux)
        {
            printf("%d est inférieur à %d de %d\n", nbUn, nbDeux, pas);
        }
        else
        {
            printf("%d est supérieur à %d de %d\n", nbUn, nbDeux, pas);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int nbUn;
    char op;
    int nbDeux;

    printf("Veuiller saisir le premier nombre : ");
    scanf("%d", &nbUn);

    printf("Veuiller saisir un opérateur : ");
    scanf(" %c", &op);

    printf("Veuiller saisir le deuxième nombre : ");
    scanf("%d", &nbDeux);

    // printf("%d\n", op);

    if (op != 42 && op != 43 && op != 45 && op != 47)
    {
        printf("Opérateur invalide\n");
    }
    else
    {
        if (op == 43)
        {
            printf("%d %c %d = %d\n", nbUn, op, nbDeux, nbUn+nbDeux);
        }
        else if (op == 45)
        {
            printf("%d %c %d = %d\n", nbUn, op, nbDeux, nbUn-nbDeux);
        }
        else if (op == 42)
        {
            printf("%d %c %d = %d\n", nbUn, op, nbDeux, nbUn*nbDeux);
        }
        else
        {
            if (nbDeux == 0)
            {
                printf("Division par 0 impossible\n");
            }
            else
            {
                printf("%d %c %d = %.2f\n", nbUn, op, nbDeux, (float)nbUn/(float)nbDeux);
            }
        }
    }
    return 0;
}
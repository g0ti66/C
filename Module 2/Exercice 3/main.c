#include <stdio.h>

int main()
{

    int x;
    int y;
    int z;

    printf("Entrez le premier entier : ");
    scanf("%d", &x);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &y);

    printf("Entrez le troisième entier : ");
    scanf("%d", &z);

    printf("\n");

    printf("La somme des trois entiers est %d\n", x + y + z);

    // Conversion des etiers en flottant
    printf("La somme des trois entiers est %.2f\n", ((float)x + (float)y + (float)z) / 3);

    return 0;
}
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

    printf("La somme des trois entier est %d\n", x + y + z);

    return 0;
}
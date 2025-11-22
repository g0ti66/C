#include <stdio.h>

int main()
{
    int longueur;
    int largeur;

    printf("Longueur du rectangle : ");
    scanf("%d", &longueur);

    printf("Largeur du rectangle : ");
    scanf("%d", &largeur);

    printf("\n");

    printf("Périmètre du rectangle : %d\n", (longueur * largeur) * 2);

    printf("Surface du rectangle : %d\n", longueur * largeur);

    return 0;
}
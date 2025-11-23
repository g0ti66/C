#define _USE_MATH_DEFINES // Activer les constantes mathématiques
#include <stdio.h>
#include <math.h> // Pour faire des maths

int main()
{
    // Cercle
    int rayon;

    printf("Entrez le rayon du cercle en centimètres : ");
    scanf("%d", &rayon);

    printf("\n");

    printf("Circonférence du cercle : %.2fcm\n", (float)rayon * 2 * M_PI);

    printf("Aire du cercle : %.2fcm²\n", M_PI * pow(rayon, 2));

    printf("\n");

    // Cylindre
    int hauteur;

    printf("Entrez la hauteur du cylindre en centimètres : ");
    scanf("%d", &hauteur);

    printf("\n");

    printf("Volume du cylindre : %.2fcm³\n", M_PI * pow(rayon, 2) * hauteur);

    return 0;
}
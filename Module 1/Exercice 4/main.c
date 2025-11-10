#include <stdio.h>

int main()
{
    int age;
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    float taille;
    printf("Entrez votre taille (en mètres) : ");
    scanf("%f", &taille);

    char initialUn;
    char initialDeux;
    printf("Entrez vos initiales : ");
    // Espace important au moment du char
    scanf(" %c %c", &initialUn, &initialDeux);

    printf("Vous avez %d ans et vous mesurez %.2fm.\n", age, taille);
    printf("Vos initiales sont %c.%c", initialUn, initialDeux);

    return 0;
}
#include <stdio.h>

int main() {

    char number[20];  // Tableau pour stocker le nombre
    int flag = 0;     // Pour voir si un décimal est trouver (0 = not found, 1 = found)
    int i;            // Permettra de parcourir le caractère

    printf("Enter a number: ");
    scanf("%s", number);

    // Regarder chaque caractère pour voir si il est en décimal
    for(i = 0; number[i] != '\0'; i++) {
        if(number[i] == '.') {
            flag = 1;
            break;
        }
    }

    // Affichage du résultat selon le flag
    if(flag) {
        printf("Le nombre est un flottant.\n");
    } else {
        printf("Le nombre est un entier.\n");
    }

    return 0;

    // https://labex.io/fr/tutorials/c-determine-integer-or-float-in-c-123267
}
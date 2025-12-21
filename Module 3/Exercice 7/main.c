#include <stdio.h>

int main() {
    
    float nb;

    printf("Veuillez rentrer un nb flottant : ");
    scanf("%f", &nb);

    int entier = (int)nb;

    if (nb != entier) {
        printf("Ce nombre est un flottant\n");
    } else {
        printf("Ce nombre est un entier\n");
    }

    return 0;
}
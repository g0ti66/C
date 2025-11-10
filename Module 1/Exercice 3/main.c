#include <stdio.h>

int main()
{
    short monShort = 3;
    printf("La valeur de mon short est %d et fait %d octets.\n", monShort, sizeof(monShort));

    int monInt = -19;
    printf("La valeur de mon int est %d et fait %d octets.\n", monInt, sizeof(monInt));

    long monLong = 4582;
    printf("La valeur de mon short est %d est fait %d octets.\n", monLong, sizeof(monLong));

    float monFloat = 5.84;
    printf("La valeur de mon float est %f et fait %d octets.\n", monFloat, sizeof(monFloat));
    printf("Affiche des deux chiffre après la virgule : %.2f.\n", monFloat);

    double monDouble = 58.45;
    printf("La valeur de mon doucle est %lf et fait %d octets.\n", monDouble, sizeof(monDouble));

    char monChar = 'P';
    printf("La valeur de mon char est %c et fait %d octets.\n", monChar, sizeof(monChar));

    return 0;
}
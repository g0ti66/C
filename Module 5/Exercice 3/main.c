#include <stdio.h>

int main()
{
    char prenom = 'A', nom = 'Z';

    char* p_prenom = &prenom;
    char* p_nom = &nom;

    printf("Vos initiales %c.%c\n", prenom, nom);

    // Inversion
    char tmp = *p_prenom;
    *p_prenom = *p_nom;
    *p_nom = tmp;

    printf("Vos initial %c.%c\n", prenom, nom);

    return 0;
}
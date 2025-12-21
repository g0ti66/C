#include <stdio.h>
#include <math.h>

int main() 
{
    int nb;

    printf("Veuiller rentrer un nombre: ");
    scanf("%d", &nb);

    float racine = sqrtf(nb);

    int carre_parfait = (int)racine;

    if (carre_parfait == racine)
    {
        printf("C'est un carré parfait : %dx%d", carre_parfait, carre_parfait);
    }
    else
    {
        printf("Ce n'est pas un carré parfait");
    }

    return 0;
}
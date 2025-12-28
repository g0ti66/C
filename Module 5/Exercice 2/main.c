#include <stdio.h>

int main()
{
    int nb;
    int* p_nb = &nb;

    printf("Entrez un nombre : ");
    scanf("%d", p_nb);

    printf("Valeur : %d\n", *p_nb);
    printf("Adresse : %p\n", p_nb);

    return 0;
}
#include <stdio.h>

int main()
{
    int nb;

    printf("Veuiller entrer un nombre entre 3 et 10 : ");
    scanf("%d", &nb);

    while (nb < 3 || nb > 10)
    {
        printf("Erreur, veuiller entrer un nombre entre 3 et 10 : ");
        scanf("%d", &nb);
    }

    printf("\n");

    for (int i = 1; i <= nb*2; i+=2)
    {
        for (int j = nb*2-1; j > i; j-=2)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int nb;

    printf("Veuiller saisir un nombre : ");
    scanf("%d", &nb);

    while (nb > 0)
    {
        printf("%d\n", nb);
        nb--;
    }

    printf("BOOM!\n");

    return 0;
    
}
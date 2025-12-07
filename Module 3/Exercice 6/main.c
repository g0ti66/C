#include <stdio.h>

int main()
{
    int nb;

    printf("Veuillez entrer un nombre entier : ");
    scanf("%d", &nb);

    if (nb % 2 == 0)
    {
        printf("%d est pair !\n", nb);
    }
    else
    {
        printf("%d est impair !\n", nb);
    }

    return 0;
}
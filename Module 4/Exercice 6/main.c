#include <stdio.h>

int main()
{
    int nb;

    printf("Veuillez saisir un nombre : ");
    scanf("%d", &nb);

    for (int i = 0; i <= nb; i++)
    {
        printf("Table de %d :\n", i);

        for (int j = 0; j <= 10; j++)
        {
            int res = i * j;
            printf("\t%d x %d = %d\n", i, j, res);
        }
    }

    return 0;
}
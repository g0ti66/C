#include <stdio.h>
#include <math.h>

int main()
{
    int nb;

    printf("Veuiller rentrer un nombre : ");
    scanf("%d", &nb);

    for (int i = 0; i <= nb; i++)
    {
        printf("cos(%d) = %.2f\n", i, cos(i));
        if (i % 2 == 0)
        {
            printf("sin(%d) = %.2f\n", i, sin(i));
        }
    }

    return 0;
}
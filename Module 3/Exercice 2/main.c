#include <stdio.h>

int main()
{
    int nb;
    

    printf("Veuillez entrer un nombre (entre 0 et 999 999 999) : ");
    scanf("%d", &nb);

    int unite = nb % 10;
    int dizaine = nb / 10 % 10;
    int centaine = nb / 100 % 10;
    int millier = nb / 1000 % 10;
    int d_millier = nb / 10000 % 10;
    int c_millier = nb / 100000 % 10;
    int millions = nb / 1000000 % 10;
    int d_millions = nb / 10000000 % 10;
    int c_millions = nb / 100000000 % 10;

    if (nb < 0)
    {
        printf("Nombre trop petit");
    }
    else if (nb <= 9)
    {
        printf("%d\n", unite);
    }
    else if (nb <= 99)
    {
        printf("%d%d", dizaine, unite);
    }
    else if (nb <= 999)
    {
        printf("%d%d%d", centaine, dizaine, unite);
    }
    else if (nb <= 9999)
    {
        printf("%d %d%d%d", millier, centaine, dizaine, unite);
    }
    else if (nb <= 99999)
    {
        printf("%d%d %d%d%d", d_millier, millier, centaine, dizaine, unite);
    }
    else if (nb <= 999999)
    {
        printf("%d%d%d %d%d%d",c_millier, d_millier, millier, centaine, dizaine, unite);
    }
    else if (nb <= 9999999)
    {
        printf("%d %d%d%d %d%d%d",millions, c_millier, d_millier, millier, centaine, dizaine, unite);
    }
    else if (nb <= 99999999)
    {
        printf("%d%d %d%d%d %d%d%d",d_millions, millions, c_millier, d_millier, millier, centaine, dizaine, unite);
    }
    else if (nb <= 999999999)
    {
        printf("%d%d%d %d%d%d %d%d%d",c_millions, d_millions, millions, c_millier, d_millier, millier, centaine, dizaine, unite);
    }
    else
    {
        printf("Nombre trop grand");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int x = 18;
    int y = 123;

    printf("Avant permutation :\n");
    printf("Variable 1 : %d\n", x);
    printf("Variable 2 : %d\n", y);

    printf("\n");

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Après permutation :\n");
    printf("Variable 1 : %d\n", x);
    printf("Variable 2 : %d\n", y);

    return 0;
}
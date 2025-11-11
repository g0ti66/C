#include <stdio.h>

int main()
{
    char lettre;
    printf("Entrez une lettre : ");
    scanf("%c", &lettre);

    printf("Lettre : %c.\n", lettre);
    printf("%d en déciaml.\n", lettre);
    printf("%x en hexadécimal.\n", lettre);

    return 0;
}
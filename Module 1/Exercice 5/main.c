#include <stdio.h>

int main()
{
    char lettre;
    printf("Entrez une lettre : ");
    scanf("%c", &lettre);

    // é = 130 en ASCII
    printf("Lettre : %c.\n", lettre);
    printf("%d en d%ccimal.\n", lettre, 130);
    printf("%x en hexad%ccimal.\n", lettre, 130);

    return 0;
}
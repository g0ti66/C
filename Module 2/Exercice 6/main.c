#include <stdio.h>
#include <ctype.h>

int main()
{
    char lettre;

    printf("Entrer une lettre en minuscule : ");
    scanf("%c", &lettre);

    printf("Conversion en majucule : %c\n", toupper(lettre));

    return 0;
}
#include <stdio.h>

int main(){

    char ch;
    printf("Veuillez saisir un caractères : ");
    scanf("%c", &ch);
    printf("Conversion ASCII en décimal : %d\n", ch);

    if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        printf("Caractère spécial\n");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("Lettre majuscule\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Lettre minuscule\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Chiffre\n");
    }
    else
    {
        printf("Caractère non reconnu\n");
    }
    return 0;
} 
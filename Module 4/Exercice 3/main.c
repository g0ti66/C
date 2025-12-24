#include <stdio.h>

int main()
{
    int pin = 1234;
    int saisieUser;

    printf("Veuillez rentrer le code PIN : ");
    scanf("%d", &saisieUser);

    for (int i = 2; i >= 1; i--)
    {
        if (saisieUser == pin)
        {
            break;
        }

        printf("Erreur, il vous reste %d tentative(s) : ", i);
        scanf("%d", &saisieUser);
        
    }
    
    if (saisieUser == pin)
    {
        printf("T%cl%cphone d%cverouill%c !\n", 130, 130, 130, 130);
    }
    else
    {
        printf("T%cl%cphone bloqu%c !\n", 130, 130, 130);
    }
    return 0;
}
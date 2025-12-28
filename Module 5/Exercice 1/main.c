#include <stdio.h>

int main()
{
    char ch = 'A';
    char* p_ch = &ch;

    printf("Contenu : %c\n", *p_ch);
    printf("Taille : %d octet(s)\n", sizeof(ch));
    printf("Adresse : %p\n", p_ch);

    return 0;
}
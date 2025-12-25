#include <stdio.h>

int main()
{
    printf("Hex\tDec\tChar\n");
    printf("---\t--\t---\n");

    for (int i = 32; i <= 126; i++)
    {
        printf("0x%x\t%d\t%c\n", i, i, i);
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=0, conta = 0;
    while(n != -1)
    {
        printf("Inserisca un numero> ");
        scanf("%d", &n);
        if(n != -1)
        {
            printf("Bene...\n");
        }
        conta++;
    }
    printf("Programma fermato..., %d inserimenti contando solo i numeri validi", conta-1);
    return 0;
}
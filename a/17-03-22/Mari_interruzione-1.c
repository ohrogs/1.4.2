#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n=0;
    while(n != -1)
    {
        printf("Inserisca un numero> ");
        scanf("%d", &n);
        if(n != -1)
        {
            printf("Bene...\n");
        }
    }
    printf("Programma fermato...");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i=0;
    printf("Inserisca quante volte stampare il nome> ");
    scanf("%d", &n);
    while(i < n)
    {
        printf("Lorenzo\t");
        if(n > 3 && i+1 == n/2)
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}
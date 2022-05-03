#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prec=1, prec2=1, n, aux,conta=1;
    do
    {
        printf("inserisca un numero positivo>");
        scanf("%d", &n);
    } while (n<=0);
    
    if(n == 1 || n == 2)
    {
        printf("il numero desiderato e' 1");
        return 0;
    }

    while(conta < n-1)
    {
        conta++;
        aux = prec + prec2;
        prec2 = prec;
        prec = aux;
    }
    printf("Il numero desiderato e' %d", aux);
    return 0;
}

//! 1 1 2 3 5 8 13 21 34
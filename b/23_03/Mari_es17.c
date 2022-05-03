#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *portafogli
int main(void)
{
    float  bud, pr;
    printf("Inserisca quanti soldi ha nel portafogli>");
    scanf("%f", &bud);
    while(bud < 0.0)
    {
        printf("Inserisca un numero valido>");
        scanf("%.2f", &bud);        
    }
    printf("Inserisca il prezzo del prodotto>");
    scanf("%f", &pr);
    while(pr < 0.0)
    {
        printf("Inserisca un numero valido>");
        scanf("%.2f", &pr);        
    }
    if (pr > bud)
    { 
        printf("Non puo' acquistare il prodotto\n");
    }
    else
    {
        printf("dopo il prodotto rimarrebbero %.2f euro\n", bud - pr);
    }    
    return 0;
}
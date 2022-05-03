#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float prezzo, prov;
    printf("Inserisca il prezzo> ");
    scanf("%f", &prezzo);
    prov = prezzo*(15.0/100.0);
    if(prov < 5)
    {
        prov = 5;
    }
    printf("La provvigione e' %.2feuro\nIl prezzo totale del biglietto e' %.2feuro ", prov, prezzo+prov);
    return 0;
}
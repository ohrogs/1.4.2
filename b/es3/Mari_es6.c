#include <stdio.h>
#include <stdlib.h>
//16 06 22
//triangolo
int main(void)
{
    float lun, lar, h, A, V;
    printf("Inserisca lunghezza>");
    scanf("%f", &lun);
    if(lun <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca larghezza>");
    scanf("%f", &lar);
    if(lar <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca altezza del triangolo>");
    scanf("%f", &h);
    if(h <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    V = ((lun*lar)/(float)2)*h;
    printf("lunghezza del triangolo = %f\nlarghezza del triangolo = %f\naltezza del triangolo = %f\nvolume = %f\n", lun, lar, h, V);
    return 0;
}
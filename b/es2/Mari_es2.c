#include <stdio.h>
#include <stdlib.h>
//16 06 22
//rettangolo
int main(void)
{
    float b, h, larghezza, V;
    printf("Inserisca base>");
    scanf("%f", &b);
    if(b <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca altezza>");
    scanf("%f", &h);
    if(h <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca larghezza>");
    scanf("%f", &larghezza);
    if(larghezza <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    V = h*b*larghezza;
    printf("base = %f\naltezza = %f\nlarghezza = %f\nvolume = %f\n", b, h, larghezza, V);
    return 0;
}
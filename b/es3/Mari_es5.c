#include <stdio.h>
#include <stdlib.h>
const float pi = 3.14;
//16 06 22
//cilindro
int main(void)
{
    float r, h, V;
    printf("Inserisca raggio>");
    scanf("%f", &r);
    if(r <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca altezza del cilindro>");
    scanf("%f", &h);
    if(h <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    V = (pi*(r*r))*h;
    printf("raggio della base del cilindro = %f\naltezza del cilindo = %f\nvolume = %f\n", r, h, V);
    return 0;
}
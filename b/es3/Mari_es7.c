#include <stdio.h>
#include <stdlib.h>
//16 06 22
//kmh a ms
int main(void)
{
    float v;
    printf("inserisca la velocita'>");
    scanf("%f", &v);
    if(v == 0)
    {
        printf("L'oggetto e' immobile");
        return 0;
    }
    else if(v < 0)
    {
        printf("Ha inserito un dato invalido");
        return 0;
    }
    else
    {
        v = (v*1000.0)/(60.0*60.0);
    }
    printf("sarebbero %.2fm/s", v);
}
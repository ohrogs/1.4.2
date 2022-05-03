#include <stdio.h>
#include <stdlib.h>
//16 06 22
//BMI
int main(void)
{
    float peso, h, BMI;
    printf("inserisca il peso>");
    scanf("%f", &peso);
    if(peso <= 0)
    {
        printf("Ha inserito un dato invalido");
        return 0;
    }
    printf("inserisca l'altezza in metri>");
    scanf("%f", &h);
    if(h <= 0)
    {
        printf("Ha inserito un dato invalido");
        return 0;
    }
    BMI = (peso)/(h*h);
    printf("BMI =  %.2f", BMI);
}
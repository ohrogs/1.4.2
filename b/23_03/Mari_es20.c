#include <stdio.h>
#include <stdlib.h>
//23 03 22
//BMI
int main(void)
{
    float peso, h, BMI;
    int check = 1;
    while (check == 1)
    {
        printf("inserisca il peso>");
        scanf("%f", &peso);
        while(peso <= 0)
        {
            printf("inserisca un numero valido>");
            scanf("%f", &peso);
        }
        printf("inserisca l'altezza in metri>");
        scanf("%f", &h);
        while(h <= 0)
        {
            printf("inserisca un numero valido>");
            scanf("%f", &h);
        }
        BMI = (peso)/(h*h);
        printf("BMI =  %.2f\n", BMI);
        if(BMI <= 18.5)
        {
            printf("Lei e' sottopeso\n");
        }
        else if (BMI > 18.5 && BMI <= 25)
        {
            printf("Lei e' normopeso\n");
        }
        else if (BMI > 25 && BMI <= 30)
        {
            printf("Lei e' sovrappeso\n");
        }
        else if (BMI > 30 && BMI <= 40)
        {
            printf("Lei e' obeso\n");
        }
        else
        {
            printf("Lei e' obeso grave\n");
        }
        printf("Continuare? (1 si altro no)");
        scanf("%d", &check);
    }  
}
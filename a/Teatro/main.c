#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somma, eta;
    printf("Inserire eta persona 1 >");
    scanf("%d", &eta);
    if(eta < 0)
    {
        printf("Inserita eta' non valida\nchiusura programma...");
        return 0;
    }
    else if(eta < 12)
    {
        somma = 5;
    }
    else if(eta > 60)
    {
        somma = 15;
    }
    else
    {
        somma = 25;
    }
    printf("Inserire eta persona 2 >");
    scanf("%d", &eta);
    if(eta < 0)
    {
        printf("Inserita eta' non valida\nchiusura programma...");
        return 0;
    }
    else if(eta < 12)
    {
        somma += 5;
    }
    else if(eta > 60)
    {
        somma += 15;
    }
    else
    {
        somma += 25;
    }
    printf("Inserire eta persona 3 >");
    scanf("%d", &eta);
    if(eta < 0)
    {
        printf("Inserita eta' non valida\nchiusura programma...");
        return 0;
    }
    else if(eta < 12)
    {
        somma += 5;
    }
    else if(eta > 60)
    {
        somma += 15;
    }
    else
    {
        somma += 25;
    }
    printf("Il costo totale e' = a %d", somma);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//!incluso solamente per implementare un controllo automatico a fine programma
//*Programma che calcola la potenza di una base b e un esponete e positivi
int main()
{
    int exp, auxExp;
    float b, aux;
    printf("Inserisca la base>");
    scanf("%f", &b);
    while(b<=0)
    {
        printf("Per favore inserisca un numero positivo>");
        scanf("%f", &b);
    }
    aux = b;
    printf("Inserisca l'esponente>");
    scanf("%d", &exp);
    while(exp == 0)
    {
        printf("Per favore inserisca un diversp da 0>");
        scanf("%d", &exp);
    }

    if(exp < 0)//calcolo valore assoluto dell'esponente
    {
        auxExp = -exp;
    }
    else
    {
        auxExp = exp;
    }

    for(int i=1; i < auxExp; i++)
    {
        aux*=b;
    }

    if(exp<0)
    {        
        printf("%.2f^%d = %.2f\n", b, exp, 1.0/aux);
    }
    else
    {
        printf("%.2f^%d = %.2f\n", b, exp, aux);
    }

    if(pow(b, exp) == (double)aux)//!controllo automatico
    {
        printf("Risulato corretto");
    }
    else if(pow(b, exp) == (double)(1.0/aux))
    {
        printf("Risulato corretto");        
    }
    else
    {
        printf("C'e un problema, %f != %f", 1.0/aux, pow(b,exp));
    }
}
#include "input.h"

void stampa1(int);

int main()
{
    int n=getInt("Inserisca un numero positivo> ");
    stampa1(n);

}

void stampa1(int x)
{
    int numero_inv=0, og=x;

    while(x > 0){

        numero_inv *= 10;
        numero_inv += x % 10;
        x /= 10;
    }
    printf("%d=", og);
    while(numero_inv>0)
    {
        for (int i = numero_inv%10; i > 0; i--)
        {
            printf("1");
        }
        numero_inv/=10;
        printf("+");     
    }
    printf("0");
} 
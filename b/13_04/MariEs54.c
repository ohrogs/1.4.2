#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int loop();
int getInt();
int sommaPrec(int);

int main()
{
    int n;
    system("chcp 65001");
    do
    {
        n=loop();
    } while (n != 0);
    
}

int loop()
{
    int n=getInt();
    if(n==0)
        return 0;
    printf("la somma di tutti i precedenti di %d é %d\n", n, sommaPrec(n));
    return 1;
    
    
}

int sommaPrec(int lim)
{
    int conta=0;
    for (int i=1; i<=lim; i++)
    {
        conta+=i;
    }
    return conta;
}

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(0 per concludere)> ");
        scanf("%d", &n);
    } while (n<0);
    
    return n;
}
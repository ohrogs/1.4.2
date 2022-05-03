#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int loop();
int getInt();
long long unsigned int molPrec(int);

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
    printf("la moltiplicazione di tutti i precedenti di %d é %llu\n", n, molPrec(n));
    return 1;
    
    
}

long long unsigned int molPrec(int lim)
{
    long long unsigned int conta=1;
    for (long long unsigned int i=1; i<=lim; i++)
    {
        conta*=i;
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
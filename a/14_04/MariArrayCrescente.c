#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 20
bool loop();
int getInt();
int getIntStd();

int main()
{
    system("chcp 65001");
    bool n;
    do
    {
        n=loop();
    } while (n);
    return 0;
}

bool loop()
{
    int n=getInt(), v[DIM];
    bool crescente=true;
    if (n==0)
        return false;
    for(int i = 0; i < n; i++)
    {
        v[i]=getIntStd();
    }
    for(int i = 0; i < n; i++)
        printf("%d\t", v[i]);
    printf("\n");
    for (int i = 1; i < n && crescente; i++)
    {
        if(v[i]<=v[i-1])
            crescente=false;   
    }
    if (crescente)
        printf("La funzione é crescente\n");
    else
        printf("La funzione non é crescente\n");
    return true;
}

int getIntStd()
{
    int n;
    printf("Inserisca un valore intero> ");
    scanf("%d", &n);
    return n;
}

int getInt()
{
    int n;
    do
    {
        printf("Inserisca un valore intero(0 per uscire)> ");
        scanf("%d", &n);
    } while (n<0||n>20);
    return n;
}
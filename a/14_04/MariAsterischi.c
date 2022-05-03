#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 5
bool loop();
int getInt();

int main()
{
    //system("chcp 65001");
    bool n;
    do
    {
        n=loop();
    } while (n);
    return 0;
}

bool loop()
{
    int v[DIM];
    bool crescente=true;
    for(int i = 0; i < DIM; i++)
    {
        v[i]=getInt();
        if(v[i]==0)
            return false;
    }
    for(int i = 0; i < DIM; i++)
    {
        printf("Elemento %d: %d ", i+1, v[i]);
        for(int j = 0; j < v[i]; j++)
            printf("*");
        printf("\n");
    }
    return true;
}

int getInt()
{
    int n;
    do
    {
        printf("Inserisca un valore intero(0 per uscire)> ");
        scanf("%d", &n);
    } while (n<0);
    return n;
}
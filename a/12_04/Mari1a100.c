#include <stdio.h>
#include <stdlib.h>

#define DIM 100

void create(int []);

int main()
{
    int v[DIM];
    create(v);
    for(int i=0; i<DIM; i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}

void create(int v[])
{
    for(int i=0; i<DIM; i++)
    {
        v[i]=i+1;
    }
}

/*Se passo v a una funzione, con v vettore:

gli passo la posizione della memoria della prima cella poi fa lui coi bit i conti

fare funct(v) == funct(&v(0))

void funct(int []) == void funct(int&)*/

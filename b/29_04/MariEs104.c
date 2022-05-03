#include "input.h"
#include "caratteri.h"
#include "matematiche.h"
#include "array.h"
#include <time.h>

#define DIM 100

void popArray(int[], int);
void stampArray(int[], int);


int main()
{
    int v[DIM];
    popArray(v, DIM);
    int i = basicSearch(v, DIM, getInt("Inserisca un numero da ricercare>"));
    if(i>-1)
        printf("trovato v[%d] = %d\n", i, v[i]);
    else
        printf("non trovato\n");
    stampArray(v, DIM);        
    
}

void popArray(int v[], int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++)
    {
        v[i]=1+rand()%100;
    }
}

void stampArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");    
}
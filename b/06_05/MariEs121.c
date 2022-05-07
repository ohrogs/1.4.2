#include "input.h"
#include "matematiche.h"
#include"array.h"
#include <time.h>

#define DIM 10

void popArray(int [], int);
void popArray2(int [], int [], int);
void printArray(int [], int);


int main()
{
    int v[DIM], compatto[DIM];
    srand(time(NULL));
    popArray(v, DIM);
    popArray2(compatto, v, DIM);
    printArray(v, DIM);
    printArray(compatto, DIM);      
}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=1+rand()%100;
    }   
}

void popArray2(int compattare[], int og[],int dim)
{
    for(int i = 0; i < dim; i++)
    {
        compattare[i]=0;
        if(!IntIsIn(compattare, og[i], i+1))
            compattare[i] = og[i];
    }
}

void printArray(int v[], int dim)
{
    printf("v[%d] = {", dim);
    for (int i = 0 ; i < dim; i++)
    {
        printf("%d", v[i]);
        if(i!=dim-1)
            printf(", ");
    }
    printf("}\n");   
}
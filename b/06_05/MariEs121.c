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
    popArray(v, DIM);
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

void popArray2(int v[], int og[],int dim)
{
      
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
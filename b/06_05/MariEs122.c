#include "input.h"
#include "matematiche.h"
#include"array.h"
#include <time.h>

#define DIM 10

void popArray(int [], int);
void azzerArray(int [], int);
void printArray(int [], int);
void occorrenze(int [], int);


int main()
{
    int v[DIM];
    srand(time(NULL));
    popArray(v, DIM);
    printArray(v, DIM);
    occorrenze(v, DIM);  
}

void occorrenze(int v[], int dim)
{
    int registro[20];
    azzerArray(registro, 20);
    for (int i = 0; i < dim; i++)
    {
        registro[v[i]]++;
    }
    for (int i = 0; i < 20; i++)
    {
        if(registro[i]>0)
            printf("%d => %d\n", i, registro[i]);
    }
    
}

void azzerArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=0;
    }
}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=1+rand()%20;
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
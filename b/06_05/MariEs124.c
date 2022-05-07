#include "input.h"
#include "matematiche.h"
#include"array.h"

#define DIM 10

void popArray(int [], int);
void printArray(int [], int);
void inverti(int [], int);


int main()
{
    int v[DIM];
    popArray(v, DIM);
    printArray(v, DIM);
    inverti(v, DIM);
    printArray(v, DIM);  
}

void inverti(int v[], int dim)
{
    for (int i = 0; i <= dim/2; i++)
    {
        int aux = v[i];
        v[i]=v[(dim-1)-i];
        v[(dim-1)-i] = aux;
    }
    
}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=i+1;
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
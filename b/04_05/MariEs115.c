#include "input.h"
#include "array.h"
#define DIM 3

void popArray(int[], int);

int main()
{
    int v[DIM];
    popArray(v, DIM);
    printf("La %d - %d = %d", v[IntMaxArray(v,DIM)], v[IntMinArray(v,DIM)], v[IntMaxArray(v,DIM)] - v[IntMinArray(v,DIM)]);
}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=getIntStd("Inserire un numero>");
    }
    
}
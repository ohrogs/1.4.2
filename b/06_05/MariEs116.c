#include "input.h"
#include "array.h"
#include <time.h>
#define DIM 30

void popArray(int[], int[], int);
void printArray(int [], int);

int main()
{
    int v1[DIM], v2[DIM], conta;
    srand(time(NULL));
    popArray(v1, v2, DIM);
    printf("V1 e V2 sono stati uguali in %d occasioni\n", IntUguaglianzaParallela(v1, v2, DIM));
    printArray(v1, DIM);
    printArray(v2, DIM);
}

void popArray(int v1[], int v2[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v1[i]=1+rand()%20;
        v2[i]=1+rand()%20;
    }
}

void printArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        printf("%-3d\t", v[i]);
    }
    printf("\n");
    
}
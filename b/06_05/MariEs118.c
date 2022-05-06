#include "input.h"
#include <math.h>
#define DIM 8

void printArray(bool [], int);
void conversione(bool [], int, int);
void azzerArray(bool [], int);

int main()
{
    int n;
    do
    {
        n=getIntStd("Inserire un numero>");
    } while (n>(int)pow(2,8)-1);
    
    bool array[DIM];
    azzerArray(array, DIM);
    conversione(array, n, DIM);
    printArray(array, DIM);        
}

void conversione(bool v[], int n, int dim)
{
    for(int i = dim-1; i>=0; i--)
    {
        v[i] = !(n%2==0);
        n/=2;
    }
}

void azzerArray(bool v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=false;
    }
}

void printArray(bool v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if(v[i])
            printf("1");
        else
            printf("0");
    }
    
    
}
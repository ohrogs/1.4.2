#include "input.h"
#include "matematiche.h"
#include <time.h>

#define DIM 8

void popArray(bool [], int);
void printArray(bool [], int);
int conversione(bool [], int);
void exec();

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        exec();
    }
              
}

void exec()
{
    bool array[DIM];
    popArray(array, DIM);
    printArray(array, DIM);
    printf(" => %d\n", conversione(array, DIM)); 
}

void popArray(bool array[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        array[i]=(bool)(rand()%2);
    }
    
}

int conversione(bool v[], int dim)
{
    int sum=0;
    for (int i = dim-1; i >= 0; i--)
    {
        if(v[i])
        {
            sum+=intElevation(2, i);
        }
    }
    return sum;        
}

void printArray(bool v[], int dim)
{
    for (int i = dim -1 ; i >=0; i--)
    {
        if(v[i])
            printf("1");
        else
            printf("0");
    }   
}
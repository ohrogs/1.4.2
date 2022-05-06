#include "input.h"
#include "matematiche.h"
#include <time.h>

#define DIM 5

void popArray(int [], int);
void printArray(int [], int);
bool IntIsIn(int [], int, int);

int main()
{
    int v[DIM];
    popArray(v, DIM);
    printArray(v, DIM);                  
}

bool IntIsIn(int v[], int x, int dim)
{
    if (dim==0)
        return false;
    for (int i = 0; i <= dim; i++)
    {
        if(v[i]==x)
            return true;
    }
    return false;    
}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        int n;       
        do
        {
            n=getIntStd("Inserire un nuovo numero>");
        } while (IntIsIn(v, n, i));
        v[i]=n;
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
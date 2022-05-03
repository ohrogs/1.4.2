#include "input.h"
#include "caratteri.h"
#include "matematiche.h"
#include "array.h"
#include <time.h>

#define DIM 10

void popArray(int[], int);
void stampArray(int[], int);


int main()
{
    int v[DIM];
    popArray(v, DIM);
    stampArray(v, DIM);
    int max=IntMaxArray(v, DIM), min=IntMinArray(v, DIM);
    printf("Media = %f\n", IntMediArray(v, DIM));
    printf("Max = v[%d] = %d\n", max, v[max]);
    printf("Min = v[%d] = %d\n", min, v[min]);

}

void popArray(int v[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        v[i]=getInt("Inserire un numero intero> ");
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
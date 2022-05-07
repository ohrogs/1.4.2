#include "input.h"
#include "matematiche.h"
#include"array.h"
#include <time.h>

#define DIM 10



int main()
{
    int v[DIM][DIM], sum;
    srand(time(NULL));
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            v[i][j]=1+rand()%100;
        }
    }  
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < DIM; i++)
    {
        sum=0;
        for (int j = 0; j < DIM; j++)
        {
            sum+=v[i][j];
        }
        printf("riga %d somma = %d\n", i+1, sum);
    }  
}


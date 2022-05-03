#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DIM 50

bool isEven(int);

int main()
{
    int v[DIM], contaEven=0;
    srand(time(NULL));
    for(int i=0; i<DIM; i++)
    {
        v[i] = 1 + rand()%200;
        if(isEven(v[i]))
            contaEven++; 
    }

    for(int i=0; i<DIM; i++)
    {
        if(isEven(v[i]))
            contaEven++; 
    }
    printf("Ci sono %d pari\n", contaEven);
    for(int i=0; i<DIM; i++)
    {
        printf("%d\t", v[i]); 
    }

    return 0;
}

bool isEven(int x)
{
    return x%2==0;
}
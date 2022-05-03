#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DIM 50

bool isEven(int);

int main()
{
    int v[DIM], pari[DIM];
    for(int i=0; i<DIM; i++)
    {
        pari[i]=0;
    }
    srand(time(NULL));
    for(int i=0; i<DIM; i++)
    {
        v[i] = 1 + rand()%200;
    }

    for(int i=0; i<DIM; i++)
    {
        if(isEven(v[i]))
        {
            int contaPos=0;
            while(pari[contaPos]!=0)
            {
                contaPos++;
            }
            pari[contaPos]=v[i];
        } 
    }
    printf("Stampa array intero:\n");
    for(int i=0; i<DIM; i++)
    {
        printf("%d\t", v[i]); 
    }
    printf("\nStampa array dei pari:\n");
    int contaPos = 0;
    while (pari[contaPos]!=0)
    {
        contaPos++;
    }
    for(int i=0; i<contaPos; i++)
    {
        printf("%d\t", pari[i]);
    }
    
    return 0;
}

bool isEven(int x)
{
    return x%2==0;
}
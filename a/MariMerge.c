#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define DIM 7
#define RAND 15

int main()
{
    int v[DIM], v2[DIM], merge[DIM+DIM], contaDim=0, i=0, j=0, k=0;
    srand(time(NULL));
    v[0]=rand()%RAND;
    v2[0]=rand()%RAND;
    for(int i = 1; i < DIM; i++)//riempio i vettori
    {
        int n;
        do
        {
            n=rand()%RAND;
        } while (n<v[i-1]);
        v[i]=n;
        do
        {
            n=rand()%RAND;
        } while (n<v2[i-1]);
        v2[i]=n;
    }
    for(int i = 0; i < DIM; i++)//stampo il primo vettore
    {
        printf("v[%d] = %d\t", i, v[i]);
    }
    printf("\n");
    for(int i = 0; i < DIM; i++)//stampo il secondo vettore
    {
        printf("v[%d] = %d\t", i, v2[i]);
    }
    printf("\n");
    
    for(k = 0; i<DIM && j<DIM; k++)
    {
        if(v[i]<=v2[j]) //inserisco il piú piccolo dentro il vettore merge
        {
            merge[k] = v[i];
            i++;
        }
        else
        {
            merge[k] = v2[j];
            j++;            
        }
    }

    if (i==DIM) //a seconda di quale indice si sia fermato per primo finisco il vettore con l'altro
    {
        while(j<DIM)
        {
            merge[k]=v2[j];
            k++;j++;
        }
    }
    else
    {
        while(i<DIM)
        {
            merge[k]=v[i];
            k++;i++;
        }        
    }
    

    for(int c = 0; c < k; c++)//stampo l'intersezione vettore
    {
        printf("merge[%d] = %d\t", c, merge[c]);
    }

    //printf("\nStampa di prova di v[contaZ+1]: %d\n", v[contaZ+1]); //stampa didattica
    return 0;
}
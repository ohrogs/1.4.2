#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
no non viene generato un ciclo infito
L'output del programma sará:
    x=0, y=0 perché ad x viene assegnato il valore di y, essendo quest'ultimo 0 la condizione é falsa e non si procede col ciclo 
*/
int main()
{
    int X = 0, Y = 0;
    while (X=Y)
    {
        X = X+1;
    }
    printf("x=%d, y=%d", X, Y);
    return 0;
}
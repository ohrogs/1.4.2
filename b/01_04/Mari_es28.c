#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
no non viene generato un ciclo infito
L'output del programma sará:
    7
    8    
*/
int main()
{
    int A = 3, B = 1;
    while (A>B)
    {
        A = A + B;
        B = A + B - 2;
    }

    return 0;
}
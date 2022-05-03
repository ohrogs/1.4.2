#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
no non viene generato un ciclo infito
L'output del programma sará:
    x = 99, y=99
perché il ciclo for itera finché y<99, quindi quando y = 99 si esce dal for, linearmente con y aumenta anche x.
*/
int main()
{
    int x = 0, y;
    for(y = 0; y < 99; y++)
    {
        x++;
    }
    printf("x=%d, y=%d", x, y);
    return 0;
}
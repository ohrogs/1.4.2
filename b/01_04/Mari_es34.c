#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
k vale 13 perché il ciclo si protrae finché j>=2 quindi si itera 6 volte su k che incrementa di 1 ogni volta.

*/
int main()
{
    int j, k = 7;
    for(j = 7; j>=2; j--)
    {
        k++;
    }
    
    printf("la variabile k vale=%d", k);
    return 0;
}
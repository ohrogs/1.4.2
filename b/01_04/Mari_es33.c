#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
k vale 12 perché il ciclo si protrae finché j>2 quindi si itera 5 volte su k che incrementa di 1 ogni volta.

*/
int main()
{
    int j = 7, k = 7;
    while (j > 2)
    {
        j--;
        k++;
    }
    
    printf("la variabile k vale=%d", k);
    return 0;
}
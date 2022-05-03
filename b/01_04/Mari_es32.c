#include <stdlib.h>
#include <stdio.h>
//#include <math.h>

/*
La risposta corretta é 8 perché il ciclo si protrae finché i>0

*/
int main()
{
    int x = 9, y=5, i=8;
    while (x>y || i>0)
    {
        x=x-i;
        i--;
    }
    return 0;
}
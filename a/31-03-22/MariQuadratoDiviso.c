#include <stdlib.h>
#include <stdio.h>
//Programma che stampa un Quadrato fatto di di A B
int main()
{
    int h, b;
    
    do
    {
        printf("Inserisca un' altezza positiva>");
        scanf("%d", &h);
    } while (h <= 0);

    b=h;
    
    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            printf("A ");
        }
        for(int j = 0; j < b-(i+1); j++)
        {
            printf("P ");
        }        
        printf("\n");
    }
    return 0;
}
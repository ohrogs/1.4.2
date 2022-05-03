#include <stdlib.h>
#include <stdio.h>
//Programma che stampa un Quadrato fatto di di A B
int main()
{
    int h, conta=1;
    
    do
    {
        printf("Inserisca un' altezza positiva>");
        scanf("%d", &h);
    } while (h <= 0);
    
    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            printf("%3d ", conta);
            conta++;
        }        
        printf("\n");
    }
    return 0;
}
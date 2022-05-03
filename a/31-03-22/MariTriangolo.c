#include <stdlib.h>
#include <stdio.h>
//Programma che stampa un triangolo rettangolo di *
int main()
{
    int h;
    do
    {
        printf("Inserisca un' altezza positiva>");
        scanf("%d", &h);
    } while (h <= 0);
    
    for (int i = 1; i < h+1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdlib.h>
#include <stdio.h>
//Programma che stampa rettangolo b*h di * 
int main()
{
    int b, h;
    do
    {
        printf("Inserisca una base positiva>");
        scanf("%d", &b);
    } while (b <= 0);

    do
    {
        printf("Inserisca un' altezza positiva>");
        scanf("%d", &h);
    } while (h <= 0);
    
    for(int j = 0; j < b; j++)
    {
        printf("* ");
    }
    printf("\n");

    for(int i = 0; i < h-2; i++)
    {
        printf("*");
        for(int j = 0; j < b-2; j++)
        {
            printf("  ");
        }
        printf(" *\n");
    }

    for(int j = 0; j < b; j++)
    {
        printf("* ");
    }

    printf("\n");
    return 0;
}
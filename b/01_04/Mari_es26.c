#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int check=1;
    while(check == 1)
    {
        int anno;
        do
        {
            printf("Inerisca l'anno>");
            scanf("%d", &anno);            
        } while (anno > 2022);
        anno=abs(anno);
        if( ( (anno % 4 == 0) && (anno % 100 != 0)) || (anno % 400 == 0) )
        {
            printf("%d e' bisestile\n", anno);
        }
        else
        {
            printf("%d non e' bisestile\n", anno);
        }
        printf("vuole continuare(1==sim, altro no)>");
        scanf("%d", &check);
    }
    return 0;
}
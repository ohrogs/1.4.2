#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *pos neg eq
int main(void)
{
    int n, check = 1;
    while(check == 1)
    {
        printf("inserire n>");
        scanf("%d",&n);
        if(n == 0)
        {
            printf("Numero == a 0\n");
        }
        else if(n > 0)
        {
            printf("Numero positivo\n");
        }
        else
        {
            printf("Numero negativo\n");
        }
        printf("Continuare? (1 si altro no)");
        scanf("%d", &check);
    }
    
    return 0;
}
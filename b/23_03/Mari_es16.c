#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *2 numeri
int main(void)
{
    int x = 1, n1, n2;
    
    while(x == 1)
    {
        int check;
        printf("inserisca n1>");
        scanf("%d", &n1);
        printf("inserisca n2>");
        scanf("%d", &n2);
        if(n2 == n1)
        {
            printf("I due numeri sono uguali\n");
        }
        else if(n1 > n2)
        {
            printf("%d > %d\n", n1, n2);            
        }
        else
        {
            printf("%d > %d\n", n2, n1); 
        }
        printf("continuare? (1 per si altro per no)");
        scanf("%d", &check);
        if(check != 1)
        {
            x += 1;
        } 
    }
    return 0;
}
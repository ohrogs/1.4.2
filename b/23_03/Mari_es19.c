#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *primo cubo quadrato no
int main(void)
{
    int n;
    int check = 1;
    while(check == 1)
    {
        printf("inserire n>");
        scanf("%d",&n);
        if(n%2 == 0)
        {
            printf("%d * %d = %d\n", n, n, n*n);
        }
        else
        {
            printf("%d * %d * %d = %d\n", n, n, n, n*n*n);
        }

        printf("Continuare? (1 si altro no)");
        scanf("%d", &check);
    }
    
    return 0;
}
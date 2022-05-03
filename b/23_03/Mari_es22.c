#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *primo cubo quadrato no
int main(void)
{
    int n1, n2;
    int check = 1;
    while(check == 1)
    {
        printf("inserire n1>");
        scanf("%d",&n1);
        printf("inserire n2>");
        scanf("%d",&n2);
        if(n1 > n2)
        {
            printf("%d non e' multiplo di %d\n", n2, n1);
        }
        else if (n2 % n1 == 0)
        {
            printf("%d e' multiplo di %d\n", n2, n1);
        }
        else
        {
            printf("%d non e' multiplo di %d\n", n2, n1);
        }        

        printf("Continuare? (1 si altro no)");
        scanf("%d", &check);
    }
    return 0;
}
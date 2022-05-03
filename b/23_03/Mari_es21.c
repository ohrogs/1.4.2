#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *range
int main(void)
{
    int n;
    int check = 1;
    while(check == 1)
    {
        printf("inserire n>");
        scanf("%d",&n);

        printf("Continuare? (1 si altro no)");
        scanf("%d", &check);
    }
    return 0;
}
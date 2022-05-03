#include <stdio.h>
#include <stdlib.h>
//23 03 22
//calcoli
int main(void)
{
    int primonum, secondonum;
    printf("inserisca il primo numero>");
    scanf("%d", &primonum);
    printf("inserisca il secondo numero>");
    scanf("%d", &secondonum);
    printf("%d + %d = %d\t%d - %d = %d\t", primonum, secondonum, primonum + secondonum, primonum, secondonum, primonum - secondonum);
    printf("%d * %d = %d\t", primonum, secondonum, primonum * secondonum);
    if(secondonum == 0)
    {
       printf("Non posso dividere per 0...");
       return 0;
    }
    printf("resto(%d, %d) = %d \t %d / %d = %f", primonum, secondonum, primonum % secondonum, primonum, secondonum, (float)primonum / (float)secondonum);
    return 0;
}
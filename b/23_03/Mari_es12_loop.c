#include <stdio.h>
#include <stdlib.h>
//23 03 22
//calcoli
int main(void)
{
    int primonum=-1, secondonum=-1;
    while(primonum != 0 || secondonum != 0)
    {
        printf("inserisca il primo numero>");
        scanf("%d", &primonum);
        printf("inserisca il secondo numero>");
        scanf("%d", &secondonum);
        if(primonum == 0 && secondonum == 0)
        {
            printf("Chiusura programma...");
            return 0;
        }
        printf("%d + %d = %d\t%d - %d = %d\t", primonum, secondonum, primonum + secondonum, primonum, secondonum, primonum - secondonum);
        printf("%d * %d = %d\t", primonum, secondonum, primonum * secondonum);
        if(secondonum == 0)
        {
        printf("Non posso dividere per 0...\n");
        }
        else
        {
            printf("resto(%d, %d) = %d \t %d / %d = %f\n", primonum, secondonum, primonum % secondonum, primonum, secondonum, (float)primonum / (float)secondonum);
        }
    }
    return 0;
}
#include <stdio.h>
//#include <stdlib.h>
/*il programma é indentato in maniera ambigua(trabocchetto)
ipotesi: siccome la variabile conta del for é locale verrá utilizzata solo al suo interno, il for comprende solo l'if che comprende solo il primo printf
il programma stampa 3 6 9 \n 6*/
int main(void)
{
    int conta=5;
    for (int conta = 1; conta < 10; conta++)
        if (conta%3==0)
            printf("%d ",conta);
    printf("\n%d", conta+1);
}
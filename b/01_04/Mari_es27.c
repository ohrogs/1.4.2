#include <stdlib.h>
#include <stdio.h>
//#include <math.h>
/*L'output del programma sará:
    5
    6
    1
    il programma finisce ritornando 0
Nel primo if 5 perché || richiede solo una delle due affermazioni vera e la prima lo é procede a eseguire il blocco true;
Nel secondo if 6 perché b>0 é vero, poi quando viene incrementato di 1 diventa 6 che in C é interpretato come valore di veritá bool true, quindi essendo tutte e due vere la condizione && restituisce true;
Nel secondo if 1 perché c>0 é vero, poi quando gli viene sottratto 5 diventa 1 che in C é interpretato come valore di veritá bool true, quindi essendo tutte e due vere la condizione && restituisce true;

*/
int main()
{
    int a = 5, b = 5, c = 6;
    if(a>0 || (a=a+1))
        printf("%d\n", a);
    if (b>0 && (b=b+1))
        printf("%d\n", b);
    if (c>0 && (c=b-5))
        printf("%d\n", c);
    return 0;
}
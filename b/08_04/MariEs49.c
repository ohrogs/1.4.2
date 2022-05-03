#include<stdio.h>

/*Il programma non andrá in running perché la dichiarazione
di b é in mezzo a due graffe questo fá si che venga cancellata
alla fine del blocco di codice; il compilatore ci segnalerá l'errore*/

int main(void)
{
    int a=5;
    printf("%d\n",a);
    {
        int a=3;
        int b=100;
        printf("%d\n",++a);
        printf("%d\n",b);        
    }
    printf("%d\n",a);
    printf("%d\n",b);          
}
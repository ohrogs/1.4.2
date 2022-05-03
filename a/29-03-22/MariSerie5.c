#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inizio, lungh;
    printf("inserire inizio serie>");
    scanf("%d", &inizio);
    do
    {
        printf("inserire la lunghezza>");
        scanf("%d", &lungh);
    } while (lungh <= 0);
    /*while(inizio % 5 != 0)
    {
        inizio++; //!metodo complesssitá 4 alla peggio
    }*/
    inizio = inizio - inizio%5 + 5; //!metodo diretto a complessitá 1 fisso
    for(int i = 0; i<lungh; i++)
    {
        printf("%d\t", inizio);
        inizio+=5;
        if(inizio == 0)
        {
            inizio+=5;
        }
    }
    return 0;
}
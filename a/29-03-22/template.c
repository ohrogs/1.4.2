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
    while(inizio % 5 != 0)
    {
        inizio++;
    }
    for(int i = 0; i<lungh; i++)
    {
        inizio+=5;
        printf("%d\t", inizio);
    }
        
}
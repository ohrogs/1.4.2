#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *quanto manca ai 100
int main(void)
{
    int eta = INT_MAX;
    while(eta > 0)
    {
        printf("inserisca eta'>");
        scanf("%d", &eta);
        if(eta <= 0)
        {
            printf("Chiudo il programma...");
            return 0;
        }
        else if(eta > 100)
        {
            printf("hai superato i 100 da %d anni\n", -(100-eta));
        }
        else
        {
            printf("Mancano %d anni per i 100...\n", 100-eta);  
        }      
    }
    return 0;
}
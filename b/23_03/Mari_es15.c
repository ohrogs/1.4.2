#include <stdio.h>
#include <stdlib.h>
//23 03 22
// *maggiorenne
int main(void)
{
    int eta = INT_MAX;
    while(1 == 1)
    {
        printf("inserisca eta'>");
        scanf("%d", &eta);
        if(eta == 0)
        {
            printf("Chiudo il programma...");
            return 0;
        }
        else if(eta < 0)
        {
            printf("Non credo\n");
        }
        else if(eta >= 18)
        {
            printf("Sei maggiorenne\n", -(100-eta));
        }
        else if(eta > 150)
        {
            printf("Sei pazzo...\n");
        }
        else
        {
            printf("Non sei maggiorenne\n", 100-eta);  
        }      
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define DIM 32

int main()
{
    char string[DIM], sub[DIM], h=0, k=0, pdi = 0;
    bool check = true;
    printf("inserire la prima parola\n");
    scanf("%s", string);
    printf("inserire la seconda parola\n");
    scanf("%s", sub);
    
    h=strlen(string);
    k=strlen(sub);
    //printf("\n%d %d\n", h,k);
    if(h<k || k==0 || h == 0) //se la presunta sub é maggiore dell'originale allora non é possibile che sia una sottostringa stessa cosa se una delle due é vuota
    {
        printf("La seconda stringa non é sottostringa della prima\n");
        return 0;
    }

    /*for (int i = 0; string[i+1] != '\0'; i++) //cerco il punto in cui le stringhe iniziano a combaciare
    {
        if (string[i]==sub[0])
        {
            pdi = i; //pdi sarebbe punto di inizio
            check = true;
            break;
        }
        check = false;
    }
    
    if (!check)
    {
        printf("La seconda stringa non é sottostringa della prima\n");
        return 0;
    }*/  


    for (int i = 0; string[i+k] != '\0'; i++)
    {
        //check = true;
        for (int j = 0; j < k-1 && check; j++)//scrolls é per la sub scrollS per la string
        {
            if (string[i+j]!=sub[j])
            {
                check = false;
            }
        }
    }

    if(check)
    {
        printf("e una sottostringa\n");
    }
    else
    {
        printf("non e una sottostringa\n");        
    }    
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 32

int main()
{
    char string[DIM], sub[DIM], h=0, k=0, pdi = 0;
    bool check = true;
    printf("inserire la prima parola\n");
    scanf("%s", string);
    printf("inserire la seconda parola\n");
    scanf("%s", sub);
    
    for (h = 0; string[h] != '\0'; h++) //conto la stringa
    {
        ;
    }
    for (k = 0; sub[k] != '\0'; k++) //conto la sub
    {
        ;
    }
    //printf("\n%d %d\n", h,k);
    if(h<k || k==0 || h == 0) //se la presunta sub é maggiore dell'originale allora non é possibile che sia una sottostringa stessa cosa se una delle due é vuota
    {
        printf("La seconda stringa non é sottostringa della prima\n");
        return 0;
    }

    for (int i = 0; string[i+1] != '\0'; i++) //cerco il punto in cui le stringhe iniziano a combaciare
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
    }   


    for (int i = 0; string[i+k] != '\0'; i++)
    {
        check = true;
        for (int scrollS=pdi, scrolls=0; scrolls < k && check; scrollS++, scrolls++)//scrolls é per la sub scrollS per la string
        {
            if (string[scrollS]!=sub[scrolls])
            {
                check = false;
                break;
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
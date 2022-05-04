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
    
    h=strlen(string)-1;
    k=strlen(sub)-1;
    //printf("\n%d %d\n", h,k);
    if(h<k || k==0 || h == 0) //se la presunta sub é maggiore dell'originale allora non é possibile che sia una sottostringa stessa cosa se una delle due é vuota
    {
        printf("La seconda stringa non é sottostringa della prima\n");
        return 0;
    }


    for (int i = 0; string[i] != '\0'; i++)
    {
        check = true;
        int j;
        for (j = 0; j <= k && check; j++)
        {
            //printf("[%d][%d]= %c --> %c\n", i+j, j, string[i+j], sub[j]); //codice debug
            if (string[i+j]!=sub[j])
            {
                check = false;
                //printf("fail\n"); //codice debug
            }
        }
        if(j>=k && check) //fermati se tutta la sub é risultata uguale
            break;
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
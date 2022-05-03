#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cur, prec;
    int cre=1, dcre=1, flag=1;
    printf("inserire numero>");
    scanf("%d", &prec);
    printf("inserire numero>");
    scanf("%d", &cur);
    if(prec<=cur)
    {        
        do
        {
            dcre=0;
            printf("inserire un numero>");
            scanf("%d", &cur);
            if(cur == 0)
            {
                break;
            }
            if(prec>cur)
            {
                flag=0;
                cre=0;
            }
            prec = cur;      
        } while (flag);
    }
    else if(prec>cur)
    {
        cre=0;
        do
        {
            printf("inserire un numero>");
            scanf("%d", &cur);
            if(cur == 0)
            {
                break;
            }
            if(prec<cur)
            {
                flag=0;
                dcre=0;
            }
            prec = cur;
            
            prec = cur;      
        } while (flag);
    }
    if(cre)
    {
        printf("funzione crescente");
    }
    else if(dcre)
    {
        printf("funzione decrescente");
    }
    else
    {
        printf("funziona normale");
    }    
}
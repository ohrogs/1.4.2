#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Dato un numero intero verificare se è un numero primo.
int main()
{
    int n;
    do{
        int flag=1;
        do
        {
            printf("Quale numero vuole controllare?(inserisca 0 per fermarlo)>");
            scanf("%d", &n);       
        }while(n < 0 || n == 1);

        if(n==0)
        {
            break;
        }

        for(unsigned int i = 2; i<=sqrt(n) && flag; i++)
        {
            if(n%i==0)
            {
                flag=0;
            }
        }

        if(flag)
        {
            printf("%d e' primo\n", n);
        }
        else
        {
            printf("%d non e'primo\n", n);
        }

    }while (n != 0);
    
}
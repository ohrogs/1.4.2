#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Dato un n stampo i primi n primi
int main()
{
    int n;
    do{
        do
        {
            printf("Quanti numeri vuole>?(inserisca 0 per fermarlo)>");
            scanf("%d", &n);       
        }while(n < 0 || n == 1);

        if(n==0)
        {
            break;
        }
        else if(n>=2)
        {
            printf("2\t");
        }

        int conta=0;
        for(unsigned int i=3; conta<n-1; i++)
        {
            int flag=1;
            if(i%2==0)
            {
                flag=0;
            }
            for(unsigned int j=3; j<=sqrt(i) && flag; j+=2)
            {
                if(i%j==0)
                {
                    flag=0;
                }
            }
            if(flag)
            {
                conta++;
                printf("%d\t", i);
            }       
        }
        printf("\n");
    }while (n != 0);    
}
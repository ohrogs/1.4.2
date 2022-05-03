#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Dato un n stampo gli interi da 0 a se stesso
int main()
{
    int n;
    do{
        do
        {
            printf("Quale numero vuole>?(inserisca 0 per fermarlo)>");
            scanf("%d", &n);       
        }while(n < 0 || n == 1);

        if(n==0)
        {
            break;
        }
        int flag;
        for(unsigned int i = 3; i<n; i++)
        {
            flag = 1;
            if (i%2==0)
            {
                flag = 0;
            }
            for(int j = 3; i<sqrt(n) && flag; j+=2)
            {
                if(i%j==0)
                {
                    flag=0;
                }
            }
            if(flag)
            {
                printf("%d\n", i);
            }
        }
    }while (n != 0);
    
}
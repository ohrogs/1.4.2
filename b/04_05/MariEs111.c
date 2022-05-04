#include "input.h"
#include "matematiche.h"
#include <time.h>
#define DIM 100

void sommaCifre(int);

int main()
{
    int n=getInt("Inserisca un numero positivo> ");
    sommaCifre(n);

}

void sommaCifre(int x)
{
    if(x<=9)
    {
        printf("%d", x);
        return;
    }
    int sum = 0;
    while(x>9)
    {
        int cifre = contacifre(x);
        printf("%d = ", x);
        sum=0;
        for (int i = 0; i < cifre; i++)
        {
            sum += x%10;
            printf(" %d ", x%10);
            if(i<cifre-1)
                printf("+");
            x /= 10; 
        }
        printf(" = %d =>", sum);
        x=sum;
    }
    printf("X");
} 
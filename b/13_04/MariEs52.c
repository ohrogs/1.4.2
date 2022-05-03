#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int loop();
int getInt();
void colContinue(int);
void senzaContinue(int);

int main()
{
    int n;
    do
    {
        n=loop();
    } while (n != 0);
    
}

int loop()
{
    int n=getInt();
    if(n==0)
        return 0;
    senzaContinue(n);
    colContinue(n);
    return 1;
    
    
}

void colContinue(int skip)
{
    for(int i=1; i<=100; i++)
    {
        if(i==skip)
            continue;
        printf("%d\t", i);
        
    }
    printf("\n");
}

void senzaContinue(int skip)
{
    int i=1;
    while (i<101)
    {
        if(i!=skip)
        {
            printf("%d\t", i);
        }
        i++;
    }
    printf("\n");    
}

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero >100(0 per concludere)> ");
        scanf("%d", &n);
    } while (n<0 || n>100);
    
    return n;
}
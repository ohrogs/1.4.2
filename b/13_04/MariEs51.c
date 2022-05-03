#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int loop();
int getInt();
void senzaBreak(int);
void colBreak(int);

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
    senzaBreak(n);
    colBreak(n);
    return 1;
    
    
}

void senzaBreak(int lim)
{
    for(int i=1; i<=lim; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

void colBreak(int lim)
{
    int i=1;
    while (true)
    {
        printf("%d\t", i);
        i++;
        if (i==lim)
        {
            printf("%d\t", i);
            break;
        }
    }
    
    printf("\n");
}

int getInt()
{
    int n;
    printf("inserisca un numero >100(0 per concludere)> ");
    scanf("%d", &n);
    return n;
}
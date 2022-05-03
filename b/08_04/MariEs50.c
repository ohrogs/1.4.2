#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int getInt();
void conta(int);
int loop();

int main()
{
    int n;
    do
    {
        n=loop();
    } while (n!=0);
    
}

int loop()
{

    int n;
    do
    {
        n=getInt();
    } while (n<0);

    if(n==0)
        return 0;
    
    conta(n);
    return 1;
}

void conta(int z)
{
    for(int i = 1; i <= z; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    if(z<100)
    {
        for(int i = z; i <= 100; i++)
        {
           printf("%d\t", i); 
        }
        printf("\n");
    }
}

int getInt()
{
    int x;
    printf("Inserisca un numero intero(0 per uscire)>");
    scanf("%d", &x);
    return x;
}
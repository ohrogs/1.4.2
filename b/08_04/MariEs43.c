#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int loop();
int getInt();
void contaForCres(int, int);
void contaForDecres(int, int);

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
    int var_a=getInt(), var_b=getInt();
    if(var_a<var_b)
        contaForCres(var_a, var_b);
    else
        contaForDecres(var_b, var_a);    

}

void contaForCres(int a, int z)
{
    for(int i=a; i<=z; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

void contaForDecres(int a, int z)
{
    for(int i=z; i>=a; i--)
    {
        printf("%d\t", i);
    }
    printf("\n");    
}


int getInt()
{
    int x;
    printf("Inserisca un numero>");
    scanf("%d", &x);
    return x;
}
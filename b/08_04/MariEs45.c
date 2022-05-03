#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int getInt();
void instructions();
int loop();
void eFor();
void eDo();
void eWh();

int main()
{
    instructions();
    int n;
    do
    {
        n=loop();
    } while (n==1);
    
}

int loop()
{    
    int choice=getInt();
    switch (choice)
    {
    case 1:
        eFor();
        printf("\n");       
        break;
    case 2:
        eDo();
        printf("\n");
        break;
    case 3:
        eWh();
        printf("\n");
        break;
    
    default:
        return 0;
    }
    return 1;
}

void eFor()
{
    printf("stampa dei numeri da 1 a 10\n");
    for(unsigned int i=1; i<=10; i++)
    {
        printf("%3d", i);
    }
}

void eDo()
{
    int x;
    printf("Richiesta di n con controllo\n");
    do
    {
        printf("inserisca un numero diverso da 0>");
        scanf("%d", &x);
    } while (x==0);        
}

void eWh()
{
    
    printf("loop\n");
    int x;
    while(true)
    {
        printf("inserisca 0 per usicre>");
        scanf("%d", &x);
        if(x==0)
            break;
    }
}

int getInt()
{
    int x;
    printf("Inserisca il numero di selezione>");
    scanf("%d", &x);
    return x;
}

void instructions()
{
    printf("legenda:\n");
    printf("-1 il do\n");
    printf("-2 il while\n");
    printf("-3 il for\n");
    printf("-Altro per quittare\n");
}
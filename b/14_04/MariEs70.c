#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void dividi(int);
int getInt();
bool loop();

int main()
{
    bool n;
    system("chcp 65001");
    do
    {
        /* code */
        n=loop();
    } while (n!=0);
    
    return 0;
}

bool loop()
{
    int n=getInt();
    if(n==0)
        return false;
    dividi(n);
    return true;
}

void dividi(int n)
{
    //int ogg=n;
    int resto=0, invertito=0;
    //int conta=1;
    while (n>0)
    {
        resto=n%10;
        invertito = invertito*10+resto;
        n/=10;
    }
    printf("invertito: %d\n", invertito);
}

/*
void dividi(int n)
{
    //int ogg=n;
    int og=n;
    //int conta=1;
    while (n>9)
    {
        if(n%10==0)
        {
            //printf("debug::%d\n", n);
            printf("%d\t", og-n);
            n/=10;
            og=n;
        }
        else
            n--;
    }
    printf("%d\n", og);    
}*/

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(0 per quittare)> ");
        scanf("%d", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dividi(int);
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
    printf("%d ha %d cifre\n", n, dividi(n));
    return true;
}

int dividi(int n)
{
    int conta=1;
    while (n>9)
    {
        if(n%10==0)
        {
            conta++;
            n/=10;
        }
        else
            n--;
    }
    return conta;    
}


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
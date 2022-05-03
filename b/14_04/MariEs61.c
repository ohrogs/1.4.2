#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void tabellinak(int);
int getInt();
bool loop();

int main()
{
    bool n;
    //system("chcp 65001");
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
    tabellinak(n);
    return true;
}


void tabellinak(int k)
{
    for(int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n", k, i, k*i);
    }
}

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(tra 0 e 10 compresi)(0 per concludere)> ");
        scanf("%d", &n);
    } while (n<0 || n>10);
    
    return n;
}
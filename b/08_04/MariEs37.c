#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int loop();
int getInt();
int max(int, int, int);

int main()
{
    system("chcp 65001");
    int n;
    do
    {
        n=loop();
    } while (n != 0);
    
    return n;    
}

int loop()
{
    float n1=getInt(), n2=getInt(), n3=getInt();
    if (n1==0 && n2==0 && n3==0)
        return 0;
    if (max(n1, n2, n3)==n1)
        printf("Il primo é il maggiore\n");
    else if(max(n1, n2, n3)==n2)
        printf("Il secondo é il maggiore\n");
    else
        printf("Il terzo é il maggiore\n");
    return 1;     
}

int getInt()
{
    int x;
    printf("Inserisca un numero intero(inserisca 0 per terminare)>");
    scanf("%d", &x);
    return x;
}

int max(int a, int b, int c)
{
    if(a >= b && a>= c)
        return a;
    else if(b >= c)
        return b;
    else
        return c;
}
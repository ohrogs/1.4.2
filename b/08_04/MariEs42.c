#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int loop();
int getInt();
bool even(int);

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
    float n1=getInt();
    if (n1==0)
        return 0;
    if (even(n1))
        printf("Il numero é pari\n");
    else
        printf("Il numero é dispari\n");
    return 1;     
}

int getInt()
{
    int x;
    printf("Inserisca un numero intero(inserisca 0 per terminare)>");
    scanf("%d", &x);
    return x;
}

bool even(int a)
{
    switch (a%2==0)
    {
    case true:
        return true;

    case false:
        return false;
    
    default:
        break;
    }
}
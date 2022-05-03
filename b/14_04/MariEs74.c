#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void dividi(int);
void scrivi(int);
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
    int resto=0, invertito=0, og=n;
    //int conta=1;
    while (n>0)
    {
        resto=n%10;
        invertito = invertito*10+resto;
        n/=10;
    }
    printf("invertito %d\n", invertito);
    resto=0;
    while (invertito>0)
    {
        resto=invertito%10;
        scrivi(resto);
        invertito/=10;
    }
    
    printf("\n");
}

void scrivi(int resto)
{
    switch (resto)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("uno");
            break;
        case 2:
            printf("due");
            break;
        case 3:
            printf("tre");
            break;
        case 4:
            printf("quattro");
            break;
        case 5:
            printf("cinque");
            break;
        case 6:
            printf("sei");
            break;
        case 7:
            printf("sette");
            break;
        case 8:
            printf("otto");
            break;
        case 9:
            printf("nove");
            break;
        }
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
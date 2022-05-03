#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void stampaCasuali(int);
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
    stampaCasuali(n);
    return true;
}

void stampaCasuali(int n)
{
    srand(n);
    for(int i=0; i<10; i++)
        printf("%d\t", rand()%32767);
    printf("\n");
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
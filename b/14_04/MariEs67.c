#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void stampaResti(int);
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
    stampaResti(n);
    return true;
}

void stampaResti(int n)
{
    for(int i=0; i<=100; i++)
        printf("(%d %% %d=%d)\t", i, n, i%n);
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
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPerf(int);
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
    if(isPerf(n))
        printf("Il numero é perfetto\n");
    else
        printf("Il numero non é perfetto\n");
    return true;
}


bool isPerf(int n)
{
    int conta=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            conta+=i;
    }
    //printf("\nconta=%d\n", conta);
    return conta==n;
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
#include<time.h>

#include "input.h"
#include"matematiche.h"


bool loop();
void esercizio(int, int);

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    bool n;
    do
    {
        n=loop();
    } while (n);          
}

bool loop()
{
    //printf("0 per terminare\n");
    int n1=getInt(), n2=getIntMax(n1);
    if(n1==0)
        return false;
    //printf("%d", nCifre);
    esercizio(n1, n2);    
    return true;

}

void esercizio(int n1, int n2)
{
    int ris=n1;
    printf("(%d, %d) =>", n1, n2);
    printf(" (%d", n1);
    for (int i = n1+1; i <= n2; i++)
    {
        printf("+%d", i);
        ris+=i;
    }
    printf(") = %d)\n", ris);    
}
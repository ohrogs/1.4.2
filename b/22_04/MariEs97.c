#include<time.h>

#include "input.h"
#include"matematiche.h"


bool loop();

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
    int n1=getInt(), n2=getInt();
    if(n1==0)
        return false;
    //printf("%d", nCifre);
    if(isMultiplo(n1,n2))
        printf("%d é multiplo di %d\n", n2, n1);
    else
        printf("%d non é multiplo di %d\n", n2, n1);

    
    return true;
}
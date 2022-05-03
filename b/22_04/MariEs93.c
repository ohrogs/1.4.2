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
    printf("0 per terminare\n");
    int n=getIntStd();
    if(n==0)
        return false;
    //printf("%d", nCifre);
    printf("%d^3 = %d\n", n, intCubo(n));
    return true;

}
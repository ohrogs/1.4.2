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
    int n=getInt();
    if(n==0)
        return false;
    //printf("%d", nCifre);
    printf("Armstrong(%d) = %d\n", n, armstrong(n));
    if(isArmstrong(n))
        printf("é un numero di armstrong\n");
    else
        printf("non é un numero di armstrong\n");
    return true;

}
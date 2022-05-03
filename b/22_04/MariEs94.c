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
    float r=getFloat();
    if(r==0.0)
        return false;
    //printf("%d", nCifre);
    printf("Area: %f, Circonferenza: %f, Diametro: %f\n", areaCerchio(r), circonf(r), diametro(r));
    return true;
}
#include<time.h>

#include "input.h"
#include"matematiche.h"


bool loop();

int main()
{
    system("chcp 65001");
    srand(time(NULL));
    int n;
    do
    {
        n=rand()%999;
        printf("%d\t", n);        
    } while (n<900);         
}
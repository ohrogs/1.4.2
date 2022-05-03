/*#include<stdio.h>
#include<stdlib.h>*/
//#include<stdbool.h>
#include<math.h>
#include<time.h>

#include "input.h"


bool game();

int main()
{
    //system("chcp65005");
    srand(time(NULL));
    bool n;
    do
    {
        n=game();
    } while (n);
            
}

bool game()
{
    int n1=1+rand()%10, n2=1+rand()%10, ris;
    do
    {
        printf("%d+%d=?\n", n1,n2);
        ris=getIntStd();
        if(ris!=(n1+n2))
            printf("no\n");
    } while (ris!=(n1+n2));
    

    printf("Vuole rigiocare?\n");
    char c=getYN();
    if (c!='Y' || c!='y')
        return false;
    return true;
}
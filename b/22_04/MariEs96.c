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
    int n1=getInt();
    if(n1==0)
        return false;
    //printf("%d", nCifre);
    if(isPalindrome(n1))
        printf("é palindomo\n");
    else
        printf("non é palindromo\n");
    return true;

}
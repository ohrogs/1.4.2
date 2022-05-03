#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>

void tabelline();

int main()
{
    int n;
    //system("chcp 65001");
    tabelline();
    return 0;
}

void tabelline()
{
    for(int i = 0; i<=10; i++)
    {        
        printf("%d\t%d\n", i, 10-i);
    }
}
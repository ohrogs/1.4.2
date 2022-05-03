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
    for(int i = 0, j=10; i<=10 && j>=0; i++, j--)
    {
        printf("%d\t%d\n", i, j);
    }
}
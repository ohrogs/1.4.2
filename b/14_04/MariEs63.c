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
    for(int i = 1; i<=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\t", j, i, j*i);
        }
        printf("\n");
    }
}
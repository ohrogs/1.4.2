#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>

void tabellina5();

int main()
{
    int n;
    //system("chcp 65001");
    tabellina5();
    return 0;
}

void tabellina5()
{
    for(int i = 1; i<=10; i++)
    {
        printf("5 * %d = %d\n", i, 5*i);
    }
}
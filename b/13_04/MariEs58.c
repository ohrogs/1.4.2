#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printR();

int main()
{
    printR();
}

void printR()
{
    for(int i=1; i<=9; i++)
    {
        for (int j = 1; j <=i; j++)
            printf("%d", j);
        printf("\n");
    }
}
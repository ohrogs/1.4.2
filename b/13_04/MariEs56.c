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
    for(int i=0; i<9; i++)
    {
        for (int j = 1; j <=10; j++)
            printf("%3d", j);
        printf("\n");
    }
}



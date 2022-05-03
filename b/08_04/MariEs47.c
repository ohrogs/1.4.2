#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void orr();

int main()
{
    system("chcp 65001");
    orr();
}

void orr()
{
    for(int i=1; i<=100; i++)
    {
        printf("%4d", i);
        if(i%5==0)
        {
            printf("\n");
        }        
    }
}
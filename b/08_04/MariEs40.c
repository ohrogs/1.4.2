#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void orr();
void vert();
void orrDo();
void vertDo();
void orrWh();
void vertWh();

int main()
{
    system("chcp 65001");
    orrWh();
    vertWh();    
}

void orrWh()
{
    short unsigned int i=1;
    while (i<=100)
    {
        printf("%4d", i);
        i++;
    }
    
    printf("\n");
}

void vertWh()
{
    short unsigned int i=100;
    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }
}

void orrDo()
{
    short unsigned int i=1;
    do
    {
        printf("%4d", i);
        i++;
    }while (i<=100);
    
    printf("\n");
}

void vertDo()
{
    short unsigned int i=100;
    do
    {
        printf("%d\n", i);
        i--;
    }while(i>=1);
}

void orr()
{
    for(short unsigned int i=1; i<=100; i++)
    {
        printf("%4d", i);
    }
    printf("\n");
}

void vert()
{
    for(short unsigned int i=100; i>=1; i--)
    {
        printf("%d\n", i);
    }
}



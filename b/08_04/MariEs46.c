#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void orr();
void Qpow();
void Qstd();

int main()
{
    system("chcp 65001");
    Qstd();
    Qpow();
}

void Qstd()
{
    for(char i=1; i<=100; i++)
    {
        printf("(%d => %d)", i, i*i);
        if(i%10==0)
            printf("\n");
    }
}

void Qpow()
{
    for(char i=1; i<=100; i++)
    {
        printf("(%d => %.0f)", i, pow(i, 2));
        if(i%10==0)
            printf("\n");
    }
}
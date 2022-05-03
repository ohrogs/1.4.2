#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void orr();
void AZChar();
void AZInt();

int main()
{
    system("chcp 65001");
    AZChar();
    AZInt();
}

void AZChar()
{
    for(char i='A'; i<='Z'; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
}

void AZInt()
{
    for(char i=65; i<=90; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
}
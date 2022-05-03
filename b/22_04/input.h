#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int getInt();
int getIntStd();
int getIntMin(int);
int getIntMax(int);
float getFloat();
float getFloatStd();
char getChar();

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(0 per quittare)> ");
        scanf("%d", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}

int getIntMax(int min)
{
    int n;
    do
    {
        printf("inserisca un numero> ");
        scanf("%d", &n);
    } while (n<min);
    printf("OK\n");
    return n;
}

int getIntMin(int max)
{
    int n;
    do
    {
        printf("inserisca un numero> ");
        scanf("%d", &n);
    } while (n>max);
    printf("OK\n");
    return n;
}

int getIntStd()
{
    int n;
    printf("inserisca un numero> ");
    scanf("%d", &n);
    printf("OK\n");
    return n;
}

float getFloat()
{
    float n;
    do
    {
        printf("inserisca un numero(0 per quittare)> ");
        scanf("%f", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}

float getFloatStd()
{
    float n;
    printf("inserisca un numero(0 per quittare)> ");
    scanf("%f", &n);
    printf("OK\n");
    return n;
}

char getChar()
{
    char n;
    printf("inserisca un carattere> ");
    fflush(stdin);
    scanf("%c", &n);
    printf("OK\n");
    return n;
}

char getYN()
{
    char n;    
    printf("vuole procedere [y/n]> ");
    fflush(stdin);
    scanf("%c", &n);
    printf("OK\n");
    return n;    
}
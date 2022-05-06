#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void getString(char[], char[]);
int getInt(char[]);
int getIntStd(char[]);
int getIntMin(char[], int);
int getIntMax(char[], int);
float getFloat(char[]);
float getFloatStd(char[]);
char getChar(char[]);

void getString(char frase[], char string[])
{
    printf("%s", frase);
    fflush(stdin);
    scanf("%s", string);
}

int getInt(char frase[])
{
    int n;
    do
    {
        printf("%s", frase);
        scanf("%d", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}

int getIntMax(char frase[], int min)
{
    int n;
    do
    {
        printf("%s", frase);
        scanf("%d", &n);
    } while (n<min);
    printf("OK\n");
    return n;
}

int getIntMin(char frase[], int max)
{
    int n;
    do
    {
        printf("%s", frase);
        scanf("%d", &n);
    } while (n>max);
    printf("OK\n");
    return n;
}

int getIntStd(char frase[])
{
    int n;
    printf("%s", frase);
    scanf("%d", &n);
    printf("OK\n");
    return n;
}

float getFloat(char frase[])
{
    float n;
    do
    {
        printf("%s", frase);
        scanf("%f", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}

float getFloatStd(char frase[])
{
    float n;
    printf("%s", frase);
    scanf("%f", &n);
    printf("OK\n");
    return n;
}

char getChar(char frase[])
{
    char n;
    printf("%s", frase);
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
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define DIM 30

int main()
{
    char nome[DIM],c;
    int i = 0;
    printf("Inserire il proprio nome> ");
    fflush(stdin);
    scanf("%s", nome);
    printf("Il nome inserito e' <<%s>>\n", nome);
    while(nome[i] != '\0')
    {
        i++;
    }
    if(i>1)
        printf("la stringa <<%s>> ha %d caratteri(%d considerando il terminatore)\n", nome, i, i+1);
    else
        printf("la stringa <<%s>> ha %d carattere(%d caratteri considerando il terminatore)\n", nome, i, i+1);
}
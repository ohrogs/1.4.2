#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 30

int main()
{
    char nome[DIM],c;
    int i = 0, contaVocali=0;
    printf("Inserire il proprio nome> ");
    fflush(stdin);
    scanf("%s", nome);
    printf("Il nome inserito e' <<%s>>\n", nome);
    while(nome[i] != '\0')
    {
        if (nome[i]>='A' && nome[i]<='Z')
            nome[i]+=32;
        
        i++;
    }
    if(i>1)
        printf("la stringa minuscola <<%s>> ha %d caratteri(%d considerando il terminatore)\n", nome, i, i+1);
    else
        printf("la stringa minuscola <<%s>> ha %d carattere(%d caratteri considerando il terminatore)\n", nome, i, i+1);
}
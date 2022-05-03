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
        if (nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || nome[i] == 'U' || nome[i] == 'u')
            contaVocali++;
        
        i++;
    }
    if(i>1)
        printf("la stringa <<%s>> ha %d caratteri(%d considerando il terminatore) e %d vocali\n", nome, i, i+1, contaVocali);
    else
        printf("la stringa <<%s>> ha %d carattere(%d caratteri considerando il terminatore) e %d vocali\n", nome, i, i+1, contaVocali);
}
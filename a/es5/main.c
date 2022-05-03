#include <stdio.h>
#include <stdlib.h>
//programma che stampa il nome del mese dato in input il numero

int main()
{
    int m;
    printf("Inserisca il numero di un mese> ");
    scanf("%d", &m);
    if (m <= 0 || m >= 13)
    {
        printf("Ha inserito un numero non valido");
    }
    else if(m == 1)
    {
        printf("%d e' gennaio", m);
    }
    else if(m == 2)
    {
        printf("%d e' febbraio", m);
    }
    else if(m == 3)
    {
        printf("%d e' marzo", m);
    }
    else if(m == 4)
    {
        printf("%d e' aprile", m);
    }
    else if(m == 5)
    {
        printf("%d e' maggio", m);
    }
    else if(m == 6)
    {
        printf("%d e' giugno", m);
    }
    else if(m == 7)
    {
        printf("%d e' luglio", m);
    }
    else if(m == 8)
    {
        printf("%d e' agosto", m);
    }
    else if(m == 9)
    {
        printf("%d e' settembre", m);
    }
    else if(m == 10)
    {
        printf("%d e' ottobre", m);
    }
    else if(m == 11)
    {
        printf("%d e' novembre", m);
    }
    else
    {
        printf("%d e' dicembre", m);
    }
    return 0;
}
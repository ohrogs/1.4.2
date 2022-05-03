#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "input.h"
//#include "caratteri.h"
#include "matematiche.h" //lascio le funzioni nella dir del programma per semplificare il caricamento su teams

bool loop();

int main()
{
    srand(time(NULL));
    system("chcp 65001");
    bool n;
    do
    {
        n=loop();
    } while (n);
    return 0;
}

bool loop()
{
    printf("Inserimento n\n");
    int n=getInt();
    if (n==0)
        return false;
    if(isEven(n))
        printf("Il numero %d é pari\n", n);
    else
        printf("Il numero %d non é pari\n", n);
    return true;
}
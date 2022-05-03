#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
#include "input.h"
#include "caratteri.h"
#include "matematiche.h" //lascio le funzioni nella dir del programma per semplificare il caricamento su teams
*/

int genRandom(int, int);
void asterischi();
void printAsterischi(int);

int main()
{
    srand(time(NULL));
    system("chcp 65001");
    asterischi();
    return 0;
}

void asterischi()
{
    int n;
    for (int i = 0; i < 200; i++)
    {
        n=genRandom(15,50);
        printf("(%d) => ", n);
        printAsterischi(n);     
    }    
}

void printAsterischi(int n)
{
    for(int i = 0; i < n; i++)
        printf("*");
    printf("\n");
}

int genRandom(int first, int last)
{
    return rand()%(last+1 - first)+first;
}
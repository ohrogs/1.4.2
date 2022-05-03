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
void dado();

int main()
{
    srand(time(NULL));
    system("chcp 65001");
    dado();
    return 0;
}

void dado()
{
    int n=0, risultati[6]={0,0,0,0,0,0};
    for (int i = 0; i < 50000000; i++)
    {
        n=genRandom(1,6);
        switch (n)
        {
        case 1:
            risultati[0]++;
            break;
        case 2:
            risultati[1]++;
            break;
        case 3:
            risultati[2]++;
            break;
        case 4:
            risultati[3]++;
            break;
        case 5:
            risultati[4]++;
            break;
        case 6:
            risultati[5]++;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("il numero %d é uscito %d volte\n", i+1, risultati[i]);
    }
    
    
}

int genRandom(int first, int last)
{
    return first + rand()%last;
}
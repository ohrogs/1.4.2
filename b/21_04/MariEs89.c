#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


#include <Windows.h>
#include <unistd.h>//usate per sleep


#include "input.h"
/*#include "caratteri.h"
#include "matematiche.h" //lascio le funzioni nella dir del programma per semplificare il caricamento su teams
*/
bool game();
int genRandom(int, int);


int main()
{
    system("chcp 65001");
    srand(time(NULL));
    bool n;
    do
    {
        n=game();
    } while (n);
    
    return 0;
}

bool game()
{
    printf("lancio dei dadi, ");
    char c=getYN();
    int p1=0,p2=0;
    if(c!='y' && c!='Y')
        return false;
    while(p1 < 20 && p2 < 20)
    {
        int h=genRandom(1,6),k=genRandom(1,6);
        p1+=(h+k);
        printf("Hai fatto %d e %d sei a %d\n", h, k, p1);
        h=genRandom(1,6);k=genRandom(1,6);
        p2+=(h+k);
        printf("Il pc ha fatto %d e %d é %d\n", h, k, p2); 
        sleep(2);   
    }
    if(p1>=p2)
    {
        printf("Hai vinto\n");
        return true;
    }
    else
    {
        printf("Hai perso\n");
        return true;        
    }
            
}

int genRandom(int first, int last)
{
    return rand()%(last+1 - first)+first;
}
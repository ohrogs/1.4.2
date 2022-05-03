#include <stdio.h>
#include <stdlib.h>
/*#include <stdbool.h>
#include <time.h>*/

/*
#include "input.h"
#include "caratteri.h"
#include "matematiche.h" //lascio le funzioni nella dir del programma per semplificare il caricamento su teams
*/

void provoModificareTest(int);
int provoModificareTest2(int);

int main()
{
    system("chcp 65001");
    int test = 5;
    printf("test all'inizio= %d\n", test);
    provoModificareTest(test);
    printf("test alla fine= %d\n", test);
    return 0;
}

void provoModificareTest(int test)
{
    test++;
    printf("test in funzione = %d\n", test);
}
//essendo passata per valore e la funzione non puó raggiungere la variabile presente nella funzione chiamante.
int provoModificareTest2(int test)
{
    test++;
    return test;
}
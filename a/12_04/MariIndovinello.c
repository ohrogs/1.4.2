#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int getInt();
int getIntStd();
int genInt(int, int);
int loop();

int main()
{
    int check;
    do
    {
        printf("\nInzio nuova partita\n");
        check = loop();        
    }while (check);
    return 0;
}

int loop()
{
    int n=getInt(), answer=genInt(1, 100), conta=1;
    if(n==0)
    {
        return 0;
    }
    bool check = true;
    printf("\ndebug:::%d:::\n\n", answer);//Istruzione di debug
    do
    {
        if(n==answer)
        {
            printf("Hai indovinato...\n");
            check = false;
        }
        else if(n > answer)
        {
            printf("Troppo alto\n");
            n=getIntStd();
        }
        else
        {
            printf("Troppo basso\n");
            n=getIntStd();          
        }
        
        conta++;
    }while(check && conta<10);
    if(conta == 10)
        printf("Hai perso il numero era %d\n", answer);
    return 1;
}

int genInt(int lim1, int lim2) //funzione che genera un numero random tra i due estremi
{
    srand(time(NULL));
    int x=lim1+rand()%lim2;
    return x;
}

int getInt()
{
    int x;
    do
    {
        printf("Inserire un numero da 1 a 100(0 per concludere)> ");
        scanf("%d", &x);
    }while(x<0 || x>100);
    return x;
}

int getIntStd()
{
    int x;
    do
    {
        printf("Inserire un numero da 1 a 100> ");
        scanf("%d", &x);
    }while(x<1 || x>100);
    return x;
}
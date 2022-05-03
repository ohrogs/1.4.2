#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 32
char mex[DIM] = "Nessun Messaggio"; //impostato come var globale per renderla disponibile a tutte le funzioni.
int key=3; //idem

int getInt();
void cifratura();
void decifratura();
void istruzioni();
void minuscolo();
void printMex();
void cambioChiave();
void cambioStringa();

int main()
{
    
    while(true)
    {
        istruzioni();
        int n=getInt();
        switch (n)
        {
        case 1:
            cifratura();
            break;
        case 2:
            decifratura();
            break;
        case 3:
            cambioChiave();
            break;
        case 4:
            cambioStringa();
            break;
        default:
            return 0;
        }
    }
}

void cifratura()
{
    printf("Inserire il testo da cifrare> ");
    fflush(stdin);
    gets(mex);
    //minuscolo();
    for(int i = 0; mex[i] != '\0'; i++)//OP di cifratura
    {
        if(mex[i]==' ')
            continue;
        /*else if(mex[i]%key > )*/
        else if(mex[i] >= 'A' && mex[i] <= 'Z')
        {
            //mex[i]=((mex[i]-'A')%26+'A')+key;
            mex[i]=((mex[i]-'A'+key)%26)+'A';
        }
        else if(mex[i] >= 'a' && mex[i] <= 'z')
        {
            mex[i]=((mex[i]-'a'+key)%26)+'a';
        }
    }
    printf("Testo cifrato:\n");
    printMex();
}

void decifratura()
{
    for(int i = 0; mex[i] != '\0'; i++)//OP di cifratura
    {
        if(mex[i]==' ')
            continue;
        /*else if(mex[i]%key > )*/
        else if(mex[i] >= 'A' && mex[i] <= 'Z')
        {
            mex[i]=((mex[i]-'Z'-key)%26)+'Z';
        }
        else if(mex[i] >= 'a' && mex[i] <= 'z')
        {
            mex[i]=((mex[i]-'z'-key)%26)+'z';            
        }
    }
    printf("Testo Decifrato:\n");
    printMex();
    printf("É consigliato inserire un nuovo testo\n");
}

void minuscolo()//Inutilizzata
{
    for(int i = 0; mex[i] != '\0'; i++)
    {
        if (mex[i]>='A' && mex[i]<='Z')
            mex[i]+=32;        
    }    
}

void cambioChiave()
{
    key = getInt();
}

void istruzioni()
{
    printf("Inserisca:\n");
    printf("0: per uscire\n");
    printf("1: per cifrare\n");
    printf("2: per decifrare\n");
    printf("3: per cambiare chiave\n");
    printf("4: per cambiare la stringa memorizzata ed inserirne une personalizzata\n");
}

void cambioStringa()
{
    printf("\n>");
    fflush(stdin);
    gets(mex);
}

void printMex()
{
    puts(mex);
    printf("\n");
}

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(0 per quittare)> ");
        scanf("%d", &n);
    } while (n<0);
    printf("OK\n");
    return n;
}
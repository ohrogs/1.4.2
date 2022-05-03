#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIM 20
bool loop();
int getInt();
int getIntStd();

int main()
{
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
    int n=getInt(), v[DIM], v1[DIM], contaPos=0;
    bool crescente=true;
    if (n==0)
        return false;
    for(int i = 0; i < n; i++)//riempio il primo vettore
    {
        v[i]=getIntStd();
    }
    for(int i = 0; i < n; i++)//stampo il primo vettore
    {
        printf("v[%d] = %d\t", i, v[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++)//riempio il secondo vettore
    {
        int tieni=0;
        if(v[i]==0)//se v[i] é 0 salto al prossimo numero
            continue;
        else //altrimenti controllo le ripetizioni e inserisco
        {
            tieni=v[i];//uso una variabile per non pedere il valore da controllare
            for (int j = 0; j < n; j++)//scorro il vettore 0 di nuovo per controllare le ripetizioni
            {
                if(tieni==v[j])//controllo le ripetizioni
                {
                    v[j]=0;//assegno 0 a v[j] cosí non verrá piu considerata dal programma
                }
            }
            v1[contaPos]=tieni;//assegno il valore a v1
            contaPos++;//porto avanti il contatore della posizione del secondo array
        }        
    }
    printf("\n");
    for(int i = 0; i < contaPos; i++)//stampo il secondo vettore
    {
        printf("v1[%d] = %d\t", i, v1[i]);
    }
    printf("\n");
    return true;
}

int getIntStd()
{
    int n;
    printf("Inserisca un valore intero> ");
    scanf("%d", &n);
    return n;
}

int getInt()
{
    int n;
    do
    {
        printf("Inserisca la quantitá di numeri da inserire(0 per uscire)> ");
        scanf("%d", &n);
    } while (n<0||n>20);
    return n;
}
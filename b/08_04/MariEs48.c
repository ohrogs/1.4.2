#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int getInt();
void eFor(float);
int loop();

int main()
{
    int n;
    do
    {
        n=loop();
    } while (n!=0);
    
}

int loop()
{

    int nquad;
    do
    {
        nquad=getInt();
    } while (nquad<4 && nquad>0);

    if(nquad==0)
        return 0;
    
    eFor(nquad);
    return 1;


}

void eFor(float x)
{
    if(ceil(sqrt(x)) == floor(sqrt(x))) //controllo che l*l sia effettivamente sqrt(x)
    {
        for(int i = 0; i < x; i++)
        {
            if(i%(int)sqrt(x)==0 && i!=0)  //ogni volta che arrivo al lato vado a capo
                printf("\n");
            printf(" * ");
        }
        printf("\n");
    }
    else
    {
        printf("Non sembra un quadrato...\n");
    }
}

int getInt()
{
    int x;
    printf("Inserisca un numero intero(che formi un quadrato)(0 per uscire)>");
    scanf("%d", &x);
    return x;
}
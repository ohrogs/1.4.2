#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isEven(int);
int getInt();
bool loop();

int main()
{
    bool n;
    system("chcp 65001");
    do
    {
        /* code */
        n=loop();
    } while (n!=0);
    
    return 0;
}

bool loop()
{
    int n, contapari=0, contadispari=0;
    while (true)
    {
        n=getInt();
        if(n==-1)
            return false;
        else if(n==0)
            break;
        else if(isEven(n))
            contapari++;
        else
            contadispari++;        
    } 
    printf("Ci sono %d pari e %d dispari\n", contapari, contadispari);
    return true;
}

bool isEven(int k)
{
    return k%2==0;
}

int getInt()
{
    int n;
    do
    {
        printf("inserisca un numero(0 per concludere)(-1 per quittare)> ");
        scanf("%d", &n);
    } while (n<-1);
    printf("OK\n");
    return n;
}
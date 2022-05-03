#include <stdio.h>
#include <stdlib.h>
//programma che controlla se un numero sia pari o dispari
int main()
{
    int n;
    printf("Inserisca un n intero> ");
    scanf("%d", &n);
    if ((n%2)==0) //% ha la precedenza
    {
        printf("%d e' un numero pari", n);
    }
    else
    {
        printf("%d e' un numero dispari", n);
    }
    return 0;
}

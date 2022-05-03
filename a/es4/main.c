#include <stdio.h>
#include <stdlib.h>
//programma che controlla se un numero sia negativo, positivo oppure uguale a 0
int main()
{
    int n;
    printf("Inserisca un n intero> ");
    scanf("%d", &n);
    if (n == 0) //% ha la precedenza
    {
        printf("Ha inserito zero");
    }
    else if(n > 0)
    {
        printf("%d e' un numero maggiore di 0", n);
    }
    else
    {
        printf("%d e' un numero minore di 0", n);
    }
    return 0;
}

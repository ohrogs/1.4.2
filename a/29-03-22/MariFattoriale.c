#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n, aux;
    printf("Inserisca il numero>");
    scanf("%llu", &n);
    while(n < 0)
    {        
        printf("Inserisca un numero positivo>");
        scanf("%llu", &n);        
    }    
    if(n == 0 || n == 1)
    {
        printf("%llu! = 1", n);
        return 0;
    }
    else
    {
        aux = 1;
        for(int i = n; i > 0; i--)
        {
            aux *= i;
        }
    }
    printf("%llu! = %llu\n", n, aux);
    printf("%llu - %llu = %llu spazio decimale ancora a disposizione", ULLONG_MAX, aux, ULLONG_MAX-aux);
    return 0;
}
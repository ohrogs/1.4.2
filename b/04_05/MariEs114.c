#include "input.h"
#include "matematiche.h"

int contaCifreBinarie(int);

int main()
{
    int n=getInt("Inserisca un numero>");
    int k = contaCifreBinarie(n);
}

int contaCifreBinarie(int x)
{
    int i;
    for(i = 2; intElevation(2, i)<x; i+=2)
    {
        printf("2^%d = %d < %d\n", i, intElevation(2, i), x);
    }
    printf("2^%d = %d > %d\n", i, intElevation(2, i), x);    
    return i;    
}
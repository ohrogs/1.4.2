#include <stdio.h>
#include <stdlib.h>
//16 06 22
//cubo
int main(void)
{
    int L, V;
    printf("Inserisca lato>");
    scanf("%d", &L);
    if(L <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    V = L*L*L;
    printf("Lato = %d\nvolume = %d\n", L, V);
    return 0;
}
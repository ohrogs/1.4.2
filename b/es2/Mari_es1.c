#include <stdio.h>
#include <stdlib.h>
//16 06 22
//rettangolo
int main(void)
{
    int b, h, p2, A;
    printf("Inserisca base>");
    scanf("%d", &b);
    if(b <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    printf("Inserisca altezza>");
    scanf("%d", &h);
    if(h <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    p2 = 2*(b + h);
    A = b * h;
    printf("base = %d\naltezza = %d\nA = %d\n2p = %d\n", b, h, A, p2);
    return 0;
}
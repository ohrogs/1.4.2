#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Inerisca il numero1>");
    scanf("%d", &n1);
    printf("Inerisca il numero2>");
    scanf("%d", &n2);
    printf("Inerisca il numero3>");
    scanf("%d", &n3);
    if((n2-n1) == (n3-n2))
    {
        printf("la serie dei tre numeri e' una progressione aritmetica");
    }
    else
    {
        printf("la serie dei tre numeri NON e' una progressione aritmetica");
    }
    return 0;
}
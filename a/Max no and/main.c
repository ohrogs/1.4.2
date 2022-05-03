#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, max;
    printf("inserire numero 1>");
    scanf("%d", &n1);
    max = n1;
    printf("inserire numero 2>");
    scanf("%d", &n2);
    if(n2 > max)
    {
        max = n2;
    }
    printf("inserire numero 3>");
    scanf("%d", &n3);
    if(n3 > max)
    {
        max = n3;
    }
    printf("Il numero piu' grande e' %d", max);
}
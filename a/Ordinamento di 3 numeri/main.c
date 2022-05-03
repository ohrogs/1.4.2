#include <stdio.h>
#include <stdlib.h>
//17 03 22
int main()
{
    int n1, n2, n3, max, min;
    printf("inserire numero 1>");
    scanf("%d", &n1);
    max = n1;
    min = n1;
    printf("inserire numero 2>");
    scanf("%d", &n2);
    if(n2 > max)
    {
        max = n2;
    }
    printf("inserire numero 3>");
    scanf("%d", &n3);    
    if(n1 > n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n2 > n3)
    {
        int aux = n3;
        n3 = n2;
        n2 = aux;
    }
    if(n1 > n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n2 > n3)
    {
        int aux = n3;
        n3 = n2;
        n2 = aux;
    }
    printf("%d %d %d", n1, n2, n3);
    return 0;
}
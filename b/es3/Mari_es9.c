#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//16 06 22
//quadrato e cubo di n
int main(void)
{
    float n;
    printf("inserisca n>");
    scanf("%f", &n);
    printf("n^2 =  %f\tn^3 = %f", pow(n, 2.0), pow(n, 3.0));
}
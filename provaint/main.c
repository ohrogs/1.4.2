#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//* * test casting pow di math.h
int main()
{
    int x = 5, aux;
    float y = 5;
    double z = 5;
    printf("%d 1\n", (int)pow(x, 2));
    printf("%d 2\n", (int)pow(y, 2));
    printf("%d 3\n", (int)pow(z, 2));
    aux = pow(x, 2);
    printf("%d 4\n", aux);
    aux = pow(y, 2);
    printf("%d 5\n", aux);
    aux = pow(z, 2);
    printf("%d 6\n", aux);
}
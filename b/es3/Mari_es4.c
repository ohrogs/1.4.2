#include <stdio.h>
#include <stdlib.h>
const float pi = 3.14;
//16 06 22
//sfera
int main(void)
{
    float r, V;
    printf("Inserisca raggio>");
    scanf("%f", &r);
    if(r <= 0)
    {
        printf("Ha inserito un numero negativo oppure 0");
        return 0;    
    }
    V = (float)(4/3)*pi*(r*r*r);
    printf("Raggio = %f\nvolume = %f\n", r, V);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//programma che calcola area e 2p triangolo rettangolo
int main()
{
    int cateto1, cateto2;
    float ipotenusa, area;
    printf("Inserisca cateto1> ");
    scanf("%d", &cateto1);
    printf("Inserisca cateto2> ");
    scanf("%d", &cateto2);
    area = ((float)(cateto1*cateto2)/2);
    printf("l'area del triangolo rettangolo e' %f", area);
    printf("cm\n");
    ipotenusa = sqrt((cateto1*cateto1) + (cateto2*cateto2));
    printf("il perimetro del triangolo rettangolo e' %f", (cateto1 + cateto2 + ipotenusa));
    printf("cm\n");
}

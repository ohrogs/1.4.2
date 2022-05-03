#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

float getFloat();
bool isRect(float, float, float);
int loop();

int main()
{
    int n;
    do
    {
        n=loop();
    } while (n != 0);
    
    return n;    
}

int loop()
{
    float cateto1, ipotenusa, cateto2;
    printf("Inserire il cateto1");
    cateto1 = getFloat();
    printf("Inserire il cateto2");
    cateto2 = getFloat(); 
    printf("Inserire l'ipotenusa");
    ipotenusa = getFloat();
    if (cateto1==0 || cateto2==0 || ipotenusa==0)
        return 0;
    if (isRect(cateto1, cateto2, ipotenusa))
        printf("Il triangolo e' rettangolo\n");
    else
        printf("Il triangolo non e' rettangolo\n");
    return 1;     
}

bool isRect(float cat1, float cat2, float ipo)
{
    return((cat1*cat1)+(cat2*cat2)==(ipo*ipo));
}

float getFloat()
{
    float x;
    do{
        printf("(inserisca 0 per interrompere)>");
        scanf("%f", &x);
    }while(x<0);
    return x;
}
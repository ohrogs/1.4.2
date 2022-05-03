#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

float getFloat();
float cprice(float, float);
int loop();
int main()
{
    system("chcp 65001");   
    int n;
    do
    {
        n=loop();
    } while (n != 0);
    
    return n;    
}

int loop()
{
    float price=getFloat(), perc;
    if (price==0)
        return 0;
    if(price>=50 && price <250)
        printf("il prezzo effettivo é: %f\n", cprice(price, 10.0));
    else
        printf("il prezzo effettivo é: %f\n", cprice(price, 15.0));
    return 1;     
}

float cprice(float x, float sconto)
{
    return x-((x*sconto)/100.0);
}

float getFloat()
{
    float x;
    do{
        printf("Inserisca il prezzo(inserisca 0 per interrompere)>");
        scanf("%f", &x);
    }while(x<0);
    return x;
}
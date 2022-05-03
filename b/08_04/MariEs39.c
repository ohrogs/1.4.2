#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

float getFloat();
float cprice(float, float);
char getChar();
int loop();
float execSwitch(char, float);
float execIf(char, float);
void instructions();

int main()
{
    system("chcp 65001");   
    int n;
    do
    {
        instructions();
        n=loop();
    } while (n != 0);
    
    return n;    
}

int loop()
{
    int n=0;
    float price=getFloat(), perc;
    char cat=getChar();    
    if (cat=='Q' || cat == 'q')
        return 0;
    
    printf("Il prezzo calcolato con gli switch: %f\n", execSwitch(cat, price));
    printf("Il prezzo calcolato con gli if: %f\n", execIf(cat, price));    
    
    return 1;     
}

float execSwitch(char cat, float price)
{
    switch (cat)
    {
    case 'S':
    case 's':
        return cprice(price, 20);
    
    case 'P':
    case 'p':
        return cprice(price, 15);

    case 'D':
    case 'd':
         return cprice(price, 25);

    default:
        return price;
    }
}

float execIf(char cat, float price)
{
    if(cat == 's' || cat == 'S')
        return cprice(price, 20);
    else if(cat == 'P' || cat == 'p')
        return cprice(price, 15);
    else if(cat == 'D' || cat ==  'd')
        return cprice(price, 25);
    else
        return price;
}

float cprice(float x, float sconto)
{
    return x-((x*sconto)/100.0);
}

float getFloat()
{
    float x;
    do{
        printf("Inserisca il prezzo tariffa piena>");
        scanf("%f", &x);
    }while(x<0);
    return x;
}

char getChar()
{
    char ca;
    fflush(stdin);
    printf("Inserisca la sua categoria>");
    scanf("%c", &ca);
    return ca;
}

void instructions()
{
    printf("legenda:\n");
    printf("-P per i pensionati\n");
    printf("-S per gli studenti\n");
    printf("-D per i disoccupati\n");
    printf("-Q per quittare\n");
}
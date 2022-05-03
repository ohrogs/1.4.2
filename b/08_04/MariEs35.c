#include<stdio.h>

/*Il programma stamperá 0 e 5 perché quando i==2 i diventerá 3
saltando il passo i==3 grazie al continue*/

int main(void)
{
    for(int i = 0; i < 8; i++)
    {
        if (i==2)
        {
            i++;
            continue;
        }
        else if (5*i==20)
        {
            break;
        }
        else
            printf(" %d ", 5*i);                
    }
    return 0;
}
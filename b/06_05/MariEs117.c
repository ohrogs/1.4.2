#include "input.h"

void triangolo(char, int);

int main()
{
    triangolo(getChar("Inserisca un carattere>"), getInt("Inserisca un numero>"));    
}

void triangolo(char c, int l)
{
    for(int i = 0; i < l; i++)
    {
        for (int j = 0; j <= l-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c ", c);
        }
        printf("\n");        
    }
}
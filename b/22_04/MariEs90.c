/*#include<stdio.h>
#include<stdlib.h>*/
//#include<stdbool.h>
#include<math.h>

#include "input.h"

int main()
{
    char c=getChar();
    if (c >='A' && c<='Z')
    {
        c+=32;
    }
    printf("Carattere in uscita: %c", c);        
}
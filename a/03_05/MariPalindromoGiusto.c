#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define DIM 32

int main()
{
    char string[DIM];
    bool check = true;
    printf("inserire la frase\n");
    fflush(stdin);
    gets(string);
    //puts(string);
    int h=strlen(string)-1;
    
    
    if(h <= 0) 
    {
        printf("La frase non é palindroma\n");
        return 0;
    }
    /*
    for(int i = 0; i < h; i++)
    {
        if (string[i] == ' ')
        {
            //string[i] = string[i+1];
            for (int j = i; j < h; j++)
            {
                string[j] = string[j+1]; //compatto la stringa
            }
            h--;
        }
        
    }*/
    printf("%d\n", h);
    puts(string);

    for (int i = 0 , j = h; (i <= h/2 || j >= h/2) && check; i++, j--) 
    {
        if(string[i] == ' ')
            i++;
        if(string[j] == ' ')
            j--;
        if(string[i] != string[j])
            check = false;
        printf("%c --> %c\n", string[i], string[j]);
    }

    if (check)
    {
        printf("La frase e' palindroma\n");        
    }
    else
    {
        printf("La frase non e' palindroma\n");
    }    
}
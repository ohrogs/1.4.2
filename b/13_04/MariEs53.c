#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int loop();
void instructions();
void contaPari();
void contaDispari();
char getChar();

int main()
{
    int n;
    do
    {
        instructions();
        n=loop();
    } while (n != 0);
    
}

int loop()
{
    char n=getChar();
    switch (n)
    {
    case 'p':
    case 'P':
        contaPari();
        return 1;
    case 'd':
    case 'D':
        contaDispari();
        return 1;  
    default:
        return 0;
    } 
}

void contaPari()
{
    for (int i = 2; i <= 100; i+=2)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

void contaDispari()
{
    for (int i = 1; i <= 100; i+=2)
    {
        printf("%d\t", i);
    }
    printf("\n");
}


void instructions()
{
    printf("Inserisca\n");
    printf("-P per i pari\n");
    printf("-D per i dispari\n");
    printf("-Q per quittare\n");
}

char getChar()
{
    char n;
    do
    {
        printf("selezioni> ");
        fflush(stdin);
        scanf("%c", &n);
    } while (n !='p' && n != 'P' && n !='d' && n != 'D' && n !='q' && n != 'Q');
    
    return n;    
}
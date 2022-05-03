#include <stdlib.h>
#include <stdio.h>
int main()
{

    int n1, n2;
    char car1;
    /*
    printf("Inserisca il carattere>");
    scanf("%c", &car1);
    printf("Inserisca il numero 1>"); //!brutto
    scanf("%d", &n1);
    printf("Inserisca il numero 2>");
    scanf("%d", &n2);
    */
    
    printf("Inserisca il numero 1>");
    scanf("%d", &n1);
    printf("Inserisca il numero 2>");
    scanf("%d", &n2);
    fflush(stdin);
    printf("Inserisca il carattere>");
    scanf("%c", &car1);
    

    switch (car1)
    {
    case '+':
        printf("%d %c %d = %d", n1, car1, n2, n1+n2);
        break;

    case '-':
        printf("%d %c %d = %d", n1, car1, n2, n1-n2);
        break;

    case '*':
        printf("%d %c %d = %d", n1, car1, n2, n1*n2);
        break;

    case '/':
        if(n2 == 0)
        {
            printf("non posso risolvere questa equazione");
            break;
        }
        printf("%d %c %d = %.3f", n1, car1, n2, (float)n1/(float)n2);
        break;
    
    case '%':
        if(n2 == 0)
        {
            printf("non posso risolvere questa equazione");
            break;
        }
        printf("%d %c %d = %f", n1, car1, n2, n1%n2);
        break;
    
    default:
        printf("simbolo non valido\n");
        break;
    }
    return 0;
}
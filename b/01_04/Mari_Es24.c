#include <stdlib.h>
#include <stdio.h>
int main()
{
    int check=1;
    while(check == 1)
    {
        int n1, n2;
        do
        {
            printf("Inerisca il numero1>");
            scanf("%d", &n1);
        }while(n1 < 100 || n1 > 200);

        do
        {
            printf("Inerisca il numero2>");
            scanf("%d", &n2);            
        } while (n2 < 100 || n2 > 200);
        
        printf("I numeri sono inseriti nel range corretto\nvuole continuare(1==sim, altro no)>");
        scanf("%d", &check);
    }
    return 0;
}
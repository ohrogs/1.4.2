#include <stdlib.h>
#include <stdio.h>
int main()
{
    int check=1;
    while(check == 1)
    {
        int var_a, var_b, var_c;
        
        printf("Inerisca il numero1>");
        scanf("%d", &var_a);
        printf("Inerisca il numero3>");
        scanf("%d", &var_c);
        do
        {
            printf("Inerisca il numero2>");
            scanf("%d", &var_b);            
        } while (var_b < var_a && var_b > var_c);                
        printf("I numeri sono inseriti nel range corretto\nvuole continuare(1==sim, altro no)>");
        scanf("%d", &check);
    }
    return 0;
}
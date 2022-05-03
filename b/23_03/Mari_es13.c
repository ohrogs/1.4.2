#include <stdio.h>
#include <stdlib.h>
//23 03 22
//scambioAux
int main(void)
{
    int primaVar=-1, secondaVar=-1;
    while(primaVar != 0 || secondaVar != 0)
    {
        printf("inserisca primo numero>");
        scanf("%d", &primaVar);
        printf("inserisca secondo numero>");
        scanf("%d", &secondaVar);
        if(primaVar == 0 && secondaVar == 0)
        {
            printf("Chiudo il programma...");
            return 0;
        }
        else if(primaVar == secondaVar)
        {
            printf("Non ha senso scambiare le variabili, sono identiche\n");
        }
        else
        {
            printf("primaVar = %d, secondaVar = %d\n", primaVar, secondaVar);
            //!scambio
            int aux = secondaVar;
            secondaVar = primaVar;
            primaVar = aux;
            printf("primaVar = %d, secondaVar = %d\n", primaVar, secondaVar);
        }
        
    }
    return 0;
}
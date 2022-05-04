#include "input.h"
#include <time.h>
#define DIM 100
bool game();
void instructions();


int main()
{
    bool n;
    srand(time(NULL));
    do
    {
        n=game();
    } while (n);
    
}

bool game()
{
    instructions();
    char registro[3][10]={"carta", "forbice", "sasso"};
    int choice=getInt(">"), cpu=1+rand()%3;
    printf("\n%d\n", cpu);
    if(choice != 1 && choice != 2 && choice != 3)
    {
        //printf("%d indica l'uscita\n", choice);
        return false;
    }
    else if(choice == cpu)
    {
        printf("la cpu ha %s, hai pareggiato\n\n", registro[cpu-1]);
        
    }    
    else if( (choice == 1 && cpu == 3) || (choice == 2 && cpu == 1) || (choice == 3 && cpu == 2))
    {
        printf("la cpu ha %s, hai vinto\n\n", registro[cpu-1]);
        
    }
    else
    {
        printf("la cpu ha %s, hai perso\n\n", registro[cpu-1]);
    }
    return true;
}

void instructions()
{
    printf("inserisca: la sua scelta:\n1)carta\n2)forbice\n3)sasso\n-oppure 0 per uscire\n");
}
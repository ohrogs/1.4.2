#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//stampare per ogni numero da 1 a 6 quante volte esce da un dado lanciato casualmente n volte
int main()
{
    unsigned int nLanci;
    do
    {
        srand(time(NULL));
        unsigned int conta1=0, conta2=0, conta3=0, conta4=0, conta5=0, conta6=0;
        char c;
        nLanci=100;
        
        for(unsigned int i = 0; i<nLanci; i++)
        {        
            int n = 1 + rand()%6;
            switch (n)
            {
            case 6:
                conta6++;
                break;

            case 5:
                conta5++;
                break;
            
            case 4:
                conta4++;
                break;

            case 3:
                conta3++;
                break;

            case 2:
                conta2++;
                break;

            case 1:
                conta1++;
                break;
            
            default:
                printf("\nerrore\n");
                break;
            }
        }
        
        printf("1 e' uscito %d volte\n2 e' uscito %d volte\n3 e' uscito %d volte\n4 e' uscito %d volte\n5 e' uscito %d volte\n6 e' uscito %d volte\nnLanci/6=%.3f\n", conta1, conta2, conta3, conta4, conta5, conta6, (float)nLanci/6.0);
        fflush(stdin);
        printf("Vuole Continuare(s/n)>");
        scanf("%c", &c);
        
        if(c != 's' && c != 'S')
        {
            break;
        }
    } while (nLanci != 0);
    
}
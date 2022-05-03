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
        do
        {
            printf("Quante volte vuole lanciare il dado?(Inserisca 0 per terminare)>");
            scanf("%d", &nLanci);       
        }while(nLanci < 0);

        if(nLanci == 0)
        {
            break;
        }
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
        printf("1 e' uscito %d volte %.2f", conta1, ((conta1/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");
        printf("2 e' uscito %d volte %.2f", conta2, ((conta2/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");
        printf("3 e' uscito %d volte %.2f", conta3, ((conta3/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");
        printf("4 e' uscito %d volte %.2f", conta4, ((conta4/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");printf("5 e' uscito %d volte %.2f", conta5, ((conta5/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");printf("6 e' uscito %d volte %.2f", conta6, ((conta6/(float)nLanci)*100.0));
        printf("%c", 37);
        printf("\n");

    } while (nLanci != 0);
    
}
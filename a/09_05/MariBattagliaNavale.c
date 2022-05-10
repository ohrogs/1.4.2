#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define DIM 20



void inizializzaCampi(char[][DIM], char[][DIM]);
void colpire(char[][DIM]);
void stampaCampo(char[][DIM]);
void stampaRigaColonna(char[][DIM], char, int);
void piazzaNavi(char[][DIM]);
void stampaChar(char, int);
void inserimento(char[][DIM], char, char, int, int, int);
void nave(char[][DIM], int);
void stampaIstruzioni();
bool isPossible(char [][DIM], char, int, int, int);
bool checkDefeat(char [][DIM]);

int main()
{
    char campo1[DIM][DIM], campo2[DIM][DIM]; //A = acqua, X = affondato/colpito
    bool g1=true, g2=true;
    int turno=1;
    inizializzaCampi(campo1, campo2);
    //stampaCampo(campo1);
    printf("Giocatore 1>\n");
    piazzaNavi(campo1);
    //stampaCampo(campo1);
    system("cls");
    printf("Giocatore 2>\n");
    piazzaNavi(campo2);
    //stampaCampo(campo2);
    system("cls");


    do //inizio del gioco
    {
        bool token = true;
        while(token && turno%2!=0)//il giocatore 1 gioca coi dispari
        {
            printf("GIOCATORE 1\n");
            int scelta;
            do
            {
                stampaIstruzioni();
                fflush(stdin);
                scanf("%d", &scelta);
                if(scelta == 1)
                {
                    colpire(campo2);
                    break;
                }
                else if(scelta == 2)
                {
                    stampaCampo(campo1);
                }
                else if(scelta == 3)
                {
                    g1=false;
                    break;
                }
            } while (true);
            
            g2=checkDefeat(campo2);
            token = false;
        }
        while(token && turno%2==0)//il giocatore 2 gioca coi pari
        {
            printf("GIOCATORE 2\n");
            int scelta;
            do
            {
                stampaIstruzioni();
                fflush(stdin);
                scanf("%d", &scelta);
                if(scelta == 1)
                {
                    colpire(campo1);
                    break;
                }
                else if(scelta == 2)
                {
                    stampaCampo(campo2);
                }
                else if(scelta == 3)
                {
                    g2=false;
                    break;
                }
            } while (true);
            g1=checkDefeat(campo1);
            token = false;         
        }
        turno++;        
    } while (g1 && g2);

    if(g1 && !g2)
    {
        system("cls");
        printf("Congratulazioni giocatore1 hai vinto il game\n");
    }
    else if(!g1 && g2)
    {
        system("cls");
        printf("Congratulazioni giocatore2 hai vinto il game\n");
    }
    
}

void stampaIstruzioni()
{
    printf("Inserire 1 per colpire\n");
    printf("Inserire 2 per stampare il proprio tabellone\n");
    printf("Inserire 3 per dichiarare la resa\n");
    printf(">");
}

bool isPossible(char campo[][DIM], char rc, int pos, int y, int n)//rc indica la modalita di inserimento mentre pos la riga/colonna dove inseriere, y il corrispettivo e n l'estensione
{
    if (rc == 'c'|| rc == 'C') 
    {
        for(int i = y; i < y+n; i++)
        {
            if(campo[i][pos]!='a')
            {
                printf("\nREINSERIRE\n");
                return false;
            }      
        }
    }
    else
    {
        for(int i = y; i < y+n; i++)
        {
            if(campo[pos][i]!='a')
            {
                printf("\nREINSERIRE\n");
                return false;
            }       
        }
    }
    return true;
}

void inserimento(char campo[][DIM], char rc, char c, int pos, int y, int n)
{
    if (rc == 'c'|| rc == 'C') //faccio l'inserimento effettivo.
    {
        for(int i = y; i < y+n; i++)
        {
            campo[i][pos]=c;        
        }
    }
    else
    {
        for(int i = y; i < y+n; i++)
        {
            campo[pos][i]=c;        
        }
    }
}

void nave(char campo[][DIM], int k)
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento nave da %d spazi>\n", k);

    do //porta aerei
    {
        do
        {
            printf("inserire in riga o in colonna?(r/c)>");
            fflush(stdin);
            scanf("%c", &rc);
        } while (rc != 'c' && rc != 'C' && rc != 'R' && rc != 'r');

        do
        {
            printf("specificare la riga o la colonna scelta>");
            scanf("%d", &pos);
        } while (pos<0 && pos>=DIM);

        stampaRigaColonna(campo, rc, pos);

        do
        {
            printf("inserire la posizione delle navi portaerei>");
            scanf("%d", &y);
        } while ((y<0 && y>=DIM) || DIM-y<k);
    } while (!isPossible(campo, rc, pos, y, k));
    inserimento(campo, rc, 'P', pos, y, k);
}

void piazzaNavi(char campo[][DIM]) 
{
    nave(campo, 5);
    system("cls");
    stampaCampo(campo);
    nave(campo, 4);
    system("cls");
    stampaCampo(campo);    
    nave(campo, 3);
    system("cls");
    stampaCampo(campo);
    nave(campo, 2);
    system("cls");
    stampaCampo(campo);
    nave(campo, 1);
    system("cls");
    stampaCampo(campo);
}

void stampaCampo(char campo[][DIM])
{
    
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%c", campo[i][j]);
        }
        printf("\n");
    }
    stampaChar('=', DIM);    
    system("pause");     
}

void inizializzaCampi(char campo1[][DIM], char campo2[][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            campo1[i][j] = 'a';
            campo2[i][j] = 'a';
        }
        //printf("ok\n");
    }
}

void stampaChar(char x, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", x);
    }
    printf("\n");
}

void stampaRigaColonna(char campo[][DIM], char rc, int k)
{
    if (rc == 'c'|| rc == 'C')//stampo la colonna
    {
        for (int i = 0; i < DIM; i++)
        {
            printf("%c\n", campo[i][k]);
        }       
    }
    else //stampo riga
    {
        for (int i = 0; i < DIM; i++)
        {
            printf("%c", campo[k][i]);
        }
        printf("\n");      
    }
}

bool checkDefeat(char campo[][DIM])
{
    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            if(campo[i][j]!='X' || campo[i][j]!='a')
                return true;           
        }
    }
    return false;
}

void colpire(char target[][DIM])
{
    int x,y;
    do
    {
        printf("Inserire x (orizzontale) dove colpire>");
        scanf("%d", &x);
    } while (x<0 && x>DIM);

    do
    {
        printf("Inserire y (verticale) dove colpire>");
        scanf("%d", &y);
    } while (y<0 && y>DIM);

    if (target[y][x]!='a')
    {
        target[y][x]='X';
        printf("COLPITO!!\n");
    }
    else
    {
        printf("mancato\n");       
    }
}
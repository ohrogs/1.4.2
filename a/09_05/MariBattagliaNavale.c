#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define DIM 20



void inizializzaCampi(char[][DIM], char[][DIM]);
void stampaCampo(char[][DIM]);
void stampaRigaColonna(char[][DIM], char, int);
void piazzaNavi(char[][DIM]);
void stampaChar(char, int);
void inserimento(char[][DIM], char, char, int, int, int);
void portAerei(char[][DIM]);
void fregata(char [][DIM]);
void naveDaBattaglia(char [][DIM]);
void sottomarino(char [][DIM]);
void boa(char [][DIM]);
void stampaIstruzioni();
void stampaIstruzioni1(); //istr per il primo round
bool isPossible(char [][DIM], char, int, int, int);
bool checkDefeat(char [][DIM]);

int main()
{
    char campo1[DIM][DIM], campo2[DIM][DIM]; //A = acqua, X = affondato/colpito
    bool g1=true, g2=true;
    inizializzaCampi(campo1, campo2);
    stampaCampo(campo1);
    int turno=1;
    piazzaNavi(campo1);
    stampaCampo(campo1);
    system("cls");
    piazzaNavi(campo2);
    stampaCampo(campo2);
    system("cls");


    do //inizio del gioco
    {
        bool token = true;
        while(token && turno%2!=0)//il giocatore 1 gioca coi dispari
        {
            token=false;
            system("cls");
            g2=checkDefeat(campo2);
            token = false;
        }
        while(token && turno%2==0)//il giocatore 2 gioca coi pari
        {
            token=false;
            system("cls");
            g1=checkDefeat(campo1);
            token = false;
        }
        turno++;        
    } while (g1 && g2);
    
}

bool isPossible(char campo[][DIM], char rc, int pos, int y, int n)//rc indica la modalita di inserimento mentre pos la riga/colonna dove inseriere, y il corrispettivo e n l'estensione
{
    if (rc == 'c'|| rc == 'C') 
    {
        for(int i = y; i < y+n; i++)
        {
            if(campo[i][pos]!='a')
                return false;       
        }
    }
    else
    {
        for(int i = y; i < y+n; i++)
        {
            if(campo[pos][i]!='a')
                return false;       
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



void portAerei(char campo[][DIM])
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento portaereis>\n");

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
        } while ((y<0 && y>=DIM) || DIM-y<5);
    } while (!isPossible(campo, rc, pos, y, 5));
    inserimento(campo, rc, 'P', pos, y, 5);
}

void naveDaBattaglia(char campo[][DIM])
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento nave da battaglia>\n");

    do
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
            printf("inserire la posizione della nave da battaglia>");
            scanf("%d", &y);
        } while ((y<0 && y>=DIM) || DIM-y<4);
    } while (!isPossible(campo, rc, pos, y, 4));
    inserimento(campo, rc, 'P', pos, y, 4);
}

void fregata(char campo[][DIM])
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento nave fregata>\n");

    do
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
            printf("inserire la posizione della nave da battaglia>");
            scanf("%d", &y);
        } while ((y<0 && y>=DIM) || DIM-y<3);
    } while (!isPossible(campo, rc, pos, y, 3));
    inserimento(campo, rc, 'P', pos, y, 3);
}

void sottomarino(char campo[][DIM])
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento sottomarino>\n");

    do
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
            printf("inserire la posizione della nave da battaglia>");
            scanf("%d", &y);
        } while ((y<0 && y>=DIM) || DIM-y<2);
    } while (!isPossible(campo, rc, pos, y, 2));
    inserimento(campo, rc, 'P', pos, y, 2);
}

void boa(char campo[][DIM])
{
    int pos=0, y=0;
    char rc='a';

    printf("inserimento sottomarino>\n");

    do
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
            printf("inserire la posizione della nave da battaglia>");
            scanf("%d", &y);
        } while ((y<0 && y>=DIM) || DIM-y<1);
    } while (!isPossible(campo, rc, pos, y, 1));
    inserimento(campo, rc, 'P', pos, y, 1);
}

void piazzaNavi(char campo[][DIM]) 
{
    portAerei(campo);
    system("cls");
    stampaCampo(campo);
    naveDaBattaglia(campo);
    system("cls");
    stampaCampo(campo);    
    fregata(campo);
    system("cls");
    stampaCampo(campo);
    sottomarino(campo);
    system("cls");
    stampaCampo(campo);
    boa(campo);
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
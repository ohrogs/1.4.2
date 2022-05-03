#include "input.h"
#include "caratteri.h"
#include "matematiche.h"
#include "array.h"
#include <time.h>

#define DIM 7

void popArray(float[], int);
void stampArray(float[], int, const float);
char days[DIM][15]={"Lunedi  ", "Martedi  ", "Mercoledi", "Giovedi  ", "Venerdi  ", "Sabato  ", "Domenica "};


int main()
{
    float v[DIM];
    popArray(v, DIM);
    /*float media=IntMediArray(v, DIM);
    printf("La media settimanale vale %.2f\n", media);*/
    stampArray(v, DIM, FloatMediArray(v, DIM));   
    
}

void popArray(float v[], int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++)
    {
        v[i]=getFloatStd("Inserisca la temperatura> ");
    }
}

void stampArray(float v[], int dim, const float media)
{
    printf("La temperatura media questa settimana é stata %.2f\n", media);
    printf("giorno\t\t\ttemp\t\tscostamento\n");
    for (int i = 0; i < dim; i++)
    {
        printf("%s\t\t%.2f\t\t%.2f\n", days[i], v[i], media - v[i]);
    }
    printf("\n");    
}
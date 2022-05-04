#include "input.h"
#include "matematiche.h"
#include <time.h>
#define DIM 100

float equilibra(float, float);

int main()
{
    float contoA=getFloat("Inserisca un numero positivo> "), contoB=getFloat("Inserisca un numero positivo> ");
    contoA=equilibra(contoA, contoB);
    contoB=contoA;
    printf("contoA = %f, contoB = %f", contoA, contoB);

}

float equilibra (float A, float B)
{
    return (A+B)/2;
}
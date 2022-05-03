#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <time.h>


#include "input.h"
/*#include "caratteri.h"
#include "matematiche.h" //lascio le funzioni nella dir del programma per semplificare il caricamento su teams
*/
bool loop();
void parteIntera(float);

int main()
{
    system("chcp 65001");
    bool n;
    do
    {
        n=loop();
    } while (n);
    return 0;
}

bool loop()
{
    float n=getFloatStd();
    if (n==0.0)
        return false;
    parteIntera(n);
    return true;
}

void parteIntera(float n)
{
    printf("parte intera: %d\n", (int)n);
    printf("parte decimale: %f\n", n-(int)n);

}

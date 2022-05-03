#include "input.h"
#include "caratteri.h"
#include "matematiche.h"
#include "array.h"
#include <time.h>




int main()
{
    int n1=getIntStd("Inserisca un numero>"), n2=getIntStd("Inserisca un altro numero>");
    printf("l'MCD e' %d", MCD(n1, n2));

    /*int i[getInt("TEST> ")];
    printf("%d pos in mem di i\n", i);*/

    
}
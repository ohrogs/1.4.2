#include <stdio.h>
//#include <stdlib.h>
/*ipotesi x=((10)^30)^100
realtá x=30005*/
int main(void)
{
    int x=5;
    for (int i = 1; i <= 100; i++)
        for (int j = 1; j <= 30; j++)
            for (int k = 0; k < 10; k++)
                x++;
    printf("\nx vale: %d", x);
}
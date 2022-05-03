#include <stdio.h>

/*Il programma stamperá:
6 perché alla fine del for i sará == 6 siccome mancano i break tutti i casi vengono raggiunti */

int main(void)
{
   int i=0;
   switch (i)
   {
   case 0: i++;
   case 1: for(;i<=5;++i);
   case 2: printf("%d", i);
   }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char casualChar();

int main()
{
    //system("chcp 65001");
    srand(time(NULL));
    for (int i=0; i<26; i++)
        printf("%c\t", casualChar());
    return 0;
}

char casualChar()
{
    //return ((int)'A' + rand()%((int)'Z'));
    return rand()%(91-65)+65;
}
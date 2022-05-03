#include <stdbool.h>

bool checkRange(char, char, char);
bool checkVocale(char);

bool checkRange(char c, char a, char z)
{
    return ( (c >= a) && (c <= z) );
}

bool checkVocale(char c)
{
    return c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U';
}
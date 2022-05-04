#include<math.h>
#include <stdbool.h>
const float pi = 3.14;
float circonf(float);
float areaCerchio(float);
float diametro(float);
float media(float, int);
bool isEven(int);
bool isArmstrong(int);
bool isPalindrome(int);
bool isMultiplo(int, int);
int contacifre(int);
int armstrong(int);
int intCubo(int);
int palindromo(int);
int intElevation(int, int);
int intMax(int ,int);
int intMin(int ,int);
int MCD(int, int);

int MCD(int a, int b)
{
    int MCD=1;
    if(a%b==0)
        return b;
    if (b%a==0)
        return a;
    for(int i=1; i<=intMin(a, b)/2; i++)
    {
        if((a%i==0) && (b%i==0))
            MCD=i;
    }
    return MCD;
}

/*int MCD(int a, int b)
{
    bool factorsA[INT_MAX], factorsB[INT_MAX], U[INT_MAX];
    int k=0, z=0;
    for (int i=2; i<=a; i++)
    {
        if(a%i==0)
        {
            factorsA[i]=true;
            k++;
        }                
    }
    for (int i=2; i<=b; i++)
    {
        if(b%i==0)
        {
            factorsB[i]=true;
            z++;
        }                
    }


    for (int i = 0; i <=intMax(k,z); i++)
    {
        if(factorsA[i]==factorsB[i])
        {
            U[i]=true;
        }
    }
    int max=0;
    for (int i = 0; i <=intMax(k,z); i++)
    {
        if(U[i]==true)
            max=i;      
    }
    return max;
}*/

int intMin(int a, int b)
{
    if(a<=b)
        return a;
    else
        return b;
}

int intMax(int a, int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

float media(float q, int div)
{
    if(q>0)
        return q/(float)div;
    else
        return 0.0;
}

bool isMultiplo(int n1, int n2)
{
    return (n2%n1==0);
}

bool isEven(int x)
{
    return x%2==0;
}

int contacifre(int x)
{
    int conta=0;
    while(x>0)
    {
        x/=10;
        conta++;
    }
    return conta;
}

int intCubo(int x)
{
    return intElevation(x, 3);
}

int intElevation(int x, int exp)
{
    double elev=pow(x, exp);
    return (int)elev;
}

bool isArmstrong(int x)
{
    return x==armstrong(x);
}

int armstrong(int x)
{
    int exp=contacifre(x), ris=0;
    //printf("\n exp di prova:%d \n", exp);
    while(x>0)
    {
        int resto=x%10;

        ris += intElevation(resto, exp);
        x/=10;
        //printf("\n resto di prova:%d \n", resto);
    }
    //printf("\n x di prova:%d \n");
    return ris;
}

float areaCerchio(float r)
{
    return r*r*pi;
}

float diametro(float r)
{
    return 2*r;
}

float circonf(float r)
{
    return pi*diametro(r);
}

int palindromo(int x)
{
    int og=0;

    while (x>0)
    {
        og*=10;
        og+= x%10;
        x/=10;
    }
    //printf("\nstampa ris %d\n", og);
    return og;    
}

bool isPalindrome(int x)
{
    return x==palindromo(x);
}
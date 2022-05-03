float media(float, int);
bool isEven(int);

float media(float q, int div)
{
    if(q>0)
        return q/(float)div;
    else
        return 0.0;
}

bool isEven(int x)
{
    return x%2==0;
}
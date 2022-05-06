int basicSearch(int [], int, int);
float IntMediArray(int [], int);
float FloatMediArray(float [], int);
int IntMaxArray(const int [], int); 
int IntMinArray(const int [], int); //const per evitare di paciugare
int IntUguaglianzaParallela(int [], int [], int);

int IntMinArray(const int v[], int dim) //ricerca CIECA del massimo
{
    int max=v[0], aux=0, i;
    for(i = 1; i < dim; i++)
    {
        if(v[i]<max)
        {
            aux=i; max=v[i];                        
        }

    }
    return aux; //ritorno l'indice in quanto mi dá piú informazioni
}

int IntUguaglianzaParallela(int v1[], int v2[], int dim)
{
    int conta=0;
    for(int i = 0; i < dim; i++)
    {
        if(v1[i]==v2[i])
            conta++;
    }
    return conta;
}

int IntMaxArray(const int v[], int dim) //ricerca CIECA del massimo
{
    int max=v[0], aux=0, i;
    for(i = 1; i < dim; i++)
    {
        if(v[i]>max)
        {
            aux=i; max=v[i];                        
        }

    }
    return aux; //ritorno l'indice in quanto mi dá piú informazioni
}

float FloatMediArray(float v[], int dim)
{
    float sum=0;
    for(int i = 0; i<dim; i++)
    {
        sum+=v[i];
    }
    return sum/(float)(dim+1);
}

float IntMediArray(int v[], int dim)
{
    int sum=0;
    for(int i = 0; i<dim; i++)
    {
        sum+=v[i];
    }
    return (float)sum/(float)(dim+1);
}

int basicSearch(int v[], int dim, int n)
{
    for(int i = 0; i<dim; i++)
    {
        if(n==v[i])
            return i;
    }
    return -1;
}
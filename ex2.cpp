#include <stdlib.h>
#include <stdio.h>

int aloca(float **ptr, int tam)
{
    *ptr = (float*)malloc(sizeof(float)*tam);
    if(*ptr == nullptr)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int aloca(float **ptr, int tam, float valor)
{
    *ptr = (float*)malloc(sizeof(float)*tam);
    if(*ptr == nullptr)
    {
        return 0;
    }
    else
    {
        for(float *aux = *ptr; aux < (*ptr+tam); aux++)
        {
            *aux = valor;
        }
        return 1;
    }
}

int main(void)
{
    float *v;
    aloca(&v,3,2.5);

    for(int i = 0; i < 3; i++)
    {
        printf("%f ",v[i]);
    }
    
    free(v);
    return 0;
}

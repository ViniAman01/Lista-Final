#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

void preenche(int *vet, int tam, int n)
{
    int *ptr = vet;
    for(ptr; ptr < (vet+tam); ptr++)
    {
        *ptr = n;
    }
}

void preenchefloat(float *vet, int tam, float n)
{
    float *ptr = vet;
    for(ptr; ptr < (vet+tam); ptr++)
    {
        *ptr = n;
    }
}

int main(void)
{
    int *v,tam,n,*ptr;
    float *vf,nf,*ptrf;
    printf("Tamanho: ");
    scanf("%d",&tam);

    v = alocdyn('i',tam);

    printf("Valor inteiro 'n': ");
    scanf("%d",&n);

    preenche(v,tam,n);

    for(ptr = v; ptr < (v+tam); ptr++)
    {
        printf("%d ",*ptr);
    }

    free(v);

    printf("\n\nTamanho do vetor de floats: ");
    scanf("%d",&tam);

    vf = alocdyn('f',tam);

    printf("Valor float 'n': ");
    scanf("%f",&nf);

    preenchefloat(vf,tam,nf);

    for(ptrf = vf; ptrf < (vf+tam); ptrf++)
    {
        printf("%f ",*ptrf);
    }

    free(vf);

    printf("\n");
}
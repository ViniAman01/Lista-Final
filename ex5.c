#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

void Le(int *v, int tam)
{
    int *ptr;
    for(ptr = v; ptr < (v+tam); ptr++)
    {
        printf("%d ",*ptr);
    }
    printf("\n");
}

void LeFloat(float *vf, int tam)
{
    float *ptrf;
    for(ptrf = vf; ptrf < (vf+tam); ptrf++)
    {
        printf("%f ",*ptrf);
    }
    printf("\n");
}

int main(void)
{
    int *v,tam,*ptr;
    float *vf,*ptrf;

    printf("Digite o tamanho do vetor de inteiros: ");
    scanf("%d",&tam);

    alcI(&v,tam);

    printf("Digite os valores: ");
    for(ptr = v; ptr < (v+tam); ptr++)
    {
        scanf("%d",ptr);
    }

    printf(">Valores do vetor: ");
    Le(v,tam);

    free(v);

    printf("\nDigite o tamanho do vetor de reais: ");
    scanf("%d",&tam);

    alcF(&vf,tam);

    printf("Digite os valores: ");
    for(ptrf = vf; ptrf < (vf+tam); ptrf++)
    {
        scanf("%f",ptrf);
    }

    printf("Valores do vetor: ");
    LeFloat(vf,tam);

    free(vf);

    return 0;
}
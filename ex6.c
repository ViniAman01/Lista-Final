#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

void LeVetor(int *v, int tam)
{
    printf("Digite os elementos do vetor: ");
    for(int *ptr = v; ptr < (v+tam); ptr++)
    {
        scanf("%d",ptr);
    }
}

int main(void)
{
    int n;
    int *v;

    printf("n: ");
    scanf("%d",&n);

    v = alcdyn('i',n);

    LeVetor(v,n);

    for(int *ptr = v; ptr < (v+n); ptr++)
    {
        printf("%d ",*ptr);
    }

    free(v);
    
    printf("\n");
    
    return 0;
}
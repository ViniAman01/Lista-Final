#include "dynfile.h"
#include <stdlib.h>

FILE *opnfile(char *nome,char *modo)
{
    FILE *arquivo;
    arquivo = fopen(nome,modo);
    if(arquivo == NULL)
    {
        perror("Erro na abertura");
        exit(1);
    }
    else
    {
        return arquivo;
    }
}

void *alocdyn(char tipo, int tam)
{
    void *dynV;
    switch(tipo)
    {   
        case 'i':
            dynV =  malloc(sizeof(int)*tam);
            break;
        case 'f':
            dynV = malloc(sizeof(float)*tam);
            break;
        case 'd':
            dynV = malloc(sizeof(double)*tam);
            break;
        case 'c':
            dynV = malloc(sizeof(char)*tam);
            break;
    }
    if(dynV == NULL)
    {
        perror("Erro na alocação");
        exit(1);
    }
    else
    {
        return dynV;
    }
}
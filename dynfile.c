#include "dynfile.h"
#include <stdlib.h>

void opnfile(FILE **arquivo,char *nome,char *modo)
{
    *arquivo = fopen(nome,modo);
    if(*arquivo == NULL)
    {
        perror("Erro na abertura");
        exit(1);
    }
}

void* alcd(char tipo, int tam)
{
    void *dynV;
    switch(tipo)
    {   
        case 'i':
            dynV =  (int*)malloc(sizeof(int)*tam);
            break;
        case 'f':
            dynV = (float*)malloc(sizeof(float)*tam);
            break;
        case 'd':
            dynV = (double*)malloc(sizeof(double)*tam);
            break;
        case 'c':
            dynV = (char*)malloc(sizeof(char)*tam);
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

void alcI(int **dynV,int tam)
{
    *dynV = (int*)malloc(sizeof(int)*tam);
}

void alcC(char **dynV,int tam)
{
    *dynV = (char*)malloc(sizeof(char)*tam);
}

void alcF(float **dynV,int tam)
{
    *dynV = (float*)malloc(sizeof(float)*tam);
}

void alcD(double **dynV,int tam)
{
    *dynV = (double*)malloc(sizeof(double)*tam);
}
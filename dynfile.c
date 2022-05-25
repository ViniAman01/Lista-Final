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

void alcI(int **dynV,int tam)
{
    *dynV = (int*)malloc(sizeof(int)*tam);
    if(dynV == NULL)
    {
        perror("Erro na alocação");
        exit(1);
    }
}

void alcC(char **dynV,int tam)
{
    *dynV = (char*)malloc(sizeof(char)*tam);
    if(dynV == NULL)
    {
        perror("Erro na alocação");
        exit(1);
    }
}

void alcF(float **dynV,int tam)
{
    *dynV = (float*)malloc(sizeof(float)*tam);
    if(dynV == NULL)
    {
        perror("Erro na alocação");
        exit(1);
    }
}

void alcD(double **dynV,int tam)
{
    *dynV = (double*)malloc(sizeof(double)*tam);
    if(dynV == NULL)
    {
        perror("Erro na alocação");
        exit(1);
    }
}
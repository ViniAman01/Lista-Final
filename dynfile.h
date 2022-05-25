#ifndef _DYNFILE_H
#define _DYNFILE_H
#include <stdio.h>

void opnfile(FILE **arquivo,char *nome, char *modo);
void alcI(int **dynV,int tam);
void alcC(char **dynV,int tam);
void alcF(float **dynV,int tam);
void alcD(double **dynV,int tam);

#endif
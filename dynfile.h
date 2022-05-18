#ifndef _DYNFILE_H
#define _DYNFILE_H
#include <stdio.h>

FILE *opnfile(char *nome, char *modo);
void *alcdyn(char tipo, int tam);

#endif
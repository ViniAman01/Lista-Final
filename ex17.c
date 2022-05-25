#include <stdio.h>
#include "dynfile.h"
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arquivo;
    char palavra[50];
    int cont = 0;
    opnfile(&arquivo,argv[1],"r");
    while(!feof(arquivo))
    {
        fscanf(arquivo,"%s",palavra);
        if(strcmp(argv[2],palavra) == 0)
        {
            cont++;
        }
    }
    fclose(arquivo);
    
    printf("A palavra '%s' aparece %d vezes!\n",argv[2],cont);
}
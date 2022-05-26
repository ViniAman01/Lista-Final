#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo;
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    char *ptr,c;
    int cont = 0;

    opnfile(&arquivo,argv[1],"r");
    
    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        for(ptr = vogais; ptr < (vogais+10); ptr++)
        {
            if(*ptr == c)
            {
                cont++;
            }
        }       
    } 
    
    fclose(arquivo);

    printf("O arquivo possui %d vogais!\n",cont);
}
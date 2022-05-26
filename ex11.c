#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo;
    int cont = 0;
    
    opnfile(&arquivo,argv[1],"r");

    while(!feof(arquivo))
    {
        if(fgetc(arquivo) == argv[2][0])
        {   
            cont++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' aparece %d vezes no arquivo!\n",argv[2][0],cont);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo;
    int cont = 1;
    char c;

    opnfile(&arquivo,argv[1],"r");
    
    while(!feof(arquivo))
    {
        if(fgetc(arquivo) == '\n')
        {
            cont++;
        }
    }

    printf("O arquivo tem %d linhas!\n",cont);
    return 0;
}
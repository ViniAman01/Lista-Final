#include <stdio.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo;
    char c,c2;
    int contC = 0;
    int contS = 0;
    int contL = 1;
    opnfile(&arquivo,argv[1],"r");
    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        c2 = fgetc(arquivo);
        if(c2 != EOF)
        {
            fseek(arquivo,(-1),SEEK_CUR);
        }
        if(c2 == 32 || c2 == EOF || c2 == '\n' || c2 == '\t') 
        {
            if(c != 32 && c != EOF && c != '\n' && c != '\t')
            {
               contS++;
            }
        }
        if(c != 32 && c != EOF && c != '\n' && c != '\t')
        {
            contC++;
        }
        if(c == '\n') 
        {
            contL++;
        }
    }
    
    fclose(arquivo);

    printf("Número de Caracteres: %d\nNúmero de Strings: %d\nNúmero de Linhas: %d\n",contC,contS,contL);

    return 0;
}
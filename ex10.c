#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    FILE *arquivo;
    int contC = 0;
    int contV = 0;
    int bol;
    char c,*ptr;

    opnfile(&arquivo,argv[1],"r");

    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        bol = 1;
        for(ptr = vogais; ptr < (vogais+5); ptr++)
        {
            if(*ptr == c || c == *(ptr+5))
            {
                contV++;
                bol = 0;
            }

        } 
        if(bol && c != 32 && c != '\n' && c != EOF)
        {
            contC++;
        }
    }
    
    fclose(arquivo);

    printf("O arquivo tem %d vogais e %d consoantes\n",contV,contC);

    return 0;
}
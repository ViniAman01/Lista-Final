#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(void)
{
    FILE *arquivo;
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    char *ptr,c;
    char nome[20];
    int cont = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s",nome);

    arquivo = opnfile(nome,"r");
    
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

    printf("O arquivo possui %d vogais\n",cont);
}
#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(void)
{
    FILE *arquivo;
    int cont = 1;
    char nome[20];
    char c;
    
    printf("Digite o nome do arquivo: ");
    scanf("%s",nome);

    arquivo = opnfile(nome,'r');
    
    while(!feof(arquivo))
    {
        if(fgetc(arquivo) == '\n')
        {
            cont++;
        }
    }

    printf("O arquivo tem %d linhas\n",cont);
    return 0;
}
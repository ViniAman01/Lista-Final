#include <stdio.h>
#include "dynfile.h"

int main(void)
{
    FILE *arquivo;
    int tel = -1;
    char nome[50];

    opnfile(&arquivo,"Newfile.txt","w+");

    printf("Digite um nome: ");
    scanf("%s",nome);
    printf("Digite um telefone: ");
    scanf("%d",&tel);


    while(tel != 0)
    {
        fprintf(arquivo,"%s %d\n",nome,tel);
        printf("Digite um nome: ");
        scanf("%s",nome);
        printf("Digite um telefone: ");
        scanf("%d",&tel);
    }

    fclose(arquivo);

    return 0;
}
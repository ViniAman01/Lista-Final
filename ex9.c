#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo;
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    char *ptr,c;
    char nome[20];
    int cont = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s",nome);

    arquivo = fopen(nome,"r");
    if(arquivo == NULL)
    {
        perror("Erro na abertura");
        exit(1);
    }
    
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

    printf("O arquivo possui %d vogais\n",cont);
}
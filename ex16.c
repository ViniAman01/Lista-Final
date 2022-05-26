#include <stdio.h>
#include "dynfile.h"
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arquivo,*arquivo2;
    char c,cidade[150],maiorcidade[150];
    int pos = 0;
    long int popul;
    int linha = 0;
    long int maiorpopul = 0;

    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,"Maiorpopulacao.txt","w+");

    while(!feof(arquivo))
    {    
        do
        {
            c = fgetc(arquivo);
        }while((c < 48 || c > 57) && c != EOF);

        pos = ftell(arquivo);

        fseek(arquivo,linha-pos,SEEK_CUR);

        fgets(cidade,pos-linha-1,arquivo);

        fscanf(arquivo,"%ld",&popul);
        
        if(popul > maiorpopul)
        {
            maiorpopul = popul;
            strcpy(maiorcidade,cidade);
        }

        linha = ftell(arquivo)+1;
    }

    fprintf(arquivo2,"A cidade com a maior população:\nÉ %s com %ld habitantes!",maiorcidade,maiorpopul);

    fclose(arquivo);
    fclose(arquivo2);

    printf("Arquivo 'Maiorpopulacao.txt' criado!\n");

    return 0;
}
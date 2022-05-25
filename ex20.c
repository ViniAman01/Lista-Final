#include <stdio.h>
#include "dynfile.h"

int idade(int dia, int mes, int ano, int diaA, int mesA, int anoA)
{
    int nasc,atual,idade;
    nasc = dia+mes*30+ano*365;
    atual = diaA+mesA*30+anoA*365;
    idade = (atual-nasc)/365;

    return idade;
}

int main(int argc, char *argv[])
{
    FILE *arquivo,*arquivo2;
    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,"Newfile.txt","w+");
    int pos = 0;
    int diaA,mesA,anoA;
    int dia,mes,ano;
    int linha = 0;
    char c,nome[50];

    printf("Data de hoje(Escreva XX XX XXXX): ");
    scanf("%d %d %d",&diaA,&mesA,&anoA);

    while(!feof(arquivo))
    {    
        do
        {
            c = fgetc(arquivo);
        }while((c < 48 || c > 57) && c != EOF);

        pos = ftell(arquivo);

        fseek(arquivo,linha-pos,SEEK_CUR);

        fgets(nome,pos-linha-1,arquivo);

        fscanf(arquivo,"%d %d %d",&dia,&mes,&ano);

        fprintf(arquivo2,"%s %d anos\n",nome,idade(dia,mes,ano,diaA,mesA,anoA));

        linha = ftell(arquivo)+1;
    }

    fclose(arquivo);
    fclose(arquivo2);

    printf("Arquivo 'Newfile.txt' criado!\n");

    return 0;
}
#include <stdio.h>
#include "dynfile.h"

typedef struct
{
    float n1;
    float n2;
    float n3;
    float n4;
}Aluno;

float media(Aluno aln, char nome[150])
{
    int med = 0;
    printf("Digite o nome do aluno: ");
    scanf("%[^\n]",nome);
    printf("Digite 4 notas: ");
    scanf("%f %f %f %f",&aln.n1,&aln.n2,&aln.n3,&aln.n4);
    med = aln.n1+aln.n2+aln.n3+aln.n4;
    med /= 4;   
    return med; 
}

int main(void)
{
    Aluno aln[10];
    char nome[150];
    float med;
    FILE *arquivo;

    opnfile(&arquivo,"Aprovados.txt","w+");

    for(int i = 0; i < 2; i++)
    {
        med = media(aln[i],nome);  
        if(med >= 7)
            fprintf(arquivo,"%s, média: %f\n",nome,med);
    }

    fclose(arquivo);

    printf("Arquivo 'Aprovados.txt' criado, com o nome e média dos aprovados!\n");

}
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char data[11];
    int CPF;
}Pessoa;

void preenche(Pessoa *p)
{
    printf("Digite o nome: ");
    scanf("%[^\n]",p->nome);
    
    printf("Digite a data de nascimento (XX/XX/XXXX): ");
    scanf("%s",p->data);

    printf("Digite o CPF: ");
    scanf("%d",&p->CPF);
}

void Le(Pessoa *p)
{
    printf("\nNome: %s\nNascimento: %s\nCPF: %d\n",p->nome,p->data,p->CPF);
}

int main(void)
{
    Pessoa p;

    preenche(&p);
    Le(&p);
    
    return 0;
}
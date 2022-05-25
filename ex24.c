#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

void percentual(int vetor[23], float total)
{
    FILE *arquivo;
    float porCEM;
    opnfile(&arquivo,"Votos.txt","w+");

    fprintf(arquivo,"Jogador\t|\tVotos\t|\t%%\n");

    for(int i = 0; i < 23; i++)
    {
        if(vetor[i] != 0)
        {
            porCEM = (vetor[i]/total)*100;
            fprintf(arquivo,"%d\t|\t%d\t|\t%.1f %%\n",i+1,vetor[i],porCEM);
        }
    }

    fclose(arquivo);
}

int main(void)
{
    int *jogadores,num,maiorI;
    int maior = 0;
    float total = 0;
    jogadores = (int *)calloc(23,sizeof(int));
    printf("Escolha um jogador de 1 a 23: ");
    while(num != 0)
    {
        scanf("%d",&num);
        if(num >= 1 && num <= 23 && num != 0)
        {
            jogadores[num-1]++;
            printf("Escolha um jogador de 1 a 23: ");
        }
        else
        {
            if(num != 0)
                printf("Valor inválido, escolha um jogador de 1 a 23, ou 0 para finalizar: ");
        }
    }

    for(int i = 0; i < 23; i++)
    {
        total += jogadores[i];
        if(jogadores[i] == maior)
        {
            maiorI = -1;
        }
        if(jogadores[i] > maior)
        {
            maior = jogadores[i];
            maiorI = i;
        }
    }

    if(maiorI != -1)
    {
        printf("\nO total de votos foi de %.0f votos.\nO jogador mais votado foi o jogador %d com %d votos!\n",total,maiorI+1,jogadores[maiorI]);
    }
    else
    {
        printf("\nHouve empate!\n");
    }

    percentual(jogadores,total);

    printf("\nArquivo 'Votos.txt' criado! Contendo os votos e a porcentagem de cada jogador.\n");

    return 0;
}

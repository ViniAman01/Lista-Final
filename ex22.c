#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo,*arquivo2;
    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,"Newfile.txt","w+");
    int L,C,posAN,i,j;
    int **matriz;

    fscanf(arquivo,"%d %d %d",&L,&C,&posAN);

    matriz = (int **)malloc(sizeof(int)*L);

    for(int k = 0; k < L; k++)
    {
        *(matriz+k) = (int *)malloc(sizeof(int)*C);
    }

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            matriz[i][j] = 1;
        }
    }

    for(int k = 0; k < posAN; k++)
    {
        fscanf(arquivo,"%d %d",&i,&j);
        printf("i: %d j:%d\n",i,j);
        matriz[i][j] = 0;
    }

    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            fprintf(arquivo2,"%d ",matriz[i][j]);
        }
        fprintf(arquivo2,"\n");
    }

    printf("Arquivo 'Newfile.txt' criado!\n");

    return 0;
}
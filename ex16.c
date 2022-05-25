#include <stdio.h>
#include "dynfile.h"
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *arquivo;
    char c,cidade[40],maiorcidade[40];
    long int posNUM;
    int popul;
    long int posLINHA = 0;
    int maiorpopul = 0;
    opnfile(&arquivo,"txt.txt","r");

    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        while(c < 48 || c > 57)
        {
            c = fgetc(arquivo);
        }
        posNUM = ftell(arquivo);
        while((c = fgetc(arquivo)) != '\n')
        {
            printf("%ld\n",ftell(arquivo));
        }
        posLINHA = ftell(arquivo);

        printf("posNUM: %ld\nposLINHA: %ld\n",posLINHA,posNUM);

        //fseek(arquivo,linha-pos,SEEK_CUR);

        //printf("{Posição: %ld}",ftell(arquivo));
        printf("Position: %ld\n",ftell(arquivo));

        //fseek(arquivo,pos-1,SEEK_SET);

        printf("Before: %ld\n",ftell(arquivo));

        fscanf(arquivo,"%d",&popul);

        if(popul > maiorpopul)
        {
            maiorpopul = popul;
            strcpy(maiorcidade,cidade);
        }
    }

    printf("%s %d\n",maiorcidade,maiorpopul);
    return 0;
}
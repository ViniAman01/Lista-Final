#include <stdio.h>
#include "dynfile.h"
#include <math.h>

int binario(int num)
{
    int bin = 0;
    int i = -1;
    while(num > 0)
    {
        i++;
        bin += (num % 2)*pow(10,i);
        num /= 2;
    }

    return bin;
}

int main(void)
{
    FILE *arquivo;
    opnfile(&arquivo,"Newfile.txt","w+");
    int v[10];

    printf("Digite 10 números inteiros: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&v[i]);
        fprintf(arquivo,"%d\n",binario(v[i]));
    }    

    fclose(arquivo);

    printf("Arquivo 'Newfile.txt' criado!\n");

    return 0;
}
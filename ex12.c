#include <stdio.h>
#include <stdlib.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    char alfabeto[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int *cont;
    char c;
    FILE *arquivo;
    
    opnfile(&arquivo,argv[1],"r");
    

    cont = (int*)calloc(26,sizeof(int));

    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        for(int i = 0; i < 26; i++)
        {
            if(c == alfabeto[i] || c == alfabeto[i+26])
            {
                cont[i]++;
            }
        }
    }

    fclose(arquivo);

    printf("As letras do alfabeto e a contagem das suas aparições: \n");
    for(int i = 0; i < 26; i++)
    {
        printf("Letra %c apareceu %d vezes.\n",alfabeto[i],cont[i]);
    }
}
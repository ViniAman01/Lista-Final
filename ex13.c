#include <stdio.h>
#include "dynfile.h"
#include <stdbool.h>

int main(int argc, char *argv[])
{
    bool bin;
    FILE *arquivo,*arquivo2;
    char vogais[10] = {'a','e','i','o','u','A','E','I','O','U'};
    char c;
    
    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,"Newfile.txt","w+");
    

    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        bin = false;
        for(int i = 0; i < 5; i++)
        {
            if(c == vogais[i] || c == vogais[i+5])
            {
                bin = true;   
            }
        }
        if(bin)
        {
            fputc('*',arquivo2);
        }
        if(!bin && c != EOF)
        {
            fputc(c,arquivo2);
        }
    }

    fclose(arquivo);
    fclose(arquivo2);

    printf("Arquivo 'Newfile.txt' criado!\n");
}
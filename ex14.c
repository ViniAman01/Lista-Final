#include <stdio.h>
#include <ctype.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo,*arquivo2;
    char c;
    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,"Newfile.txt","w+");
    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        if(c != EOF)fputc(toupper(c),arquivo2);
    }
    fclose(arquivo);
    fclose(arquivo2);
    printf("Arquivo 'Newfile.txt' criado!\n");
    return 0;
}
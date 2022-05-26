#include <stdio.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo,*arquivo2,*arquivo3;
    char c;

    opnfile(&arquivo,argv[1],"r");
    opnfile(&arquivo2,argv[2],"r");
    opnfile(&arquivo3,"Newfile.txt","w+");

    while(!feof(arquivo))
    {
        c = fgetc(arquivo);
        if(c != EOF) fputc(c,arquivo3);
    }

    fputc('\n',arquivo3);

    while(!feof(arquivo2))
    {
        c = fgetc(arquivo2);
        if(c != EOF) fputc(c,arquivo3);
    }
    
    fclose(arquivo);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Arquivo 'Newfile.txt' criado!\n");
    return 0;
}
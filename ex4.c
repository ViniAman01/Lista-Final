#include <stdio.h>
#include "dynfile.h"

int main(void)
{
    FILE *arquivo;
    char c;
    
    opnfile(&arquivo,"arq.txt","w+");
    c = fgetc(stdin);

    while(c != '0')
    {
        fputc(c,arquivo);
        c = fgetc(stdin);
    }

    fclose(arquivo);
}
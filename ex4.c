#include <stdio.h>
#include "dynfile.h"

int main(int argc, char *argv[])
{
    FILE *arquivo;
    char c;
    arquivo = opnfile(argv[1],"w+");
    c = fgetc(stdin);
    while(c != '0')
    {
        fputc(c,arquivo);
        c = fgetc(stdin);
    }
    fclose(arquivo);
}
#include <stdio.h>
#include <stdlib.h>

int dynstr(char *str)
{
    char c;
    int i = 0;
    while(c != 10)
    {
        scanf("%c",&c);
        if(c != 10)
        {
            str[i] = c;
            str = (char*)realloc(str,sizeof(char)+sizeof(char)*i);
            i++;
        }
    }
    str[i] = '\0';
}

int main(void)
{
    char *str;
    str = (char*)malloc(sizeof(char));
    printf("Digite a string: ");
    dynstr(str);
    printf("String %s\n",str);
    return 0;
}
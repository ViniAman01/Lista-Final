#include "ex1.h"
#include <stdlib.h>

int aloca(int **ptr, int tam)
{   
    *ptr = (int*)malloc(sizeof(int)*tam);
}
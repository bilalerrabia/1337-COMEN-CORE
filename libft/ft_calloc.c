#include <stdlib.h>
void *calloc(int nmemb, int size)
{
    return (malloc(nmemb * size));
}
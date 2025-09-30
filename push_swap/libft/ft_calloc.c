#include <stdlib.h>
#include <stddef.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    size_t total;
    unsigned char *ptr;

    total = nmemb * size;
    ptr = malloc(total);
    i = 0;
    while (i < total)
    {
        ptr[i] = 0;
        i++;
    }
    return (void *)ptr;
}
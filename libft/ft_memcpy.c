#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *ptr1;
    const char *ptr2;

    if (!dest && !src)
        return NULL;
    ptr1 = (char *)dest;
    ptr2 = (const char *)src;
    i = 0;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return dest;
}
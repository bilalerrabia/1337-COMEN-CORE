#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;
    size_t i;

    str = s;
    i = 0;
    while (i < n)
    {
        if ((unsigned char)c == str[i])
            return (void *)(str + i);
        i++;
    }
    return (NULL);
}
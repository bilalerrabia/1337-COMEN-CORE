#include <stddef.h>

char *ft_memmove(char *dest, const char *src, int n)
{
    int i;

    if (!dest && !src)
        return (NULL);
    if (dest < src)
    {
        i = 0;
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    else if (dest > src)
    {
        i = n - 1;
        while (i >= 0)
        {
            dest[i] = src[i];
            i--;
        }
    }
    return (dest);
}
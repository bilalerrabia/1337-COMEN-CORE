#include <stddef.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t j;
    size_t src_len;

    src_len = 0;
    j = 0;
    while (src[src_len])
        src_len++;
    if (dsize == 0)
        return (src_len);
    while (j < dsize - 1 && src[j])
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return (src_len);
}
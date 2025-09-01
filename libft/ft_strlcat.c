#include <stddef.h>

static size_t ft_strlen(char *str)
{
    size_t i = 0;
    while (str[i])
        i++;
    return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;

    if (dst_len >= dsize)
        return dsize + src_len;

    i = 0;
    while (src[i] && dst_len + i < dsize - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}
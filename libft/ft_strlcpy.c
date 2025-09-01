int  ft_strlcpy(char *dst, char *src, int dsize)
{
    int j;
    int src_len;

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
static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int  ft_strlcat(char *dst, char *src, int dsize)
{
    int i;
    int j;
    int dst_len;
    int src_len;

    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (i == dsize)
        return (dsize + src_len);
    while (i < dsize - 1 && src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}
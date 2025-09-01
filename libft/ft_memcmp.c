int ft_memcmp(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while (i < n && s1[i] == s2[i])
        i++;
    if (n == i)
        return (0);
    return (s1[i] - s2[i]);
}
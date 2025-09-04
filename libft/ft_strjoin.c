#include <stdlib.h>

static int ft_strlen(char const *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int total_len;
    char *res;

    total_len = ft_strlen(s1);
    total_len += ft_strlen(s2);
    res = malloc(total_len + 1);
    i = 0;
    j = 0;
    while (s1[i])
        res[j++] = s1[i++];
    i = 0;
    while (s2[i])
        res[j++] = s2[i++];
    res[j] = '\0';
    return (res);
}
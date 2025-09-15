#include "get_next_line.h"

int ft_strlen(const char *str)
{
    int i;

    if (!str)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int is_not_there(char *str, char car)
{
    int i;

    if (!str)
        return (1);
    i = 0;
    while (str[i])
    {
        if (str[i] == car)
            return (0);
        i++;
    }
    return (1);
}

char *ft_strjoin(char *s1, char const *s2)
{
    int i;
    int j;
    int total_len;
    char *res;

    if (!s1 && !s2)
        return (NULL);
    total_len = ft_strlen(s1) + ft_strlen(s2);
    res = malloc(total_len + 1);
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    if (s1)
    {
        while (s1[i])
            res[j++] = s1[i++];
    }
    i = 0;
    if (s2)
    {
        while (s2[i])
            res[j++] = s2[i++];
    }
    res[j] = '\0';
    free(s1);
    return (res);
}
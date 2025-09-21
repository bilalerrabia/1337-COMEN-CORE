#include "get_next_line_bonus.h"

int ft_strlen(const char *s)
{
    int i = 0;
    if (!s)
        return (0);
    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    int i = 0;
    char *dup;

    if (!s)
        return (NULL);
    dup = malloc(ft_strlen(s) + 1);
    if (!dup)
        return (NULL);
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i = 0;
    char *sub;

    if (!s)
        return (NULL);
    if (start >= (unsigned int)ft_strlen(s))
        return (ft_strdup(""));
    if (len > (size_t)(ft_strlen(s) - start))
        len = ft_strlen(s) - start;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    while (i < len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    return (NULL);
}

char *ft_strjoin(char *s1, char *s2)
{
    int i = 0, j = 0;
    char *res;

    if (!s1 && !s2)
        return (NULL);
    res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!res)
        return (NULL);
    if (s1)
        while (s1[i])
        {
            res[i] = s1[i];
            i++;
        }
    if (s2)
        while (s2[j])
            res[i++] = s2[j++];
    res[i] = '\0';
    free(s1);
    return (res);
}
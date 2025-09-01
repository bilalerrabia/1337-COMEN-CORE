#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int total_len;
    char *res;

    total_len = 0;
    while(s1[total_len])
        total_len++;
    while(s2[total_len])
        total_len++;
    res = malloc(total_len + 1);
        if(!res)
            return (NULL);
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
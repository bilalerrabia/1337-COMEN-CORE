#include <stdlib.h>

char *ft_strdup(const char *str)
{
    int i;
    char *res;

    i = 0;
    while (str[i])
        i++;
    res = malloc(i + 1);
    i = 0;
    while (str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
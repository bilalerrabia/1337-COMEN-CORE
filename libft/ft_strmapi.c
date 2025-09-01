#include <stdlib.h>

char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *res;

    while (str[len])
        len++;
    res = malloc(len + 1);
    if (!res)
        return (NULL);
    i = 0;
    while (i < len)
    {
        res[i] = (*f)(i, str[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}
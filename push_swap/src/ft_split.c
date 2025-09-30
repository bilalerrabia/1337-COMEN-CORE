#include "push_swap.h"

int count_words(const char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i])
        {
            count++;
            while (s[i] != c && s[i])
                i++;
        }
    }
    return (count);
}

char **return_zero()
{
    char **res;

    res = malloc(sizeof(char *));
    res[0] = NULL;
    return (res);
}

char *get_word(const char *s, int *i, char c)
{
    int j;
    char *str;

    j = *i;
    while (s[j] != c && s[j])
        j++;
    str = malloc(j - (*i) + 1);
    if (!str)
        return (NULL);
    j = 0;
    while (s[*i] != c && s[*i])
    {
        str[j] = s[*i];
        j++;
        (*i)++;
    }
    str[j] = '\0';
    return (str);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int i;
    int j;
    int words;

    i = 0;
    j = 0;
    words = count_words(s, c);
    if (words == 0)
        return (return_zero());
    res = malloc((words + 1) * sizeof(char *));
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i])
            res[j++] = get_word(s, &i, c);
    }
    res[j] = NULL;
    return (res);
}
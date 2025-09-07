#include <stdlib.h>
#include <stddef.h>

static int is_in_set(char c, const char *set)
{
    size_t i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t i;
    char *trimmed;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    while (end > start && is_in_set(s1[end - 1], set))
        end--;
    trimmed = malloc(end - start + 1);
    if (!trimmed)
        return (NULL);
    i = 0;
    while (start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';
    return (trimmed);
}
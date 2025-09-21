#include "get_next_line_bonus.h"

static char *get_line(char *remainder)
{
    char *newline;
    int len;

    if (!remainder || !*remainder)
        return (NULL);
    newline = ft_strchr(remainder, '\n');
    if (newline)
        len = newline - remainder + 1;
    else
        len = ft_strlen(remainder);
    return (ft_substr(remainder, 0, len));
}

static char *keep_next_line(char *remainder)
{
    char *newline;
    int start;

    if (!remainder)
        return (NULL);
    newline = ft_strchr(remainder, '\n');
    if (!newline)
    {
        free(remainder);
        return (NULL);
    }
    start = (newline - remainder) + 1;
    if (!remainder[start])
    {
        free(remainder);
        return (NULL);
    }
    return (ft_substr(remainder, start, ft_strlen(remainder) - start));
}

char *get_next_line(int fd)
{
    static char *remainder[OPEN_MAX];
    char *buff;
    char *line;
    int bytes;

    if (fd < 0 || BUFFER_SIZE <= 0 || fd >= OPEN_MAX)
        return (NULL);
    buff = malloc(BUFFER_SIZE + 1);
    if (!buff)
        return (NULL);
    bytes = 1;
    while (!ft_strchr(remainder[fd], '\n') && bytes > 0)
    {
        bytes = read(fd, buff, BUFFER_SIZE);
        if (bytes < 0)
        {
            free(buff);
            return (NULL);
        }
        buff[bytes] = '\0';
        remainder[fd] = ft_strjoin(remainder[fd], buff);
    }
    free(buff);
    line = get_line(remainder[fd]);
    remainder[fd] = keep_next_line(remainder[fd]);
    return (line);
}
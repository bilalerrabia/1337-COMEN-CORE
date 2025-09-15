#include "get_next_line.h"

char *get_line(char *remainder)
{
    char *line;
    int i;

    if (!remainder || !*remainder)
    return (NULL);
    i = 0;
    line = malloc(ft_strlen(remainder) + 1);
    while (remainder[i] && remainder[i] != '\n')
    {
        line[i] = remainder[i];
        i++;
    }
    if (remainder[i] == '\n')
    {
        line[i] = '\n';
        line[i + 1] = '\0';
    }
    else
    {
        line[i] = '\0';
    }
    return (line);
}

char *keep_next_line(char *remainder)
{
    char *new_rem;
    int i;
    int j;

    i = 0;
    j = 0;
    while (remainder[i] && remainder[i] != '\n')
        i++;
    if (!remainder[i])
    {
        free(remainder);
        return (NULL);
    }
    i++;
    new_rem = malloc(ft_strlen(remainder) - i + 1);
    while (remainder[i])
    {
        new_rem[j] = remainder[i];
        i++;
        j++;
    }
    new_rem[j] = '\0';
    free(remainder);
    return (new_rem);
}

char *get_next_line(int fd)
{
    static char *remainder;
    char *buff;
    char *line;
    int bytes;

    buff = malloc(BUFFER_SIZE + 1);
    bytes = 1;
    while (bytes > 0  && is_not_there(remainder, '\n'))
    {
        bytes = read(fd, buff, BUFFER_SIZE);
        if (bytes < 0)
        {
            free(buff);
            return (NULL);
        }
        buff[bytes] = '\0';
        remainder = ft_strjoin(remainder, buff);
    }
    free(buff);
    if (!remainder)
        return (NULL);
    line = get_line(remainder);
    remainder = keep_next_line(remainder);
    return (line);
}
// #include <stdio.h>

// int main(void)
// {
//     int fd = open("f.txt", O_RDONLY);
//     char *line;

//     while ((line = get_next_line(fd)))
//     {
//         printf("%s", line);
//         free(line);
//     }
//     close(fd);
//     return 0;
// }

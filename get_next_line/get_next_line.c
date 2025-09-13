#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 255

void ft_strncpy(char *dst, char *src, int n)
{
    int j = 0;
    while (j < n)
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
}

int ft_realloc(char **buff, int i, int *max_size)
{
    char *tmp = malloc(*max_size + 10);
    if (!tmp)
        return (0);
    ft_strncpy(tmp, *buff, i);
    free(*buff);
    *buff = tmp;
    *max_size += 10;
    return (1);
}

char *get_next_line(int fd)
{
    int i = 0;
    char tmp;
    int max_size = BUF_SIZE;
    int r;

    char *buff = malloc(BUF_SIZE + 1);
    if (!buff)
        return (NULL);

    while ((r = read(fd, &tmp, 1)) == 1 && tmp != '\n')
    {
        if (i >= max_size - 1) // keep space for '\0'
        {
            if (ft_realloc(&buff, i, &max_size) == 0)
                return NULL;
        }
        buff[i++] = tmp;
    }

    if (r == 0 && i == 0) // EOF and nothing read
    {
        free(buff);
        return NULL;
    }

    buff[i] = '\0';  // terminate string

    return (buff);
}

int main(void)
{
    int fd = open("f.txt", O_RDONLY);
    if (fd < 0)
        return 1;

    char *line;
    while ((line = get_next_line(fd)))
    {
        puts(line);
        free(line);
    }

    close(fd);
    return 0;
}
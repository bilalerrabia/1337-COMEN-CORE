#include <unistd.h>

void ft_putendl_fd(char *str, int fd)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    write(fd, str, i);
    write(fd, "\n", 1);
}
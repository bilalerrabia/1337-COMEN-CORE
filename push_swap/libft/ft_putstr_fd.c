#include <unistd.h>

void ft_putstr_fd(char *str, int fd)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    write(fd, str, i);
}
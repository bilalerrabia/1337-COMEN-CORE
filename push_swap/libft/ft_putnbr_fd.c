#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char car;

    if (n == -2147483648)
    {
        write(fd,"-2147483648",11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(-n, fd);
        return;
    }
    if (n <= 9)
    {
        car = n + '0';
        write(fd, &car, 1);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        car = n % 10 + '0';
        write(fd, &car,1);
    }
}
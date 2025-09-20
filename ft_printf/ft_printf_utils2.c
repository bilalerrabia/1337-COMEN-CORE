#include "ft_printf.h"

int ft_puthex_lower(unsigned int nbr)
{
    char *hex;
    int ret;

    ret = 0;
    hex = "0123456789abcdef";
    if (nbr < 16)
    {
        ft_putchar(hex[nbr % 16]);
        return (1);
    }
    else
    {
        ret += ft_puthex_lower(nbr / 16);
        ret += ft_putchar(hex[nbr % 16]);
    }
    return (ret);
}

int ft_puthex_upper(unsigned int nbr)
{
    char *hex;
    int ret;

    ret = 0;
    hex = "0123456789ABCDEF";
    if (nbr < 16)
    {
        ft_putchar(hex[nbr % 16]);
        return (1);
    }
    else
    {
        ret += ft_puthex_upper(nbr / 16);
        ret += ft_putchar(hex[nbr % 16]);
    }
    return (ret);
}

int ft_putbin(unsigned int n)
{
    char buffer[32];
    int i = 0;
    int count = 0;

    if (n == 0)
        return (write(1, "0", 1));
    while (n > 0)
    {
        buffer[i++] = (n % 2) + '0';
        n /= 2;
    }
    while (--i >= 0)
        count += write(1, &buffer[i], 1);
    return (count);
}

int ft_putdate(time_t t)
{
    struct tm *tm_info;
    char buffer[20];

    tm_info = localtime(&t);
    int len = strftime(buffer, sizeof(buffer), "%Y-%m-%d", tm_info);
    return write(1, buffer, len);
}

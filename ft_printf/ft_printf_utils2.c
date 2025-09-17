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


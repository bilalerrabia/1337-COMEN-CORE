#include "ft_printf.h"

int ft_putchar(char car)
{
    write(1, &car, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
    return (i);
}

int ft_putnbr(int nbr)
{
    int ret;

    ret = 0;
    if (nbr == INT_MIN)
    {
        ret = ft_putstr("-2147483648");
    }
    else if (nbr < 0)
    {
        ret += ft_putchar('-');
        ret += ft_putnbr(-nbr);
    }
    else if (nbr <= 9)
    {
        ret += ft_putchar(nbr + '0');
    }
    else
    {
        ret += ft_putnbr(nbr / 10);
        ret += ft_putchar(nbr % 10 + '0');
    }
    return (ret);
}

int ft_putunbr(unsigned int nbr)
{
    int ret;

    ret = 0;
    if (nbr <= 9)
    {
        ft_putchar(nbr + '0');
        return (1);
    }
    else
    {
        ret += ft_putunbr(nbr / 10);
        ret += ft_putchar(nbr % 10 + '0');
    }
    return (ret);
}

int ft_putptr(void *ptr)
{
    int ret = 0;

    if (!ptr)
        return ft_putstr("(nil)");
    ret += ft_putstr("0x");
    ret += ft_puthex_lower((unsigned long)ptr);
    return (ret);
}
#include "ft_printf.h"

static int print_case1(char car,va_list *args, int *len)
{
    int ret;

    if (car == 'c')
        ret = ft_putchar(va_arg(*args, int));
    else if (car == 's')
        ret = ft_putstr(va_arg(*args, char *));
    else if (car == 'd' || car == 'i')
        ret = ft_putnbr(va_arg(*args, int));
    else if (car == 'u')
        ret = ft_putunbr(va_arg(*args, unsigned int));
    else if (car == 'x')
        ret = ft_puthex_lower(va_arg(*args, unsigned int));
    else if (car == 'X')
        ret = ft_puthex_upper(va_arg(*args, unsigned int));
    else if (car == 'p')
        ret = ft_putptr(va_arg(*args, void *));
    else if (car == '%')
        ret = ft_putchar('%');
    else if (car == 'b')
        ret = ft_putbin(va_arg(*args, unsigned int));
    else if (car == 'k')
        ret = ft_putdate(va_arg(*args, time_t));
    else if (car == 'n')
{
    int *ptr = va_arg(*args, int *);
    *ptr = *len;   // store total chars written so far
    ret = 0;       // no chars printed for %n
}

    else
        ret = 0;
    return (ret);
}

int ft_printf(char *str, ...)
{
    va_list args;
    int i;
    int len;

    i = 0;
    len = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            len += print_case1(str[++i], &args, &len);
        }
        else
        {
            len += ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return (len);
}
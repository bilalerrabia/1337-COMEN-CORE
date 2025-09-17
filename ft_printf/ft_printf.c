#include "ft_printf.h"

static int print_case1(char car,va_list *args)
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
        ret = ft_putchar(va_arg(*args, int));
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
            len += print_case1(str[++i], &args);
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
// #include <stdio.h>
// int main()
// {
//     int len = 0;
//     int ret = ft_printf("=> %d in : %p", len, &len);
//     printf("=> %d in : %p", len, &len);
//     ft_printf("\n\n%i\n\n", ret);
// }
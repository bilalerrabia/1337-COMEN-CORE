#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int ft_printf(char *str, ...);
int ft_putchar(char car);
int ft_putstr(char *str);
int ft_putnbr(int nbr);
int ft_putunbr(unsigned int nbr);
int ft_puthex_lower(unsigned int nbr);
int ft_puthex_upper(unsigned int nbr);
int ft_putptr(void *ptr);
int ft_putdate(time_t t);
int ft_putbin(unsigned int n);

#endif
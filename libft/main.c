#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
int main()
{
    char str[27];
    ft_memset(str, 65, 2);
    ft_putstr_fd(str, 1);
}
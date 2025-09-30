
#include "push_swap.h"

static int is_not_number(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i;
    int num;
    int sign;

    sign = 1;
    i = 0;
    num = 0;
    if(is_not_number(str))
    {
        printf("Error\n");
        exit(1);
    }
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * sign);
}
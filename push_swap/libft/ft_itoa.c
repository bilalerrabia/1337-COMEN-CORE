#include <stdlib.h>

static void my_rev(char *str)
{
    int tmp, i = 0, end = 0;

    if (str[0] == '-')
        i++;
    while (str[end])
        end++;
    end--;
    while (i < end)
    {
        tmp = str[i];
        str[i] = str[end];
        str[end] = tmp;
        i++;
        end--;
    }
}

char *ft_itoa(int n)
{
    char *str = malloc(12);
    int i = 0;
    long num = n;

    if (!str)
        return (NULL);

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return (str);
    }

    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }

    while (num > 0)
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }
    str[i] = '\0';
    my_rev(str);
    return (str);
}

// #include <stdio.h>
// int main()
// {
//     puts(ft_itoa(-12));
//     puts(ft_itoa(12345));
//     puts(ft_itoa(0));
//     puts(ft_itoa(12));
// }
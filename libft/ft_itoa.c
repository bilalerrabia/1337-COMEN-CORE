#include <stdlib.h>

static void my_rev(char *str)
{
    int tmp;
    int end;
    int i;

    end = 0;
    i = 0;
    if(str[0] == '-')
        i++;
    while(str[end])
        end++;
    end--;
    while(i < end)
    {
        tmp = str[i];
        str[i] = str[end];
        str[end] = tmp;
        i++;
        end--;
    }
}

static char *return_zero(char *str)
{
    str[0] = '0';
    str[1] = '\0';
    return (str);
}

char *ft_itoa(int n)
{
    int i;
    char *str;

    str = malloc(13);
    i = 0;
    if (n == 0)
        return (return_zero(str));
    if(n < 0)
    {
        str[i++] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
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
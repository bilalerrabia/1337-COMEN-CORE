void ft_striteri(char *str, void (*f)(unsigned int,char*))
{
    unsigned int i;

    i = 0;
    while (str[i])
    {
        (*f)(i, str + i);
        i++;
    }
}
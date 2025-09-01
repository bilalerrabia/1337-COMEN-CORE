void bzero(char *s, int n)
{
    int i;

    i = 0;
    while(i < n)
        s[i++] = '\0';
}
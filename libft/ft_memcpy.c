char *memcpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while(i < n)
        dest[i] = src[i++];
}
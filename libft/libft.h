#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_isalpha(char c);
void ft_bzero(char *s, int n);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
char *ft_memcpy(char *dest, char *src, int n);
int  ft_strlcat(char* dst,char * src,int dsize);
int  ft_strlcpy(char* dst,char * src,int dsize);
// char *ft_memmove(char *dest, char *src, int n);
void *memchr(const void *s, int c, size_t n);
int ft_memcmp(char *s1, char *s2, int n);
// char *ft_strnstr(const char *big, const char *little, int len);
char *ft_strdup(char *str);
void *ft_calloc(int nmemb, int size);
char *ft_memset(void *s, int c, size_t n);
int ft_strlen(char *str);
int ft_atoi(char *str);
int ft_strncmp( char *s1, char *s2,int n);

// part 2:

// char *ft_substr(char const *s, unsigned int start, int len);
char *ft_strjoin(char const *s1, char const *s2);
// char *ft_strtrim(char const *s1, char const *set);
// char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int,char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
// void ft_putnbr_fd(int n, int fd);
#endif
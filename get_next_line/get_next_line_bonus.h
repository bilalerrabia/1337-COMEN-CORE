#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define OPEN_MAX 1024
#define BUFFER_SIZE 5

char *get_next_line(int fd);
int ft_strlen(const char *str);
char *ft_strdup(const char *s);
char *ft_substr(const char *s, unsigned int start, size_t len);
char *ft_strchr(const char *s, int c);
char *ft_strjoin(char *s1, char *s2);

#endif
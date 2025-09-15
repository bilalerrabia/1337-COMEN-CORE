#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 5

char *get_next_line(int fd);
int ft_strlen(const char *str);
int is_not_there(char *str, char c);
char *ft_strjoin(char *s1, char const *s2);

#endif

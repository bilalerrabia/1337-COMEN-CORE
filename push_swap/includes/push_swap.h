#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"
#define MAX_SIZE 100

typedef struct{
    int items[MAX_SIZE];
    int top;
}stack;
void push(stack *a, stack *b);
void swap(stack *a);
void ss(stack *a, stack *b);
void rotate(stack *a);
void rr(stack *a, stack *b);
void reverse_rotate(stack *a);
void rrr(stack *a, stack *b);
char **ft_split(char const *s, char c);
int ft_atoi(char *str);
#endif
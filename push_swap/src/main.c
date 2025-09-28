#include "../includes/push_swap.h"
#include <stdio.h>

int *super_atoi(int argc, char **argv, int *i)
{
    char **numbers;
    int *tab;

    *i = 0;
    tab = malloc(MAX_SIZE * sizeof(int));
    if (argc == 2)
        numbers = ft_split(argv[1], ' ');
    else
        numbers = &argv[1];
    while (argv[*i])
    {
        tab[*i] = ft_atoi(argv[*i]);
        (*i)++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int *tab;
    stack a;
    stack b;

    // printf("%d\n", argc);
    if (argc == 1)
        return (0);

    tab = super_atoi(argc, argv, &i);
    init(a, tab, i);
}

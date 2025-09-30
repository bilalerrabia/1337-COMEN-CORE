#include "../includes/push_swap.h"

int *super_atoi(int argc, char **argv, int *i)
{
    char **numbers;
    int *tab;

    *i = 0;
    tab = malloc(MAX_SIZE * sizeof(int));
    numbers = malloc(argc * sizeof(char *));
    if (argc == 2)
        numbers = ft_split(argv[1], ' ');
    else
        numbers = &argv[1];
    while (numbers[*i])
    {
        tab[*i] = ft_atoi(numbers[*i]);
        (*i)++;
    }
    (*i)--;
    return (tab);
}
void init_a_stack(stack *a, int* tab, int i)
{
    int j;

    j = 0;
    a->top = i + 1;
    while (i >= 0)
    {
        a->items[j] = tab[i];
        i--;
        j++;
    }
}
void print_stack(stack *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        printf("%d->",a->items[i]);
        i++;
    }
}
int main(int argc, char **argv)
{
    int i;
    int *tab;
    stack *a;
    // stack *b;

    printf("%d\n", argc);
    if (argc == 1)
        return (0);
    a = malloc(sizeof(stack));
    tab = super_atoi(argc, argv, &i);
    init_a_stack(a, tab, i);
    print_stack(a, a->top);
    // return (0);
    swap(a);
    printf("\n");
    print_stack(a, a->top);
    free(a);
}
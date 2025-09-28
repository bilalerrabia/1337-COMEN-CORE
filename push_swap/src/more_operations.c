#include "../includes/push_swap.h"


void reverse_rotate(stack *a)
{
    int tmp;
    int i;

    if (a->top <= 1)
        return;
    tmp = a->items[0];
    i = 0;
    while (i < a->top - 1)
    {
        a->items[i] = a->items[i + 1];
        i++;
    }
    a->items[a->top - 1] = tmp;
}
void rrr(stack *a, stack *b)
{
    reverse_rotate(a);
    reverse_rotate(b);
}
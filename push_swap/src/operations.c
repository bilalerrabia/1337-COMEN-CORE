#include "../includes/push_swap.h"

void push(stack *a, stack *b)
{
    if (b->top == 0 || a->top == MAX_SIZE)
        return;
    a->items[a->top] = b->items[b->top - 1];
    a->top++;
    b->top--;
}
void swap(stack *a)
{
    int tmp;

    if (a->top <= 1)
        return;
    tmp = a->items[a->top - 1];
    a->items[a->top - 1] = a->items[a->top - 2];
    a->items[a->top - 2] = tmp;
}
void ss(stack *a, stack *b)
{
    swap(a);
    swap(b);
}
void rotate(stack *a)
{
    int tmp;
    int i;

    if (a->top <= 1)
        return;
    tmp = a->items[a->top - 1];
    i = a->top - 1;
    while (i > 0)
    {
        a->items[i] = a->items[i - 1];
        i--;
    }
    a->items[0] = tmp;
}
void rr(stack *a, stack *b)
{
    rotate(a);
    rotate(b);
}
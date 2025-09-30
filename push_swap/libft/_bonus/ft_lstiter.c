#include "b_libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *ptr;

    if (!f)
        return;
    ptr = lst;
    while (ptr)
    {
        f(ptr->content);
        ptr = ptr->next;
    }
}
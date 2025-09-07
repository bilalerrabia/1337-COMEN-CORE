#include "b_libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list* ptr;

    if (!lst || !del)
        return;
    ptr = *lst;
    while (*lst)
    {
        (*lst) = ptr->next;
        (*del)(ptr->content);
        free(ptr);
        ptr = *lst;
    }
    *lst = NULL;
}
#include "b_libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *ptr;

    ptr = malloc(sizeof(t_list));
    if (!ptr)
        return (NULL);
    ptr->content = content;
    ptr->next = NULL;
    return (ptr);
}
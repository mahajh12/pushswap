#include "push_swap.h"

void swap(t_data *lst)
{
    int temp;
    if (!lst || !lst->next)
        return;
    temp = lst->content;
    lst->content = lst->next->content;
    lst->next->content = temp;
}

void sa(t_data *a)
{
    swap(a);
    ft_putstr("sa\n");
}

void sb(t_data *b)
{
    swap(b);
    ft_putstr("sb\n");
}

void ss(t_data *a, t_data *b)
{
    swap(a);
    swap(b);
    ft_putstr("ss\n");
}

#include "push_swap.h"

void rotate(t_data **lst)
{
    t_data *last_node;

    if (*lst == NULL || (*lst)->next == NULL)
        return;
    last_node = *lst;
    while (last_node->next)
        last_node = last_node->next;
    last_node->next = *lst;
    *lst = (*lst)->next;
    last_node->next->next = NULL;
}

void ra(t_data **a)
{
    rotate(a);
    ft_putstr("ra\n");
}

void rb(t_data **b)
{
    rotate(b);
    ft_putstr("rb\n");
}

void rr(t_data **a, t_data **b)
{
    rotate(a);
    rotate(b);
    ft_putstr("rr\n");
}
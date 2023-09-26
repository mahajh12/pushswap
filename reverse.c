#include "push_swap.h"

void reverse_rotate(t_data **lst)
{
    t_data *last_node;
    t_data *second_last_node;

    if (*lst == NULL || (*lst)->next == NULL)
        return;

    last_node = *lst;
    while (last_node->next->next)
        last_node = last_node->next;

    second_last_node = last_node;
    last_node = last_node->next;
    second_last_node->next = NULL;
    last_node->next = *lst;
    *lst = last_node;
}

void rra(t_data **a)
{
    reverse_rotate(a);
    ft_putstr("rra\n");
}

void rrb(t_data **b)
{
    reverse_rotate(b);
    ft_putstr("rrb\n");
}

void rrr(t_data **a, t_data **b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    ft_putstr("rrr\n");
}

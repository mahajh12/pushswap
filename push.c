#include "push_swap.h"

void push(t_data **src, t_data **dst)
{
    t_data *temp;

    if (*src == NULL)
        return;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dst;
    *dst = temp;
}

void pa(t_data **a, t_data **b)
{
    push(b, a);
    ft_putstr("pa\n");
}

void pb(t_data **a, t_data **b)
{
    push(a, b);
    ft_putstr("pb\n");
}
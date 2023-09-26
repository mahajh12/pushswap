#include "push_swap.h"

void sort_two_numbers(t_data **a)
{
    if ((*a)->content > (*a)->next->content)
        sa(*a);
}

void sort_three_numbers(t_data **a)
{
	if ((*a)->content > (*a)->next->content && (*a)->content > (*a)->next->next->content)
	{
		ra(a);
		if ((*a)->content > (*a)->next->content)
			sa(*a);
	}
	else if ((*a)->next->content > (*a)->content && (*a)->next->content > (*a)->next->next->content)
	{
		rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(*a);
	}
	else if ((*a)->next->next->content > (*a)->content && (*a)->next->next->content > (*a)->next->content)
	{
		if ((*a)->content > (*a)->next->content)
			sa(*a);
	}
}

// Helper function to find the position in the linked list where content is less than 'part'
int find_part(t_data *a, int part)
{
	int i;

	i = 0;
	while (a)
	{
		if (a->content < part)
		{
			return i;
		}
		a = a->next;
		i++;
	}
	return i;
}

// Helper function to rotate the linked list 's' in either direction
void best_rotate(t_data **s, int pos, int is_a)
{
	if (pos <= ft_lstsize(*s) / 2)
	{
		while (pos > 0)
		{
			if (is_a)
				ra(s);
			else
				rb(s);
			pos--;
		}
	}
	else
	{
		while (pos < ft_lstsize(*s))
		{
			if (is_a)
				rra(s);
			else
				rrb(s);
			pos++;
		}
	}
}

// Helper function to push back elements from linked list 'a' to 'b' 'i' times
void push_back_to_b(t_data **a, t_data **b, int i)
{
	int pos;

	while (i > 0)
	{
		pos = ft_lstmax_index(*b);
		best_rotate(b, pos, 0);
		pb(b, a);
		--i;
	}
}

void sort_4and5_numbers(t_data **a, t_data **b)
{
    int i;
    int pos;
    int size;

	i = 0;
    size = ft_lstsize(*a);
    while (i < size - 3)
    {
        pos = ft_lstmin_index(*a);
        best_rotate(a, pos, 1);
        pb(a, b);
        i++;
    }
    sort_three_numbers(a);
    while (i > 0)
    {
        pa(b, a);
        --i;
    }
}

void sort_big(t_data **a, t_data **b)
{
	int part;
	int i;
	int size;
	int pos;

	i = 0;
	part = 0;
	size = ft_lstsize(*a);
	while (ft_lstsize(*a) > 0)
	{
		if (size <= 100)
			part += size / 5;
		else
			part += size / 11 - 2;
		while (i < part)
		{
			if (ft_lstsize(*a) == 0)
				break ;
			pos = find_part(*a, part);
			best_rotate(a, pos, 1);
			pb(a, b);
			i++;
		}
	}
	push_back_to_b(a, b, i);
}

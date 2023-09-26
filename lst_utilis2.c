#include "push_swap.h"

void print_list(t_data *head)
{
    t_data *current;

    current = head;
    while (current != NULL)
    {
        printf("%d ", current->content);
        current = current->next;
    }
    printf("\n");
}

t_data	*ft_lstlast(t_data *lst)
{
	if (lst == NULL)
		return (0);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

t_data	*ft_lstnew(int content)
{
	t_data	*new;

	new = (t_data *)malloc(sizeof(t_data));
	if (new == NULL)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

int ft_lstmax_index(t_data *lst)
{
    int max_index;
    int max_value;
    int current_index;

    max_index = 0;
    max_value = lst->content;
    current_index = 1;
    lst = lst->next;
    while (lst)
    {
        if (lst->content > max_value)
        {
            max_value = lst->content;
            max_index = current_index;
        }
        lst = lst->next;
        current_index++;
    }
    return (max_index);
}

int ft_lstmin_index(t_data *lst)
{
    int min_index;
    int min_value;
    int current_index;

    min_index = 0;
    min_value = lst->content;
    current_index = 1;
    lst = lst->next;
    while (lst)
    {
        if (lst->content < min_value)
        {
            min_value = lst->content;
            min_index = current_index;
        }
        lst = lst->next;
        current_index++;
    }
    return (min_index);
}
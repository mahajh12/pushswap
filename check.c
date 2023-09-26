/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:26:49 by malhamel          #+#    #+#             */
/*   Updated: 2023/07/05 15:01:09 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_doubles(t_data *lst, int nb)
{
    while (lst)
    {
        if (lst->content == nb)
            return 1;
        lst = lst->next;
    }
    return 0;
}

int check_int(char *arg)
{
    int i;
	int num;

	i = 0;
    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (arg[i])
    {
        if (!ft_isdigit(arg[i]))
            return (1);
        i++;
    }
    if (i == 0 || (i == 1 && (arg[0] == '-' || arg[0] == '+')))
        return (1);
    num = ft_atoi(arg);
    if (num < -2147483648 || num > 2147483647)
        return (1);
    return (0);
}

int check_sorted(t_data *lst)
{
    while (lst && lst->next)
    {
        if (lst->content > lst->next->content)
            return (1);
        lst = lst->next;
    }
    return (0);
}

void free_arr(char **nb)
{
    int i;

    i = 0;
    while (nb[i])
    {
        free(nb[i]);
        i++;
    }
    free(nb);
}
void parse_input(char *arg, t_data **a)
{
    int i;
    char **nb;
    t_data *new_node;

    nb = ft_split(arg, ' ');
    if (nb == NULL)
        check_error();
    i = 0;
    while (nb[i])
    {
        if (check_int(nb[i]))
            check_error();
        new_node = ft_lstnew(ft_atoi(nb[i]));
        if (check_doubles(*a, ft_atoi(nb[i])))
            check_error();
        if (new_node)
            ft_lstadd_back(a, new_node);
        i++;
    }
    free_arr(nb);
}

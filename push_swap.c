/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:40:27 by malhamel          #+#    #+#             */
/*   Updated: 2023/07/05 14:07:52 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *av[])
{
	t_data *a;
	t_data *b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
    while (i < ac)
    {
        parse_input(av[i], &a);
        i++;
    }
	//  print_list(a);
	if (!(check_sorted(a)))
		return (0);
	 if (ft_lstsize(a) == 2)
         sort_two_numbers(&a);
    else if (ft_lstsize(a) == 3)
        sort_three_numbers(&a);
	 else if (ft_lstsize(a) == 4 || ft_lstsize(a) == 5)
		 sort_4and5_numbers(&a, &b);
	else
		sort_big(&a, &b);
    // print_list(a);
	ft_lstclear(&a);
    ft_lstclear(&b);
}

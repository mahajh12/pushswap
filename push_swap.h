/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:26:52 by malhamel          #+#    #+#             */
/*   Updated: 2023/07/05 15:00:42 by malhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct data
{
	int index;
	int		content;
	struct data *next;
}	t_data;

void	ft_putstr(char *s);
void	parse_input(char *arg, t_data **a);
void	check_error();
void	swap(t_data *lst);
void	sa(t_data *a);
void	sb(t_data *b);
void	ss(t_data *a, t_data *b);
void	push(t_data **src, t_data **dst);
void	pa(t_data **a, t_data **b);
void	pb(t_data **a, t_data **b);
void	rotate(t_data **lst);
void	ra(t_data **a);
void	rb(t_data **b);
void	rr(t_data **a, t_data **b);
void	reverse_rotate(t_data **lst);
void	rra(t_data **a);
void	rrb(t_data **b);
void	rrr(t_data **a, t_data **b);
void	print_list(t_data *head);
void	best_rotate(t_data **s, int pos, int is_a);
void	sort_two_numbers(t_data **a);
void	sort_three_numbers(t_data **a);
void	sort_4and5_numbers(t_data **a, t_data **b);
void	sort_big(t_data **a, t_data **b);
void	ft_lstadd_back(t_data **lst, t_data *new);
void	ft_lstadd_front(t_data **lst, t_data *new);
void	ft_lstdelone(t_data *lst);
void	ft_lstclear(t_data **lst);
int		ft_lstmax_index(t_data *lst);
int		ft_lstmin_index(t_data *lst);
int		check_sorted(t_data *lst);
int		ft_newisdigit(int c);
int		ft_newatoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_lstsize(t_data *lst);
t_data	*ft_lstnew(int content);
t_data	*ft_lstlast(t_data *lst);
#endif
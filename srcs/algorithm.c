/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:06:30 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 17:22:59 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Handles 2 numbers */
void	ft_sort_2(t_element **list)
{
	if ((*list)->number > (*list)->next->number)
		ft_swap(*list, 'a');
}

/* Handles 3 numbers */
void	ft_sort_3(t_element **a)
{
	if (ft_is_sorted(*a) == 1)
		return ;
	if ((*a)->number == ft_get_min(*a)
		&& (*a)->next->number == ft_get_max(*a))
	{
		ft_swap(*a, 'a');
		ft_rotate(a, 'a');
	}
	else if ((*a)->next->number == ft_get_min(*a)
		&& (ft_lstlast(*a)->number) == ft_get_max(*a))
		ft_swap(*a, 'a');
	else if (ft_lstlast(*a)->number == ft_get_min(*a)
		&& (*a)->next->number == ft_get_max(*a))
		ft_reverse_rotate(a, 'a');
	else if ((*a)->next->number == ft_get_min(*a)
		&& (*a)->number == ft_get_max(*a))
		ft_rotate(a, 'a');
	else
	{
		ft_rotate(a, 'a');
		ft_swap(*a, 'a');
	}
}

/* Handles 4 numbers */
void	ft_sort_4(t_element **a, t_element **b)
{
	ft_push(a, b, 'b');
	ft_sort_3(a);
	ft_push(b, a, 'a');
	if ((*a)->number == ft_get_max(*a))
		ft_rotate(a, 'a');
	else if ((*a)->number > (*a)->next->number
		&& (*a)->number > (*a)->next->next->number)
	{
		ft_reverse_rotate(a, 'a');
		ft_swap(*a, 'a');
		ft_rotate(a, 'a');
		ft_rotate(a, 'a');
	}
	else if ((*a)->number > (*a)->next->number
		&& (*a)->number < (*a)->next->next->number)
		ft_swap(*a, 'a');
}

/* Handles 5 numbers */
void	ft_sort_5(t_element **a, t_element **b)
{
	ft_push(a, b, 'b');
	ft_sort_4(a, b);
	ft_push(b, a, 'a');
	if ((*a)->number == ft_get_min(*a))
		return ;
	else if ((*a)->number == ft_get_max(*a))
		ft_rotate(a, 'a');
	else if ((*a)->number > (*a)->next->number
		&& (*a)->number < (*a)->next->next->number)
		ft_swap(*a, 'a');
	else if ((*a)->number > (*a)->next->number
		&& (*a)->number > (*a)->next->next->number
		&& (*a)->number < (*a)->next->next->next->number)
	{
		ft_swap(*a, 'a');
		ft_rotate(a, 'a');
		ft_swap(*a, 'a');
		ft_reverse_rotate(a, 'a');
	}
	else
	{
		ft_reverse_rotate(a, 'a');
		ft_swap(*a, 'a');
		return (ft_rotate(a, 'a'), ft_rotate(a, 'a'));
	}
}

/* Handles more than 5 numbers by using Radix sorting */
void	ft_sort_radix(t_element **a, t_element **b)
{
	int	biggest_number;
	int	max_bit;

	biggest_number = ft_lstsize(*a) - 1;
	max_bit = 0;
	while (biggest_number >> max_bit)
	{
		ft_bit_shifting(a, b, max_bit);
		while (ft_lstsize(*b) > 0 && *b)
			ft_push(b, a, 'a');
		max_bit++;
	}
}

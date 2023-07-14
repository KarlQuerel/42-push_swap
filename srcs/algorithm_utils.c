/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:17:12 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 20:00:45 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Checks if pile is sorted */
bool	ft_is_sorted(t_element *list)
{
	t_element	*tmp;

	tmp = list;
	if (tmp == NULL)
		return (false);
	while (tmp->next != NULL)
	{
		if (tmp->number > tmp->next->number)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

/* Returns the minimum value of a list */
long	ft_get_min(t_element *list)
{
	t_element	*tmp;
	long		min;

	tmp = list;
	min = tmp->number;
	while (tmp != NULL)
	{
		if (tmp->number < min)
			min = tmp->number;
		tmp = tmp->next;
	}
	return (min);
}

/* Returns the maximum value of a list */
long	ft_get_max(t_element *list)
{
	t_element	*tmp;
	long		max;

	max = -2147483648;
	tmp = list;
	if (tmp)
		max = tmp->number;
	while (tmp != NULL)
	{
		if (tmp->number > max)
			max = tmp->number;
		tmp = tmp->next;
	}
	return (max);
}

/* Shifts bits towards the right by max_bit amount */
void	ft_bit_shifting(t_element **a, t_element **b, int max_bit)
{
	int		i;
	int		size;
	long	tmp_nb;

	i = 0;
	size = ft_lstsize(*a);
	while (i < size)
	{
		tmp_nb = (*a)->number;
		if ((tmp_nb >> max_bit) & 1)
			ft_rotate(a, 'a');
		else
			ft_push(a, b, 'b');
		i++;
	}
}

/* Transforms the list into a consecutive digit sequence, starting with
the minimum */
t_element	*ft_transform_list(t_element *list)
{
	t_element	*result;
	t_element	*actual;
	t_element	*incr;
	int			min;

	actual = list;
	result = 0;
	while (actual)
	{
		incr = list;
		min = 0;
		while (incr)
		{
			if (incr->number < actual->number)
				min ++;
			incr = incr->next;
		}
		incr = ft_lstnew(min);
		ft_lstadd_back(&result, incr);
		actual = actual->next;
	}
	ft_free(&list);
	return (result);
}

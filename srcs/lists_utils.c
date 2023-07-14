/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:55:17 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 20:24:30 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Returns the size of a list */
int	ft_lstsize(t_element *first)
{
	int	i;

	i = 0;
	while (first)
	{
		first = first->next;
		i++;
	}
	return (i);
}

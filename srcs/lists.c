/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:19:35 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 18:16:40 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Creates a new node, assigns parameters as a value
and returns it*/
t_element	*ft_lstnew(int n)
{
	t_element	*new;

	new = malloc(sizeof(t_element));
	if (new == NULL)
		return (NULL);
	new->number = n;
	new->next = NULL;
	return (new);
}

/* Inserts a node in parameters on the first position on **list */
void	ft_lstadd_front(t_element **list, t_element *first)
{
	if (*list == NULL)
	{
		*list = first;
		return ;
	}
	first->next = *list;
	*list = first;
}

/* Inserts a node on the last position */
void	ft_lstadd_back(t_element **list, t_element *last)
{
	if (!list || !last)
		return ;
	while (*list)
		list = &((*list)->next);
	*list = last;
}

/* Puts the node in parameters in the last position
and returns it*/
t_element	*ft_lstlast(t_element *last)
{
	if (last == NULL)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	return (last);
}

/* Puts the node in parameters in the last-1 position
and returns it*/
t_element	*ft_lst_prev_last(t_element *last)
{
	if (last == NULL || last->next == NULL)
		return (NULL);
	while (last->next->next != NULL)
		last = last->next;
	return (last);
}

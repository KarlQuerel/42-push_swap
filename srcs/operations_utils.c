/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:12:30 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/05 15:54:25 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* rra OR rrb = bottom number becomes the top one */
void	ft_reverse_rotate(t_element **list, char trigger)
{
	t_element	*head;
	t_element	*tail;
	t_element	*prev_tail;

	if (ft_lstsize(*list) < 2)
		return ;
	head = *list;
	tail = ft_lstlast(head);
	prev_tail = ft_lst_prev_last(head);
	tail->next = head;
	prev_tail->next = NULL;
	*list = tail;
	if (trigger == 'a')
		ft_putstr_fd("rra\n", 1);
	if (trigger == 'b')
		ft_putstr_fd("rrb\n", 1);
}

/* rrr = Double reverse, rra AND rrb */
void	ft_rrr(t_element *list1, t_element *list2)
{
	if (ft_lstsize(list1) > 1)
		ft_reverse_rotate(&list1, '4');
	if (ft_lstsize(list2) > 1)
		ft_reverse_rotate(&list2, '2');
	ft_putstr_fd("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:16:46 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 18:15:43 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* sa OR sb = Swaps the top numbers in list A or B
depending on the trigger */
void	ft_swap(t_element *list, char trigger)
{
	t_element	*head;
	t_element	*next;
	long		tmp_nb;

	if (ft_lstsize(list) < 2)
		return ;
	head = list;
	next = head->next;
	tmp_nb = head->number;
	head->number = next->number;
	next->number = tmp_nb;
	if (trigger == 'a')
		ft_putstr_fd("sa\n", 1);
	else if (trigger == 'b')
		ft_putstr_fd("sb\n", 1);
}

/* ss = Double swap, sa and sb */
void	ft_ss(t_element *list1, t_element *list2)
{
	if (ft_lstsize(list1) > 1)
		ft_swap(list1, '4');
	if (ft_lstsize(list2) > 1)
		ft_swap(list2, '2');
	ft_putstr_fd("ss\n", 1);
}

/* pa OR pb = Puts the top number of B at the top of A
			OR Puts the top number of A at the top of B*/
void	ft_push(t_element **src, t_element **dst, char trigger)
{
	t_element	*store;

	if (ft_lstsize(*src) == 0)
		return ;
	store = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = store;
	if (trigger == 'a')
		ft_putstr_fd("pa\n", 1);
	if (trigger == 'b')
		ft_putstr_fd("pb\n", 1);
}

/* ra OR rb = Puts the top number of a list to the bottom
A or B depending on the trigger */
void	ft_rotate(t_element **list, char trigger)
{
	t_element	*head;
	t_element	*tail;

	if (ft_lstsize(*list) < 2)
		return ;
	head = *list;
	tail = ft_lstlast(head);
	*list = head->next;
	head->next = NULL;
	tail->next = head;
	if (trigger == 'a')
		ft_putstr_fd("ra\n", 1);
	if (trigger == 'b')
		ft_putstr_fd("rb\n", 1);
}

/* rr = Double rotate, ra and rb */
void	ft_rr(t_element **list1, t_element **list2)
{
	if (ft_lstsize(*list1) > 1)
		ft_rotate(list1, '4');
	if (ft_lstsize(*list2) > 1)
		ft_rotate(list2, '2');
	ft_putstr_fd("rr\n", 1);
}

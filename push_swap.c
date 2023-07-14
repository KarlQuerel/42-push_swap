/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:58:36 by kquerel           #+#    #+#             */
/*   Updated: 2023/02/01 16:05:21 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	note_t	*head;

	*head = NULL;

	head = (node_t *)malloc(sizeof(node_t));
	if (head == NULL)
		return 1;

	head->val = 1;

}

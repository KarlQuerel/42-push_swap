/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:56:38 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 19:55:49 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Strlen modified */
int	ft_strlen_push(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* Atoi modified */
long	ft_long_atoi(char *nptr)
{
	long			nb;
	unsigned long	i;
	unsigned long	negative;

	i = 0;
	nb = 0;
	negative = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = 1;
		if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	if (negative == 1)
		nb = nb * (-1);
	return (nb);
}

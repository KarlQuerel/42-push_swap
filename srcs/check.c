/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:00:32 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/24 19:30:15 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Checks if all arguments are integers */
void	ft_is_param_int(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (((av[i][j]) < '0') || (av[i][j]) > '9')
			{
				if ((av[i][j] != '-' && av[i][j] != '+'))
				{
					ft_putstr_fd("Error\n", 2);
					exit (1);
				}
			}
			j++;
		}
		i++;
	}
}

/* Checks empty string */
void	ft_empty_string(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0')
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		if (av[i][0] == '-' || av[i][0] == '+')
		{
			if (av[i][1] < '0' || av[i][1] > '9')
			{
				ft_putstr_fd("Error\n", 2);
				exit (1);
			}
		}
		i++;
	}
}

/* Checks if there are no duplicates */
void	ft_is_param_dup(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (av[j] != NULL)
		{
			if (ft_atoi(av[i]) == (ft_atoi(av[j])))
			{
				ft_putstr_fd("Error\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
}

/* Checks ac count and calls algorithm functions according to it*/
void	ft_ac_count(int ac, t_element **lista, t_element **listb)
{
	if (ac == 3)
	{
		ft_sort_2(lista);
	}
	else if (ac == 4)
		ft_sort_3(lista);
	else if (ac == 5)
		ft_sort_4(lista, listb);
	else if (ac == 6)
		ft_sort_5(lista, listb);
	else
		ft_sort_radix(lista, listb);
}

/* Handles int min and int max */
void	ft_check_max_min(int ac, char **av)
{
	long long	nb;
	int			i;

	i = 1;
	while (i < ac)
	{
		nb = ft_long_atoi(av[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
	}
}

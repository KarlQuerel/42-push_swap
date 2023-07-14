/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:58:36 by kquerel           #+#    #+#             */
/*   Updated: 2023/03/27 16:14:58 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Regroups all checking functions */
void	ft_check(int ac, char **av)
{
	ft_is_param_int(ac, av);
	ft_empty_string(ac, av);
	ft_is_param_dup(ac, av);
	ft_check_max_min(ac, av);
}

/* Main function */
int	main(int ac, char **av)
{
	t_element	*lista;
	t_element	*listb;
	int			i;

	lista = NULL;
	listb = NULL;
	if (ac <= 2)
		exit (1);
	ft_check(ac, av);
	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(&lista, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	if (ft_is_sorted(lista) == 1)
		(ft_free(&lista), exit (1));
	lista = ft_transform_list(lista);
	listb = 0;
	ft_ac_count(ac, &lista, &listb);
	ft_free(&lista);
	ft_free(&listb);
	return (0);
}

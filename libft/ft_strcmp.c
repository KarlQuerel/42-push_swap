/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:42:27 by kquerel           #+#    #+#             */
/*   Updated: 2023/03/30 14:43:28 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "kkajhkj";
	char	*s2 = "kkajhkjdh";

	printf("Regular function :%i\n", strcmp(s1, s2));
	printf("My function :%i\n", ft_strcmp(s1, s2));
	return (0);
}
*/

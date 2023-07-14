/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquerel <kquerel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:14:39 by kquerel           #+#    #+#             */
/*   Updated: 2023/05/23 20:24:35 by kquerel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>

typedef struct s_element {
	long				number;
	long				conv_number;
	struct s_element	*next;
}	t_element;

/* MAIN.C */
void		ft_check(int ac, char **av);

/* ALGORITHM.C */
void		ft_sort_2(t_element **list);
void		ft_sort_3(t_element **a);
void		ft_sort_4(t_element **a, t_element **b);
void		ft_sort_5(t_element **a, t_element **b);
void		ft_sort_radix(t_element **a, t_element **b);

/* ALGORITHM_UTILS.C */
bool		ft_is_sorted(t_element *list);
long		ft_get_min(t_element *list);
long		ft_get_max(t_element *list);
void		ft_bit_shifting(t_element **a, t_element **b, int max_bit);
t_element	*ft_transform_list(t_element *list);

/* CHECK.C */
void		ft_is_param_int(int ac, char **av);
void		ft_is_param_dup(int ac, char **av);
void		ft_check_max_min(int ac, char **av);
void		ft_empty_string(int ac, char **av);
void		ft_ac_count(int ac, t_element **lista, t_element **listb);

/* CHECK_UTILS.C */
int			ft_strlen_push(char *str);
long		ft_long_atoi(char *nptr);

/* LISTS.C */
void		ft_lstadd_back(t_element **lst, t_element *new);
void		ft_lstadd_front(t_element **list, t_element *node);
t_element	*ft_lstnew(int n);
t_element	*ft_lstlast(t_element *node);
t_element	*ft_lst_prev_last(t_element *last);

/* LISTS_UTILS.C */
int			ft_lstsize(t_element *first);

/* OPERATIONS.C */
void		ft_swap(t_element *list, char trigger);
void		ft_ss(t_element *list1, t_element *list2);
void		ft_push(t_element **src, t_element **dst, char trigger);
void		ft_rotate(t_element **list, char trigger);
void		ft_rr(t_element **list1, t_element **list2);

/* OPERATIONS_UTILS.C */
void		ft_reverse_rotate(t_element **list, char trigger);
void		ft_rrr(t_element *list1, t_element *list2);

/* EXIT.C */
void		ft_free(t_element **list);

#	endif
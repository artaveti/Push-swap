/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_butterfly.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:19:18 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:37 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_butterfly(t_num_list **a, t_num_list **b)
{
	t_list_for_butterfly	v;

	v.ordered = ft_create_arr_for_butterfly(a);
	v.n = ft_find_n(a);
	v.i = ft_lstsize_for_pushswap(*a);
	v.counter = 0;
	while (v.counter < v.i)
	{
		if (v.counter + v.n >= v.i)
			v.n--;
		if ((*a)->content <= v.ordered[v.counter])
			ft_pb_rb_in_butterfly(&v.counter, a, b);
		else if ((*a)->content <= v.ordered[v.counter + v.n])
		{
			ft_pb(a, b);
			v.counter++;
		}
		else
			ft_ra(a);
	}
	ft_pa_rb_rrb_of_b_in_butterfly(a, b);
	free(v.ordered);
	return ;
}

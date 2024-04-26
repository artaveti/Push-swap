/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rra_pb_smallest.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:13:01 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:04:48 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_ra_rra_pb_smallest(t_num_list **a, t_num_list **b)
{
	int			list_size;
	int			position;

	list_size = ft_lstsize_for_pushswap(*a);
	position = ft_find_position_of_smallest(a);
	if ((list_size % 2 != 0 && position == list_size / 2)
		|| position < list_size / 2)
	{
		while (position > 0)
		{
			ft_ra(a);
			position--;
		}
		ft_pb(a, b);
	}
	else
	{
		while (position < list_size)
		{
			ft_rra(a);
			position++;
		}
		ft_pb(a, b);
	}
	return ;
}

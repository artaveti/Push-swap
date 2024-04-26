/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_rb_rrb_of_b_in_butterfly.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:04:55 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:04:15 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_pa_rb_rrb_of_b_in_butterfly(t_num_list **a, t_num_list **b)
{
	int	len_of_list;
	int	pos_of_max;
	int	step;

	len_of_list = ft_lstsize_for_pushswap(*b);
	while (len_of_list-- > 0)
	{
		pos_of_max = ft_find_position_of_biggest(b);
		if (((len_of_list + 1) % 2 != 0 && pos_of_max == (len_of_list + 1) / 2)
			|| pos_of_max < (len_of_list + 1) / 2)
		{
			step = 0 - pos_of_max;
			while (step++ < 0)
				ft_rb(b);
			ft_pa(a, b);
		}
		else
		{
			step = (len_of_list + 1) - pos_of_max;
			while (step-- > 0)
				ft_rrb(b);
			ft_pa(a, b);
		}
	}
	return ;
}

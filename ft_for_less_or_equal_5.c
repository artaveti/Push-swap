/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_less_or_equal_5.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:47:16 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:49:12 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_for_less_or_equal_5(int splitted_str_len,
	t_num_list **a, t_num_list **b)
{
	int	count;

	count = splitted_str_len - 3;
	while (count > 0)
	{
		ft_ra_rra_pb_smallest(a, b);
		count--;
	}
	count = splitted_str_len - 3;
	ft_for_less_or_equal_3(a);
	while (count > 0)
	{
		ft_pa(a, b);
		count--;
	}
	return ;
}

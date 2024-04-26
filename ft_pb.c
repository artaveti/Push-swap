/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:10:31 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_pb(t_num_list **a, t_num_list **b)
{
	t_num_list	*tmp;

	if (ft_lstsize_for_pushswap(*a) >= 1)
	{
		tmp = *a;
		*a = (*a)->next;
		ft_lstadd_front_for_pushswap(b, tmp);
	}
	write(1, "pb\n", 3);
	return ;
}

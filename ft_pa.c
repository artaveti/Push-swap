/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:54 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_pa(t_num_list **a, t_num_list **b)
{
	t_num_list	*tmp;

	if (ft_lstsize_for_pushswap(*b) >= 1)
	{
		tmp = *b;
		*b = (*b)->next;
		ft_lstadd_front_for_pushswap(a, tmp);
	}
	write(1, "pa\n", 3);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:22:46 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_rrr(t_num_list **a, t_num_list **b)
{
	t_num_list	*tmp;
	t_num_list	*penultimate;

	if (ft_lstsize_for_pushswap(*a) >= 2)
	{
		tmp = *a;
		penultimate = ft_lst_penultimate(*a);
		*a = ft_lstlast_for_pushswap(*a);
		penultimate->next = NULL;
		(*a)->next = tmp;
	}
	if (ft_lstsize_for_pushswap(*b) >= 2)
	{
		tmp = *b;
		penultimate = ft_lst_penultimate(*b);
		*b = ft_lstlast_for_pushswap(*b);
		penultimate->next = NULL;
		(*b)->next = tmp;
	}
	write(1, "rrr\n", 4);
	return ;
}

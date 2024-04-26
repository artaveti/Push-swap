/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb_for_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:21:32 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 21:09:27 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_rrb_for_checker(t_num_list **b)
{
	t_num_list	*tmp;
	t_num_list	*penultimate;

	if (ft_lstsize_for_pushswap(*b) >= 2)
	{
		tmp = *b;
		penultimate = ft_lst_penultimate(*b);
		*b = ft_lstlast_for_pushswap(*b);
		penultimate->next = NULL;
		(*b)->next = tmp;
	}
	return ;
}

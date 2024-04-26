/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_for_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:16:35 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 21:09:19 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_rb_for_checker(t_num_list **b)
{
	t_num_list	*tmp;

	if (ft_lstsize_for_pushswap(*b) >= 2)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = NULL;
		ft_lstadd_back_for_pushswap(b, tmp);
	}
	return ;
}

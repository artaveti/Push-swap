/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_for_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:15:34 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 21:09:17 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_ra_for_checker(t_num_list **a)
{
	t_num_list	*tmp;

	if (ft_lstsize_for_pushswap(*a) >= 2)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_back_for_pushswap(a, tmp);
	}
	return ;
}

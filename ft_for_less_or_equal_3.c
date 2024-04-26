/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_less_or_equal_3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:37:01 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:03:47 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_for_less_or_equal_3(t_num_list **a)
{
	int	list_size;

	list_size = ft_lstsize_for_pushswap(*a);
	if (list_size == 2 && (*a)->content > (*a)->next->content)
		ft_sa(*a);
	if (list_size == 3)
	{
		if (((*a)->content < (*a)->next->next->content
				&& (*a)->next->next->content < (*a)->next->content)
			|| ((*a)->content > (*a)->next->content
				&& (*a)->next->next->content > (*a)->content))
			ft_sa(*a);
		if (((*a)->content > (*a)->next->next->content
				&& (*a)->next->next->content > (*a)->next->content)
			|| ((*a)->content > (*a)->next->content
				&& (*a)->next->content > (*a)->next->next->content))
			ft_ra(a);
		if ((*a)->content > (*a)->next->content
			&& (*a)->next->next->content > (*a)->content)
			ft_sa(*a);
		else if ((*a)->content > (*a)->next->next->content
			&& (*a)->next->content > (*a)->content)
			ft_rra(a);
	}
	return ;
}

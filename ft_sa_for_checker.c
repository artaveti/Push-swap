/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_for_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:23:52 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 21:09:35 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_sa_for_checker(t_num_list *a)
{
	int	tmp;

	if (ft_lstsize_for_pushswap(a) >= 2)
	{
		tmp = a->content;
		a->content = a->next->content;
		a->next->content = tmp;
	}
	return ;
}

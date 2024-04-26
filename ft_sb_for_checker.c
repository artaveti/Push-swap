/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb_for_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:24:48 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 21:09:40 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_sb_for_checker(t_num_list *b)
{
	int	tmp;

	if (ft_lstsize_for_pushswap(b) >= 2)
	{
		tmp = b->content;
		b->content = b->next->content;
		b->next->content = tmp;
	}
	return ;
}

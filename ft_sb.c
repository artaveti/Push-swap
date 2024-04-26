/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:24:48 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_sb(t_num_list *b)
{
	int	tmp;

	if (ft_lstsize_for_pushswap(b) >= 2)
	{
		tmp = b->content;
		b->content = b->next->content;
		b->next->content = tmp;
	}
	write(1, "sb\n", 3);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_for_pushswap.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:58:47 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_lstadd_back_for_pushswap(t_num_list **list, t_num_list *new_list)
{
	t_num_list	*tmp;

	if (!new_list)
		return ;
	if (!*list)
	{
		*list = new_list;
		return ;
	}
	tmp = ft_lstlast_for_pushswap(*list);
	tmp->next = new_list;
	return ;
}

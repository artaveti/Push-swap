/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position_of_biggest.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:32:15 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 13:43:20 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	ft_find_position_of_biggest(t_num_list **list)
{
	int			position;
	int			big;
	t_num_list	*tmp;

	tmp = *list;
	position = 0;
	big = tmp->content;
	while (tmp->next != NULL)
	{
		if (big < tmp->content)
			big = tmp->content;
		tmp = tmp->next;
	}
	if (big < tmp->content)
		big = tmp->content;
	tmp = *list;
	while (tmp->content != big)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_position_of_smallest.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:34:25 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	ft_find_position_of_smallest(t_num_list **list)
{
	int			position;
	int			small;
	t_num_list	*tmp;

	tmp = *list;
	position = 0;
	small = tmp->content;
	while (tmp->next != NULL)
	{
		if (small > tmp->content)
			small = tmp->content;
		tmp = tmp->next;
	}
	if (small > tmp->content)
		small = tmp->content;
	tmp = *list;
	while (tmp->content != small)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

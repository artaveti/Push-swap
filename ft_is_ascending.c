/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascending.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:48:23 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 16:01:02 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_is_ascending(t_num_list **a)
{
	t_num_list	*tmp;

	tmp = *a;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
		{
			return ;
		}
		tmp = tmp->next;
	}
	exit(EXIT_SUCCESS);
}

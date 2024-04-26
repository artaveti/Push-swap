/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_for_pushswap.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:00:53 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	ft_lstsize_for_pushswap(t_num_list *list)
{
	int			i;
	t_num_list	*tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		tmp = tmp -> next;
		i++;
	}
	return (i);
}
